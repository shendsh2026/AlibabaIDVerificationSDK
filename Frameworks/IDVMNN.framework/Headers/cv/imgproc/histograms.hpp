//
//  histograms.hpp
//  MNN
//
//  Created by MNN on 2022/07/26.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef HISTOGRAMS_HPP
#define HISTOGRAMS_HPP

#include <IDVMNN/MNNDefine.h>
#include <IDVMNN/expr/Expr.hpp>

namespace IDVMNN {
namespace CV {
using namespace Express;

MNN_PUBLIC VARP calcHist(VARPS images, const std::vector<int>& channels, VARP mask,
                         const std::vector<int>& histSize, const std::vector<float>& ranges, bool accumulate = false);

} // CV
} // MNN
#endif // HISTOGRAMS_HPP
