# -----------------------------------------------------------------------------
# This file was autogenerated by symforce from template:
#     python_templates/ops/CLASS/lie_group_ops.py.jinja
# Do NOT modify by hand.
# -----------------------------------------------------------------------------

import math
import numpy
import typing as T

import sym  # pylint: disable=unused-import


class LieGroupOps(object):
    """
    Python LieGroupOps implementation for <class 'symforce.cam.polynomial_camera_cal.PolynomialCameraCal'>.
    """

    @staticmethod
    def from_tangent(vec, epsilon):
        # type: (T.Sequence[float], float) -> sym.PolynomialCameraCal

        # Total ops: 0

        # Input arrays

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 8
        _res[0] = vec[0]
        _res[1] = vec[1]
        _res[2] = vec[2]
        _res[3] = vec[3]
        _res[4] = vec[4]
        _res[5] = vec[5]
        _res[6] = vec[6]
        _res[7] = vec[7]
        return sym.PolynomialCameraCal.from_storage(_res)

    @staticmethod
    def to_tangent(a, epsilon):
        # type: (sym.PolynomialCameraCal, float) -> T.List[float]

        # Total ops: 0

        # Input arrays
        _a = a.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 8
        _res[0] = _a[0]
        _res[1] = _a[1]
        _res[2] = _a[2]
        _res[3] = _a[3]
        _res[4] = _a[4]
        _res[5] = _a[5]
        _res[6] = _a[6]
        _res[7] = _a[7]
        return _res

    @staticmethod
    def retract(a, vec, epsilon):
        # type: (sym.PolynomialCameraCal, T.Sequence[float], float) -> sym.PolynomialCameraCal

        # Total ops: 8

        # Input arrays
        _a = a.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 8
        _res[0] = _a[0] + vec[0]
        _res[1] = _a[1] + vec[1]
        _res[2] = _a[2] + vec[2]
        _res[3] = _a[3] + vec[3]
        _res[4] = _a[4] + vec[4]
        _res[5] = _a[5] + vec[5]
        _res[6] = _a[6] + vec[6]
        _res[7] = _a[7] + vec[7]
        return sym.PolynomialCameraCal.from_storage(_res)

    @staticmethod
    def local_coordinates(a, b, epsilon):
        # type: (sym.PolynomialCameraCal, sym.PolynomialCameraCal, float) -> T.List[float]

        # Total ops: 8

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 8
        _res[0] = -_a[0] + _b[0]
        _res[1] = -_a[1] + _b[1]
        _res[2] = -_a[2] + _b[2]
        _res[3] = -_a[3] + _b[3]
        _res[4] = -_a[4] + _b[4]
        _res[5] = -_a[5] + _b[5]
        _res[6] = -_a[6] + _b[6]
        _res[7] = -_a[7] + _b[7]
        return _res
