/*
Copyright (c) by respective owners including Yahoo!, Microsoft, and
individual contributors. All rights reserved.  Released under a BSD
license as described in the file LICENSE.
 */
#pragma once
namespace LDA{
  po::options_description options();
  LEARNER::learner* setup(vw&, po::variables_map&);
}
