cmake_minimum_required(VERSION 2.8.3)
project(test_meta)

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

endif()
