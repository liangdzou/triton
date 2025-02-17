#ifndef TRITON_CONVERSION_TRITONGPU_TO_ELEMENTWISE_OP_H
#define TRITON_CONVERSION_TRITONGPU_TO_ELEMENTWISE_OP_H

#include "TritonGPUToLLVMBase.h"

using namespace mlir;
using namespace mlir::triton;

void populateElementwiseOpToLLVMPatterns(mlir::LLVMTypeConverter &typeConverter,
                                         RewritePatternSet &patterns,
                                         int numWarps,
                                         AxisInfoAnalysis &axisInfoAnalysis,
                                         const Allocation *allocation,
                                         Value smem, PatternBenefit benefit);

bool isLegalElementwiseOp(Operation *op);

void populateElementwiseOpToPTXPatterns(mlir::LLVMTypeConverter &typeConverter,
                                        RewritePatternSet &patterns,
                                        PatternBenefit benefit);

#endif
