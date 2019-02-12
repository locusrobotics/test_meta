#!/usr/bin/env groovy
@Library('tailor-meta@master')_
tailorTestPipeline(
  // Name of job that generated this test definition.
  rosdistro_job: '/ci/toydistro/master',
  // Distribution name
  rosdistro_name: 'ros1',
  // Release track to test branch against.
  release_track: 'hotdog',
  // Release label to pull test images from.
  release_label: 'hotdog',
  // OS distributions to test.
  distributions: ['xenial', 'bionic'],
  // Bundle flavour to test against.
  flavour: 'dev',
  // Branch of tailor_meta to build against
  tailor_meta_branch: 'master',
  // Master or release branch associated with this track
  source_branch: 'master',
  // Docker registry where test image is stored
  docker_registry: 'https://084758475884.dkr.ecr.us-east-1.amazonaws.com/locus-toydistro'
)