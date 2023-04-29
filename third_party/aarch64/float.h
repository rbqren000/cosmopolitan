#ifndef _FLOAT_H___
#define _FLOAT_H___

#undef FLT_RADIX
#define FLT_RADIX __FLT_RADIX__

#undef FLT_MANT_DIG
#undef DBL_MANT_DIG
#undef LDBL_MANT_DIG
#define FLT_MANT_DIG  __FLT_MANT_DIG__
#define DBL_MANT_DIG  __DBL_MANT_DIG__
#define LDBL_MANT_DIG __LDBL_MANT_DIG__

#undef FLT_DIG
#undef DBL_DIG
#undef LDBL_DIG
#define FLT_DIG  __FLT_DIG__
#define DBL_DIG  __DBL_DIG__
#define LDBL_DIG __LDBL_DIG__

#undef FLT_MIN_EXP
#undef DBL_MIN_EXP
#undef LDBL_MIN_EXP
#define FLT_MIN_EXP  __FLT_MIN_EXP__
#define DBL_MIN_EXP  __DBL_MIN_EXP__
#define LDBL_MIN_EXP __LDBL_MIN_EXP__

#undef FLT_MIN_10_EXP
#undef DBL_MIN_10_EXP
#undef LDBL_MIN_10_EXP
#define FLT_MIN_10_EXP  __FLT_MIN_10_EXP__
#define DBL_MIN_10_EXP  __DBL_MIN_10_EXP__
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__

#undef FLT_MAX_EXP
#undef DBL_MAX_EXP
#undef LDBL_MAX_EXP
#define FLT_MAX_EXP  __FLT_MAX_EXP__
#define DBL_MAX_EXP  __DBL_MAX_EXP__
#define LDBL_MAX_EXP __LDBL_MAX_EXP__

#undef FLT_MAX_10_EXP
#undef DBL_MAX_10_EXP
#undef LDBL_MAX_10_EXP
#define FLT_MAX_10_EXP  __FLT_MAX_10_EXP__
#define DBL_MAX_10_EXP  __DBL_MAX_10_EXP__
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__

#undef FLT_MAX
#undef DBL_MAX
#undef LDBL_MAX
#define FLT_MAX  __FLT_MAX__
#define DBL_MAX  __DBL_MAX__
#define LDBL_MAX __LDBL_MAX__

#undef FLT_EPSILON
#undef DBL_EPSILON
#undef LDBL_EPSILON
#define FLT_EPSILON  __FLT_EPSILON__
#define DBL_EPSILON  __DBL_EPSILON__
#define LDBL_EPSILON __LDBL_EPSILON__

#undef FLT_MIN
#undef DBL_MIN
#undef LDBL_MIN
#define FLT_MIN  __FLT_MIN__
#define DBL_MIN  __DBL_MIN__
#define LDBL_MIN __LDBL_MIN__

#undef FLT_ROUNDS
#define FLT_ROUNDS 1

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || \
    (defined(__cplusplus) && __cplusplus >= 201103L)

#undef FLT_EVAL_METHOD
#ifdef __STDC_WANT_IEC_60559_TYPES_EXT__
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD_TS_18661_3__
#else
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#endif

#undef DECIMAL_DIG
#define DECIMAL_DIG __DECIMAL_DIG__

#endif

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) || \
    (defined(__cplusplus) && __cplusplus >= 201703L)

#undef FLT_DECIMAL_DIG
#undef DBL_DECIMAL_DIG
#undef LDBL_DECIMAL_DIG
#define FLT_DECIMAL_DIG  __FLT_DECIMAL_DIG__
#define DBL_DECIMAL_DIG  __DBL_DECIMAL_DIG__
#define LDBL_DECIMAL_DIG __LDBL_DECIMAL_DIG__

#undef FLT_HAS_SUBNORM
#undef DBL_HAS_SUBNORM
#undef LDBL_HAS_SUBNORM
#define FLT_HAS_SUBNORM  __FLT_HAS_DENORM__
#define DBL_HAS_SUBNORM  __DBL_HAS_DENORM__
#define LDBL_HAS_SUBNORM __LDBL_HAS_DENORM__

