// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cpp_templates/function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once


#include <Eigen/Dense>
#include <Eigen/Sparse>



namespace sym {


/**
* This function was autogenerated. Do not modify by hand.
*
* Args:
*     x0: Scalar
*     x1: Scalar
*
* Outputs:
*     result: Matrix36_84
*/
template <typename Scalar>
Eigen::SparseMatrix<Scalar> ComputeABibd93(const Scalar x0, const Scalar x1) {

    // Total ops: 74

    // Input arrays

    // Intermediate terms (31)
    const Scalar _tmp0 = 4*x0;
    const Scalar _tmp1 = std::pow(x0, Scalar(2));
    const Scalar _tmp2 = 2*x0;
    const Scalar _tmp3 = x1 + 2;
    const Scalar _tmp4 = -_tmp2;
    const Scalar _tmp5 = 2*x1;
    const Scalar _tmp6 = x0 + 2;
    const Scalar _tmp7 = -_tmp5;
    const Scalar _tmp8 = x0 + x1;
    const Scalar _tmp9 = -_tmp8;
    const Scalar _tmp10 = -x0;
    const Scalar _tmp11 = x0 - 1;
    const Scalar _tmp12 = x1 - 1;
    const Scalar _tmp13 = x1 + 1;
    const Scalar _tmp14 = -x1;
    const Scalar _tmp15 = _tmp5 - 4;
    const Scalar _tmp16 = x0 + 1;
    const Scalar _tmp17 = -_tmp16;
    const Scalar _tmp18 = 2*_tmp1;
    const Scalar _tmp19 = -_tmp13;
    const Scalar _tmp20 = x1 - 2;
    const Scalar _tmp21 = _tmp2 - 4;
    const Scalar _tmp22 = -_tmp6;
    const Scalar _tmp23 = x0*x1;
    const Scalar _tmp24 = -_tmp23;
    const Scalar _tmp25 = _tmp14 + x0;
    const Scalar _tmp26 = _tmp2*x1;
    const Scalar _tmp27 = -std::pow(x1, Scalar(2));
    const Scalar _tmp28 = x0 - 3;
    const Scalar _tmp29 = _tmp2 + 2;
    const Scalar _tmp30 = -_tmp12;

    // Output terms (1)
    static constexpr int kRows_result = 36;
    static constexpr int kCols_result = 84;
    static constexpr int kNumNonZero_result = 238;
    static constexpr int kColPtrs_result[] = {0, 3, 6, 8, 10, 13, 15, 18, 21, 23, 26, 29, 32, 35, 38, 40, 43, 46, 49, 52, 55, 58, 61, 64, 67, 70, 73, 76, 78, 81, 84, 87, 90, 93, 96, 99, 102, 105, 108, 111, 114, 117, 120, 123, 126, 128, 131, 134, 137, 139, 142, 145, 148, 150, 153, 155, 158, 161, 164, 167, 169, 172, 175, 178, 181, 184, 187, 189, 192, 195, 198, 200, 202, 205, 208, 211, 214, 217, 220, 223, 226, 229, 232, 235, 238};
    static constexpr int kRowIndices_result[] = {0, 1, 8, 0, 2, 9, 0, 3, 0, 11, 0, 5, 12, 6, 13, 0, 7, 14, 1, 2, 15, 1, 16, 1, 4, 17, 1, 5, 18, 1, 6, 19, 1, 7, 20, 2, 3, 21, 2, 4, 2, 5, 23, 2, 6, 24, 2, 7, 25, 3, 4, 26, 3, 5, 27, 3, 6, 28, 3, 7, 29, 4, 5, 30, 4, 6, 31, 4, 7, 32, 5, 6, 33, 5, 7, 34, 6, 35, 8, 9, 15, 8, 10, 16, 8, 11, 17, 8, 12, 18, 8, 13, 19, 8, 14, 20, 9, 10, 21, 9, 11, 22, 9, 12, 23, 9, 13, 24, 9, 14, 25, 10, 11, 26, 10, 12, 27, 10, 13, 28, 10, 14, 29, 11, 12, 30, 13, 31, 11, 14, 32, 12, 13, 33, 12, 14, 34, 13, 35, 15, 16, 21, 15, 17, 22, 15, 18, 23, 15, 24, 15, 20, 25, 16, 26, 16, 18, 27, 16, 19, 28, 16, 20, 29, 17, 18, 30, 17, 19, 17, 20, 32, 18, 19, 33, 18, 20, 34, 19, 20, 35, 21, 22, 26, 21, 23, 27, 24, 28, 21, 25, 29, 22, 23, 30, 22, 24, 31, 22, 25, 23, 24, 23, 25, 34, 24, 25, 35, 26, 27, 30, 26, 28, 31, 26, 29, 32, 27, 28, 33, 27, 29, 34, 28, 29, 35, 30, 31, 33, 30, 32, 34, 31, 32, 35, 33, 34, 35};
    Scalar result_empty_value_ptr[238];
    Eigen::SparseMatrix<Scalar> result = Eigen::Map<const Eigen::SparseMatrix<Scalar>>(
        kRows_result,
        kCols_result,
        kNumNonZero_result,
        kColPtrs_result,
        kRowIndices_result,
        result_empty_value_ptr
    );
    Scalar* result_value_ptr = result.valuePtr();


    result_value_ptr[0] = _tmp0;
    result_value_ptr[1] = -_tmp1;
    result_value_ptr[2] = -1;
    result_value_ptr[3] = _tmp2 + 1;
    result_value_ptr[4] = -2;
    result_value_ptr[5] = _tmp2;
    result_value_ptr[6] = -2;
    result_value_ptr[7] = 1;
    result_value_ptr[8] = _tmp3;
    result_value_ptr[9] = x1;
    result_value_ptr[10] = -4;
    result_value_ptr[11] = -1;
    result_value_ptr[12] = 1;
    result_value_ptr[13] = x1 + 3;
    result_value_ptr[14] = 1;
    result_value_ptr[15] = Scalar(-0.5);
    result_value_ptr[16] = _tmp4;
    result_value_ptr[17] = -_tmp5 - 2;
    result_value_ptr[18] = -_tmp3;
    result_value_ptr[19] = 8;
    result_value_ptr[20] = _tmp5 - 2;
    result_value_ptr[21] = -1;
    result_value_ptr[22] = _tmp6;
    result_value_ptr[23] = 2;
    result_value_ptr[24] = _tmp7;
    result_value_ptr[25] = _tmp9;
    result_value_ptr[26] = -2;
    result_value_ptr[27] = 2;
    result_value_ptr[28] = _tmp10;
    result_value_ptr[29] = -_tmp11;
    result_value_ptr[30] = Scalar(0.5);
    result_value_ptr[31] = x1;
    result_value_ptr[32] = _tmp12;
    result_value_ptr[33] = 2;
    result_value_ptr[34] = _tmp7;
    result_value_ptr[35] = _tmp11;
    result_value_ptr[36] = _tmp2;
    result_value_ptr[37] = -2;
    result_value_ptr[38] = _tmp2;
    result_value_ptr[39] = _tmp13;
    result_value_ptr[40] = 1;
    result_value_ptr[41] = _tmp8*x1;
    result_value_ptr[42] = _tmp14;
    result_value_ptr[43] = -2;
    result_value_ptr[44] = 3*x0;
    result_value_ptr[45] = x0;
    result_value_ptr[46] = _tmp5;
    result_value_ptr[47] = Scalar(-1.0);
    result_value_ptr[48] = _tmp8 + 1;
    result_value_ptr[49] = x1;
    result_value_ptr[50] = 1;
    result_value_ptr[51] = 2;
    result_value_ptr[52] = x1;
    result_value_ptr[53] = x0;
    result_value_ptr[54] = _tmp15;
    result_value_ptr[55] = _tmp10;
    result_value_ptr[56] = _tmp17;
    result_value_ptr[57] = _tmp4;
    result_value_ptr[58] = -1;
    result_value_ptr[59] = _tmp7;
    result_value_ptr[60] = _tmp8 - 1;
    result_value_ptr[61] = _tmp5;
    result_value_ptr[62] = Scalar(-1.0);
    result_value_ptr[63] = 3;
    result_value_ptr[64] = _tmp4;
    result_value_ptr[65] = _tmp18;
    result_value_ptr[66] = _tmp2 - 2;
    result_value_ptr[67] = 4;
    result_value_ptr[68] = _tmp3;
    result_value_ptr[69] = _tmp5;
    result_value_ptr[70] = x0;
    result_value_ptr[71] = 1;
    result_value_ptr[72] = 4;
    result_value_ptr[73] = 2;
    result_value_ptr[74] = _tmp17;
    result_value_ptr[75] = _tmp19;
    result_value_ptr[76] = _tmp10;
    result_value_ptr[77] = 3;
    result_value_ptr[78] = _tmp7;
    result_value_ptr[79] = -_tmp20;
    result_value_ptr[80] = (Scalar(1)/Scalar(2))/x0;
    result_value_ptr[81] = -3;
    result_value_ptr[82] = x1;
    result_value_ptr[83] = _tmp10;
    result_value_ptr[84] = -3;
    result_value_ptr[85] = -1;
    result_value_ptr[86] = _tmp16;
    result_value_ptr[87] = -_tmp21;
    result_value_ptr[88] = _tmp22;
    result_value_ptr[89] = _tmp16*x0;
    result_value_ptr[90] = 1;
    result_value_ptr[91] = -2;
    result_value_ptr[92] = -2;
    result_value_ptr[93] = -2;
    result_value_ptr[94] = Scalar(1.0);
    result_value_ptr[95] = -_tmp15;
    result_value_ptr[96] = _tmp4;
    result_value_ptr[97] = _tmp24;
    result_value_ptr[98] = -_tmp25;
    result_value_ptr[99] = x1 - 4;
    result_value_ptr[100] = 4;
    result_value_ptr[101] = _tmp23;
    result_value_ptr[102] = x0;
    result_value_ptr[103] = x0;
    result_value_ptr[104] = Scalar(1.0);
    result_value_ptr[105] = _tmp3;
    result_value_ptr[106] = x1;
    result_value_ptr[107] = 2;
    result_value_ptr[108] = x0;
    result_value_ptr[109] = _tmp23 - 2;
    result_value_ptr[110] = _tmp4;
    result_value_ptr[111] = _tmp2;
    result_value_ptr[112] = _tmp2;
    result_value_ptr[113] = -3;
    result_value_ptr[114] = -1;
    result_value_ptr[115] = _tmp10;
    result_value_ptr[116] = x1;
    result_value_ptr[117] = _tmp23;
    result_value_ptr[118] = -_tmp26;
    result_value_ptr[119] = _tmp27;
    result_value_ptr[120] = -2;
    result_value_ptr[121] = 4;
    result_value_ptr[122] = _tmp6;
    result_value_ptr[123] = _tmp22;
    result_value_ptr[124] = x0;
    result_value_ptr[125] = -1;
    result_value_ptr[126] = x1 + Scalar(-0.5);
    result_value_ptr[127] = _tmp4;
    result_value_ptr[128] = x0;
    result_value_ptr[129] = 1;
    result_value_ptr[130] = 2;
    result_value_ptr[131] = -_tmp2 - _tmp5;
    result_value_ptr[132] = _tmp14;
    result_value_ptr[133] = -2;
    result_value_ptr[134] = -1;
    result_value_ptr[135] = _tmp14;
    result_value_ptr[136] = _tmp7;
    result_value_ptr[137] = x1;
    result_value_ptr[138] = _tmp9;
    result_value_ptr[139] = _tmp13;
    result_value_ptr[140] = x1;
    result_value_ptr[141] = 4 - x0;
    result_value_ptr[142] = _tmp9;
    result_value_ptr[143] = 3 - x1;
    result_value_ptr[144] = 2;
    result_value_ptr[145] = _tmp28;
    result_value_ptr[146] = x0;
    result_value_ptr[147] = _tmp19;
    result_value_ptr[148] = x1;
    result_value_ptr[149] = _tmp10;
    result_value_ptr[150] = 4;
    result_value_ptr[151] = 1;
    result_value_ptr[152] = -_tmp18;
    result_value_ptr[153] = 2;
    result_value_ptr[154] = 1;
    result_value_ptr[155] = 1;
    result_value_ptr[156] = -1;
    result_value_ptr[157] = _tmp15;
    result_value_ptr[158] = 4;
    result_value_ptr[159] = _tmp6;
    result_value_ptr[160] = 2 - x0;
    result_value_ptr[161] = 2;
    result_value_ptr[162] = _tmp26;
    result_value_ptr[163] = -_tmp29;
    result_value_ptr[164] = _tmp27;
    result_value_ptr[165] = 1;
    result_value_ptr[166] = _tmp4;
    result_value_ptr[167] = -1;
    result_value_ptr[168] = 1;
    result_value_ptr[169] = 1;
    result_value_ptr[170] = 2;
    result_value_ptr[171] = _tmp14 + _tmp6;
    result_value_ptr[172] = 2;
    result_value_ptr[173] = _tmp5;
    result_value_ptr[174] = _tmp25;
    result_value_ptr[175] = -1;
    result_value_ptr[176] = -4;
    result_value_ptr[177] = -4;
    result_value_ptr[178] = _tmp4;
    result_value_ptr[179] = 5;
    result_value_ptr[180] = _tmp7;
    result_value_ptr[181] = 3;
    result_value_ptr[182] = _tmp22;
    result_value_ptr[183] = _tmp10;
    result_value_ptr[184] = _tmp30;
    result_value_ptr[185] = x1;
    result_value_ptr[186] = 1;
    result_value_ptr[187] = _tmp30;
    result_value_ptr[188] = -2;
    result_value_ptr[189] = Scalar(1.0);
    result_value_ptr[190] = _tmp19;
    result_value_ptr[191] = 2/x1;
    result_value_ptr[192] = 2;
    result_value_ptr[193] = 1;
    result_value_ptr[194] = 1;
    result_value_ptr[195] = 4;
    result_value_ptr[196] = -1;
    result_value_ptr[197] = _tmp21;
    result_value_ptr[198] = _tmp6;
    result_value_ptr[199] = _tmp27;
    result_value_ptr[200] = _tmp5 + 1;
    result_value_ptr[201] = -6;
    result_value_ptr[202] = Scalar(1.0);
    result_value_ptr[203] = _tmp4;
    result_value_ptr[204] = x1 + 4;
    result_value_ptr[205] = _tmp22;
    result_value_ptr[206] = -4;
    result_value_ptr[207] = _tmp10;
    result_value_ptr[208] = -Scalar(1)/Scalar(2)*x0;
    result_value_ptr[209] = _tmp29;
    result_value_ptr[210] = _tmp24;
    result_value_ptr[211] = 3;
    result_value_ptr[212] = _tmp5 - 1;
    result_value_ptr[213] = _tmp27;
    result_value_ptr[214] = 3;
    result_value_ptr[215] = Scalar(1.0);
    result_value_ptr[216] = Scalar(-2.0);
    result_value_ptr[217] = _tmp20;
    result_value_ptr[218] = -3*x1;
    result_value_ptr[219] = 2;
    result_value_ptr[220] = x0;
    result_value_ptr[221] = -2;
    result_value_ptr[222] = _tmp3;
    result_value_ptr[223] = 3;
    result_value_ptr[224] = -_tmp28;
    result_value_ptr[225] = _tmp7;
    result_value_ptr[226] = _tmp14;
    result_value_ptr[227] = -_tmp0;
    result_value_ptr[228] = 3;
    result_value_ptr[229] = _tmp2;
    result_value_ptr[230] = _tmp5;
    result_value_ptr[231] = x0;
    result_value_ptr[232] = _tmp17;
    result_value_ptr[233] = _tmp24;
    result_value_ptr[234] = -4;
    result_value_ptr[235] = 2;
    result_value_ptr[236] = 1;
    result_value_ptr[237] = x0;

    return result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
