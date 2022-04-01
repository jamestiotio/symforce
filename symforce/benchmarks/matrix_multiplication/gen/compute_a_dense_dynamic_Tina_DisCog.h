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
*     result: Matrix11_11
*/
template <typename Scalar>
Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> ComputeADenseDynamicTinaDiscog(const Scalar x0, const Scalar x1) {

    // Total ops: 28

    // Input arrays

    // Intermediate terms (5)
    const Scalar _tmp0 = x0 + 2;
    const Scalar _tmp1 = std::pow(x0, Scalar(2));
    const Scalar _tmp2 = 2*x0;
    const Scalar _tmp3 = 2*x1;
    const Scalar _tmp4 = x1 + 1;

    // Output terms (1)
    Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> _result(11, 11);

    _result.setZero();

    _result(0, 1) = 1 - x0;
    _result(0, 2) = 1;
    _result(0, 5) = -2;
    _result(0, 9) = 4;
    _result(1, 3) = -4*x1;
    _result(1, 5) = -x0 + x1 + 2;
    _result(1, 7) = 2;
    _result(2, 0) = 2;
    _result(2, 1) = 3;
    _result(2, 3) = -2;
    _result(2, 4) = _tmp0*x0;
    _result(2, 5) = x0 - 2;
    _result(2, 6) = -3;
    _result(2, 7) = -_tmp1;
    _result(2, 9) = 2;
    _result(3, 6) = 4;
    _result(3, 7) = 2;
    _result(4, 1) = _tmp0;
    _result(4, 3) = x0*x1 + x0;
    _result(4, 5) = -2;
    _result(4, 6) = _tmp2;
    _result(4, 9) = 2;
    _result(5, 1) = _tmp0 - x1;
    _result(5, 3) = -2;
    _result(5, 4) = _tmp3;
    _result(5, 6) = -_tmp4;
    _result(5, 7) = 1;
    _result(6, 3) = -4*x0;
    _result(6, 7) = x0;
    _result(6, 8) = Scalar(-2.0);
    _result(6, 10) = Scalar(1.0);
    _result(7, 1) = -2/_tmp1;
    _result(7, 3) = x0/_tmp0;
    _result(7, 6) = -4;
    _result(7, 10) = _tmp2 + 2;
    _result(8, 1) = 1 + Scalar(1.0) / (x1);
    _result(8, 2) = 4;
    _result(8, 6) = 2;
    _result(8, 7) = x0;
    _result(8, 10) = _tmp2;
    _result(9, 0) = x1 + 4;
    _result(9, 1) = -1;
    _result(9, 2) = -_tmp3;
    _result(9, 4) = 1;
    _result(10, 3) = 2;
    _result(10, 5) = -2;
    _result(10, 7) = _tmp4 + x0;

    return _result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