#undef FLT_TRUE_MIN
#undef DBL_TRUE_MIN
#undef LDBL_TRUE_MIN
#define FLT_TRUE_MIN  __FLT_DENORM_MIN__
#define DBL_TRUE_MIN  __DBL_DENORM_MIN__
#define LDBL_TRUE_MIN __LDBL_DENORM_MIN__

#endif

#ifdef __STDC_WANT_IEC_60559_BFP_EXT__

#define CR_DECIMAL_DIG __UINTMAX_MAX__
#endif

#ifdef __STDC_WANT_IEC_60559_TYPES_EXT__

#ifdef __FLT16_MANT_DIG__
#undef FLT16_MANT_DIG
#define FLT16_MANT_DIG __FLT16_MANT_DIG__
#undef FLT16_DIG
#define FLT16_DIG __FLT16_DIG__
#undef FLT16_MIN_EXP
#define FLT16_MIN_EXP __FLT16_MIN_EXP__
#undef FLT16_MIN_10_EXP
#define FLT16_MIN_10_EXP __FLT16_MIN_10_EXP__
#undef FLT16_MAX_EXP
#define FLT16_MAX_EXP __FLT16_MAX_EXP__
#undef FLT16_MAX_10_EXP
#define FLT16_MAX_10_EXP __FLT16_MAX_10_EXP__
#undef FLT16_MAX
#define FLT16_MAX __FLT16_MAX__
#undef FLT16_EPSILON
#define FLT16_EPSILON __FLT16_EPSILON__
#undef FLT16_MIN
#define FLT16_MIN __FLT16_MIN__
#undef FLT16_DECIMAL_DIG
#define FLT16_DECIMAL_DIG __FLT16_DECIMAL_DIG__
#undef FLT16_TRUE_MIN
#define FLT16_TRUE_MIN __FLT16_DENORM_MIN__
#endif

#ifdef __FLT32_MANT_DIG__
#undef FLT32_MANT_DIG
#define FLT32_MANT_DIG __FLT32_MANT_DIG__
#undef FLT32_DIG
#define FLT32_DIG __FLT32_DIG__
#undef FLT32_MIN_EXP
#define FLT32_MIN_EXP __FLT32_MIN_EXP__
#undef FLT32_MIN_10_EXP
#define FLT32_MIN_10_EXP __FLT32_MIN_10_EXP__
#undef FLT32_MAX_EXP
#define FLT32_MAX_EXP __FLT32_MAX_EXP__
#undef FLT32_MAX_10_EXP
#define FLT32_MAX_10_EXP __FLT32_MAX_10_EXP__
#undef FLT32_MAX
#define FLT32_MAX __FLT32_MAX__
#undef FLT32_EPSILON
#define FLT32_EPSILON __FLT32_EPSILON__
#undef FLT32_MIN
#define FLT32_MIN __FLT32_MIN__
#undef FLT32_DECIMAL_DIG
#define FLT32_DECIMAL_DIG __FLT32_DECIMAL_DIG__
#undef FLT32_TRUE_MIN
#define FLT32_TRUE_MIN __FLT32_DENORM_MIN__
#endif

#ifdef __FLT64_MANT_DIG__
#undef FLT64_MANT_DIG
#define FLT64_MANT_DIG __FLT64_MANT_DIG__
#undef FLT64_DIG
#define FLT64_DIG __FLT64_DIG__
#undef FLT64_MIN_EXP
#define FLT64_MIN_EXP __FLT64_MIN_EXP__
#undef FLT64_MIN_10_EXP
#define FLT64_MIN_10_EXP __FLT64_MIN_10_EXP__
#undef FLT64_MAX_EXP
#define FLT64_MAX_EXP __FLT64_MAX_EXP__
#undef FLT64_MAX_10_EXP
#define FLT64_MAX_10_EXP __FLT64_MAX_10_EXP__
#undef FLT64_MAX
#define FLT64_MAX __FLT64_MAX__
#undef FLT64_EPSILON
#define FLT64_EPSILON __FLT64_EPSILON__
#undef FLT64_MIN
#define FLT64_MIN __FLT64_MIN__
#undef FLT64_DECIMAL_DIG
#define FLT64_DECIMAL_DIG __FLT64_DECIMAL_DIG__
#undef FLT64_TRUE_MIN
#define FLT64_TRUE_MIN __FLT64_DENORM_MIN__
#endif

