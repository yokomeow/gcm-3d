#ifndef GCM_DebugFailureModel_H
#define GCM_DebugFailureModel_H

#include "libgcm/failure/FailureModel.hpp"
#include "libgcm/failure/criteria/MaxStressFailureCriterion.hpp"
#include "libgcm/failure/correctors/ZeroDeviatorFailedMaterialCorrector.hpp"

using namespace std;
using namespace gcm;

namespace gcm {

    class DebugFailureModel : public FailureModel {
    public:
        DebugFailureModel();
    private:
        USE_LOGGER;
    };
}

#endif

