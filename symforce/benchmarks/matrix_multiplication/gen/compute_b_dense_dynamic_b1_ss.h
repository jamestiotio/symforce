// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cpp_templates/function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once


#include <Eigen/Dense>



namespace sym {


/**
* This function was autogenerated. Do not modify by hand.
*
* Args:
*     x0: Scalar
*     x1: Scalar
*
* Outputs:
*     result: Matrix7_7
*/
template <typename Scalar>
Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> ComputeBDenseDynamicB1Ss(const Scalar x0, const Scalar x1) {

    // Total ops: 9

    // Input arrays

    // Intermediate terms (2)
    const Scalar _tmp0 = -x0 + x1;
    const Scalar _tmp1 = x1 + 2;

    // Output terms (1)
    Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> _result(7, 7);

    _result.setZero();

    _result(0, 1) = x1;
    _result(0, 2) = Scalar(-1.0);
    _result(0, 3) = 1 - x0;
    _result(1, 1) = 2;
    _result(1, 4) = Scalar(-1.0);
    _result(2, 2) = -4;
    _result(2, 5) = _tmp0;
    _result(3, 3) = 2;
    _result(3, 6) = -4;
    _result(4, 0) = _tmp1*x0;
    _result(4, 4) = -x0 - 1;
    _result(5, 0) = _tmp1 - x0;
    _result(5, 5) = -1;
    _result(6, 0) = _tmp0;
    _result(6, 6) = -x0 - x1;

    return _result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
