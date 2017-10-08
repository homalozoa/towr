/**
 @file    kinematic_model.h
 @author  Alexander W. Winkler (winklera@ethz.ch)
 @date    Sep 19, 2017
 @brief   Brief description
 */

#ifndef XPP_OPT_INCLUDE_XPP_MODELS_KINEMATIC_MODEL_H_
#define XPP_OPT_INCLUDE_XPP_MODELS_KINEMATIC_MODEL_H_

#include <memory>

#include <xpp/endeffectors.h>
#include <xpp/state.h>

namespace xpp {
namespace opt {

class KinematicModel {
public:
  using Ptr = std::shared_ptr<KinematicModel>;

  KinematicModel (int n_ee);
  virtual ~KinematicModel ();

  virtual EndeffectorsPos GetNominalStanceInBase() const { return nominal_stance_; };
  virtual Vector3d GetMaximumDeviationFromNominal() const { return max_dev_from_nominal_; };

  EndeffectorsPos nominal_stance_;
  Vector3d max_dev_from_nominal_;
};

} /* namespace opt */
} /* namespace xpp */

#endif /* XPP_OPT_INCLUDE_XPP_MODELS_KINEMATIC_MODEL_H_ */