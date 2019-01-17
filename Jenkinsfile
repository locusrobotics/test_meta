#!/usr/bin/env groovy
@Library('tailor-meta@release-track')_
tailorTestPipeline(
  // Name of job that generated this test definition.
  rosdistro_job: '/ci/toydistro/release%2F18.4',
  // Distribution name
  rosdistro_name: 'ros1',
  // Release track to test branch against.
  release_track: '18.4',
  // Release label to pull test images from.
  release_label: '18.4-candidate',
  // OS distributions to test.
  distributions: ['xenial', 'bionic'],
  // Bundle flavour to test against.
  flavour: 'dev',
  // Branch of tailor_meta to build against
  tailor_meta_branch: 'release-track',
  // Master or release branch associated with this track
  source_branch: 'release/18.4',
  // Docker registry where test image is stored
  docker_registry: 'https://084758475884.dkr.ecr.us-east-1.amazonaws.com/locus-toydistro'
)