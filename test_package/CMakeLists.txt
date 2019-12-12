cmake_minimum_required(VERSION 2.8.3)
project(test_package)

set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++14;-Wall;-Werror")

find_package(catkin REQUIRED COMPONENTS)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

if (CATKIN_ENABLE_TESTING)
  find_package(roslint REQUIRED)
  find_package(rostest REQUIRED)

  # Lint tests
  set(ROSLINT_CPP_OPTS "--filter=-legal/copyright")
  roslint_cpp()
  roslint_add_test()

  # catkin_add_gtest
  catkin_add_gtest(test_add_gtest
    test/test_add_gtest.cpp
  )

  # add_rostest_gtest
  add_rostest_gtest(test_add_rostest_gtest
    test/test_add_rostest_gtest.test
    test/test_add_rostest_gtest.cpp
  )
  target_link_libraries(test_add_rostest_gtest
    ${catkin_LIBRARIES}
  )

  # catkin_add_nosetests
  catkin_add_nosetests(test/test_catkin_add_nosetests.py)

  # add_rostest
  catkin_install_python(
    PROGRAMS
      test/test_add_rostest
    DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
  add_rostest(test/test_add_rostest.test)

  # catkin_virtualenv
  find_package(catkin_virtualenv REQUIRED)
  catkin_generate_virtualenv()

  catkin_add_nosetests(test/test_virtualenv_catkin_add_nosetests.py
    DEPENDENCIES ${PROJECT_NAME}_generate_virtualenv
  )

  catkin_install_python(
    PROGRAMS
      test/test_virtualenv_add_rostest
    DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
  add_rostest(test/test_virtualenv_add_rostest.test
    DEPENDENCIES ${PROJECT_NAME}_generate_virtualenv
  )

endif()
