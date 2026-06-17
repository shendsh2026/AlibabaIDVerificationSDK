//
//  core.hpp
//  MNN
//
//  Created by MNN on 2023/04/18.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef CORE_HPP
#define CORE_HPP

#include <IDVMNN/MNNDefine.h>
#include <IDVMNN/expr/Expr.hpp>
#include <IDVMNN/expr/NeuralNetWorkOp.hpp>
#include "types.hpp"

namespace IDVMNN {
namespace CV {

enum DecompTypes {
    DECOMP_LU = 0,
    DECOMP_SVD = 1,
    DECOMP_EIG = 2,
    DECOMP_CHOLESKY = 3,
    DECOMP_QR = 4,
    DECOMP_NORMAL = 16
};

MNN_PUBLIC std::pair<bool, VARP> solve(VARP src1, VARP src2, int flags = DECOMP_LU);

} // CV
} // MNN
#endif // CORE_HPP