#ifdef __FLT128_MANT_DIG__
#undef FLT128_MANT_DIG
#define FLT128_MANT_DIG __FLT128_MANT_DIG__
#undef FLT128_DIG
#define FLT128_DIG __FLT128_DIG__
#undef FLT128_MIN_EXP
#define FLT128_MIN_EXP __FLT128_MIN_EXP__
#undef FLT128_MIN_10_EXP
#define FLT128_MIN_10_EXP __FLT128_MIN_10_EXP__
#undef FLT128_MAX_EXP
#define FLT128_MAX_EXP __FLT128_MAX_EXP__
#undef FLT128_MAX_10_EXP
#define FLT128_MAX_10_EXP __FLT128_MAX_10_EXP__
#undef FLT128_MAX
#define FLT128_MAX __FLT128_MAX__
#undef FLT128_EPSILON
#define FLT128_EPSILON __FLT128_EPSILON__
#undef FLT128_MIN
#define FLT128_MIN __FLT128_MIN__
#undef FLT128_DECIMAL_DIG
#define FLT128_DECIMAL_DIG __FLT128_DECIMAL_DIG__
#undef FLT128_TRUE_MIN
#define FLT128_TRUE_MIN __FLT128_DENORM_MIN__
#endif

#ifdef __FLT32X_MANT_DIG__
#undef FLT32X_MANT_DIG
#define FLT32X_MANT_DIG __FLT32X_MANT_DIG__
#undef FLT32X_DIG
#define FLT32X_DIG __FLT32X_DIG__
#undef FLT32X_MIN_EXP
#define FLT32X_MIN_EXP __FLT32X_MIN_EXP__
#undef FLT32X_MIN_10_EXP
#define FLT32X_MIN_10_EXP __FLT32X_MIN_10_EXP__
#undef FLT32X_MAX_EXP
#define FLT32X_MAX_EXP __FLT32X_MAX_EXP__
#undef FLT32X_MAX_10_EXP
#define FLT32X_MAX_10_EXP __FLT32X_MAX_10_EXP__
#undef FLT32X_MAX
#define FLT32X_MAX __FLT32X_MAX__
#undef FLT32X_EPSILON
#define FLT32X_EPSILON __FLT32X_EPSILON__
#undef FLT32X_MIN
#define FLT32X_MIN __FLT32X_MIN__
#undef FLT32X_DECIMAL_DIG
#define FLT32X_DECIMAL_DIG __FLT32X_DECIMAL_DIG__
#undef FLT32X_TRUE_MIN
#define FLT32X_TRUE_MIN __FLT32X_DENORM_MIN__
#endif

#ifdef __FLT64X_MANT_DIG__
#undef FLT64X_MANT_DIG
#define FLT64X_MANT_DIG __FLT64X_MANT_DIG__
#undef FLT64X_DIG
#define FLT64X_DIG __FLT64X_DIG__
#undef FLT64X_MIN_EXP
#define FLT64X_MIN_EXP __FLT64X_MIN_EXP__
#undef FLT64X_MIN_10_EXP
#define FLT64X_MIN_10_EXP __FLT64X_MIN_10_EXP__
#undef FLT64X_MAX_EXP
#define FLT64X_MAX_EXP __FLT64X_MAX_EXP__
#undef FLT64X_MAX_10_EXP
#define FLT64X_MAX_10_EXP __FLT64X_MAX_10_EXP__
#undef FLT64X_MAX
#define FLT64X_MAX __FLT64X_MAX__
#undef FLT64X_EPSILON
#define FLT64X_EPSILON __FLT64X_EPSILON__
#undef FLT64X_MIN
#define FLT64X_MIN __FLT64X_MIN__
#undef FLT64X_DECIMAL_DIG
#define FLT64X_DECIMAL_DIG __FLT64X_DECIMAL_DIG__
#undef FLT64X_TRUE_MIN
#define FLT64X_TRUE_MIN __FLT64X_DENORM_MIN__
#endif

