#!/usr/bin/env groovy
@Library('tailor-meta@RST-1658_Update-repo-settings-on-build')_
tailorTestPipeline(
  // Name of job that generated this test definition.
  rosdistro_job: '/ci/toydistro/master',
  // Distribution name
  rosdistro_name: 'ros1',
  // Release track to test branch against.
  release_track: 'hotdog',
  // OS distributions to test.
  distributions: ['xenial', 'bionic'],
  // Bundle flavour to test against.
  flavour: 'dev',
  // Branch of tailor_meta to build against
  tailor_meta_branch: 'RST-1658_Update-repo-settings-on-build',
  // Master branch of this repo, to determine whether to automatically trigger builds
  repo_main_branch: 'master',
  // Docker registry where test image is stored
  docker_registry: 'https://084758475884.dkr.ecr.us-east-1.amazonaws.com/locus-toydistro'
)