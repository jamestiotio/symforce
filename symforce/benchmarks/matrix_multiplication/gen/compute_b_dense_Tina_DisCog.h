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
Eigen::Matrix<Scalar, 11, 11> ComputeBDenseTinaDiscog(const Scalar x0, const Scalar x1) {

    // Total ops: 26

    // Input arrays

    // Intermediate terms (7)
    const Scalar _tmp0 = Scalar(1.0) / (x1);
    const Scalar _tmp1 = -x1 - 1;
    const Scalar _tmp2 = x1 - 2;
    const Scalar _tmp3 = 2*x0;
    const Scalar _tmp4 = _tmp3*x1;
    const Scalar _tmp5 = (Scalar(1)/Scalar(2))*x1;
    const Scalar _tmp6 = x0 + 2;

    // Output terms (1)
    Eigen::Matrix<Scalar, 11, 11> _result;

    _result.setZero();

    _result(0, 1) = 1;
    _result(0, 2) = 1;
    _result(0, 5) = 3 - x1;
    _result(0, 9) = _tmp0*(x0 + x1);
    _result(1, 5) = 3;
    _result(1, 7) = 2;
    _result(2, 0) = x1 - 4;
    _result(2, 1) = _tmp1;
    _result(2, 3) = 2;
    _result(2, 4) = -1;
    _result(2, 5) = 3;
    _result(2, 6) = _tmp1;
    _result(2, 7) = 2 - x0;
    _result(2, 9) = _tmp2;
    _result(3, 6) = 3;
    _result(3, 7) = -6;
    _result(4, 1) = 2;
    _result(4, 3) = x0;
    _result(4, 5) = 2;
    _result(4, 7) = x1;
    _result(5, 1) = _tmp4;
    _result(5, 3) = -1;
    _result(5, 4) = -2;
    _result(5, 6) = -_tmp4;
    _result(5, 7) = -_tmp0;
    _result(6, 3) = _tmp3;
    _result(6, 7) = _tmp5;
    _result(6, 8) = -2/_tmp2;
    _result(6, 10) = _tmp6;
    _result(7, 1) = -_tmp3;
    _result(7, 3) = 1;
    _result(7, 6) = -1;
    _result(7, 10) = 2*x1 + 1;
    _result(8, 1) = -_tmp6;
    _result(8, 2) = Scalar(-0.5);
    _result(8, 6) = x0;
    _result(8, 10) = -2;
    _result(9, 0) = x1;
    _result(9, 1) = -2;
    _result(9, 2) = Scalar(1.0)*x1;
    _result(9, 4) = x0;
    _result(10, 3) = -1;
    _result(10, 5) = -_tmp5*x0;
    _result(10, 7) = -1/x0;

    return _result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