#ifdef __FLT128X_MANT_DIG__
#undef FLT128X_MANT_DIG
#define FLT128X_MANT_DIG __FLT128X_MANT_DIG__
#undef FLT128X_DIG
#define FLT128X_DIG __FLT128X_DIG__
#undef FLT128X_MIN_EXP
#define FLT128X_MIN_EXP __FLT128X_MIN_EXP__
#undef FLT128X_MIN_10_EXP
#define FLT128X_MIN_10_EXP __FLT128X_MIN_10_EXP__
#undef FLT128X_MAX_EXP
#define FLT128X_MAX_EXP __FLT128X_MAX_EXP__
#undef FLT128X_MAX_10_EXP
#define FLT128X_MAX_10_EXP __FLT128X_MAX_10_EXP__
#undef FLT128X_MAX
#define FLT128X_MAX __FLT128X_MAX__
#undef FLT128X_EPSILON
#define FLT128X_EPSILON __FLT128X_EPSILON__
#undef FLT128X_MIN
#define FLT128X_MIN __FLT128X_MIN__
#undef FLT128X_DECIMAL_DIG
#define FLT128X_DECIMAL_DIG __FLT128X_DECIMAL_DIG__
#undef FLT128X_TRUE_MIN
#define FLT128X_TRUE_MIN __FLT128X_DENORM_MIN__
#endif

#endif

#ifdef __STDC_WANT_DEC_FP__

#undef DEC32_MANT_DIG
#undef DEC64_MANT_DIG
#undef DEC128_MANT_DIG
#define DEC32_MANT_DIG  __DEC32_MANT_DIG__
#define DEC64_MANT_DIG  __DEC64_MANT_DIG__
#define DEC128_MANT_DIG __DEC128_MANT_DIG__

#undef DEC32_MIN_EXP
#undef DEC64_MIN_EXP
#undef DEC128_MIN_EXP
#define DEC32_MIN_EXP  __DEC32_MIN_EXP__
#define DEC64_MIN_EXP  __DEC64_MIN_EXP__
#define DEC128_MIN_EXP __DEC128_MIN_EXP__

#undef DEC32_MAX_EXP
#undef DEC64_MAX_EXP
#undef DEC128_MAX_EXP
#define DEC32_MAX_EXP  __DEC32_MAX_EXP__
#define DEC64_MAX_EXP  __DEC64_MAX_EXP__
#define DEC128_MAX_EXP __DEC128_MAX_EXP__

#undef DEC32_MAX
#undef DEC64_MAX
#undef DEC128_MAX
#define DEC32_MAX  __DEC32_MAX__
#define DEC64_MAX  __DEC64_MAX__
#define DEC128_MAX __DEC128_MAX__

#undef DEC32_EPSILON
#undef DEC64_EPSILON
#undef DEC128_EPSILON
#define DEC32_EPSILON  __DEC32_EPSILON__
#define DEC64_EPSILON  __DEC64_EPSILON__
#define DEC128_EPSILON __DEC128_EPSILON__

#undef DEC32_MIN
#undef DEC64_MIN
#undef DEC128_MIN
#define DEC32_MIN  __DEC32_MIN__
#define DEC64_MIN  __DEC64_MIN__
#define DEC128_MIN __DEC128_MIN__

#undef DEC32_SUBNORMAL_MIN
#undef DEC64_SUBNORMAL_MIN
#undef DEC128_SUBNORMAL_MIN
#define DEC32_SUBNORMAL_MIN  __DEC32_SUBNORMAL_MIN__
#define DEC64_SUBNORMAL_MIN  __DEC64_SUBNORMAL_MIN__
#define DEC128_SUBNORMAL_MIN __DEC128_SUBNORMAL_MIN__

#undef DEC_EVAL_METHOD
#define DEC_EVAL_METHOD __DEC_EVAL_METHOD__

#endif

#endif
