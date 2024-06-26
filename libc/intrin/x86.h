#ifndef COSMOPOLITAN_LIBC_INTRIN_X86_H_
#define COSMOPOLITAN_LIBC_INTRIN_X86_H_
COSMOPOLITAN_C_START_

enum VendorSignatures {
  SIG_INTEL = 0x756e6547, /* Genu */
  SIG_AMD = 0x68747541,   /* Auth */
};

enum ProcessorVendors {
  VENDOR_INTEL = 1,
  VENDOR_AMD,
  VENDOR_OTHER,
  VENDOR_MAX
};

enum ProcessorTypes {
  INTEL_BONNELL = 1,
  INTEL_CORE2,
  INTEL_COREI7,
  AMDFAM10H,
  AMDFAM15H,
  INTEL_SILVERMONT,
  INTEL_KNL,
  AMD_BTVER1,
  AMD_BTVER2,
  AMDFAM17H,
  INTEL_KNM,
  INTEL_GOLDMONT,
  INTEL_GOLDMONT_PLUS,
  INTEL_TREMONT,
  AMDFAM19H,
  ZHAOXIN_FAM7H,
  INTEL_SIERRAFOREST,
  INTEL_GRANDRIDGE,
  INTEL_CLEARWATERFOREST,
  CPU_TYPE_MAX
};

enum ProcessorSubtypes {
  INTEL_COREI7_NEHALEM = 1,
  INTEL_COREI7_WESTMERE,
  INTEL_COREI7_SANDYBRIDGE,
  AMDFAM10H_BARCELONA,
  AMDFAM10H_SHANGHAI,
  AMDFAM10H_ISTANBUL,
  AMDFAM15H_BDVER1,
  AMDFAM15H_BDVER2,
  AMDFAM15H_BDVER3,
  AMDFAM15H_BDVER4,
  AMDFAM17H_ZNVER1,
  INTEL_COREI7_IVYBRIDGE,
  INTEL_COREI7_HASWELL,
  INTEL_COREI7_BROADWELL,
  INTEL_COREI7_SKYLAKE,
  INTEL_COREI7_SKYLAKE_AVX512,
  INTEL_COREI7_CANNONLAKE,
  INTEL_COREI7_ICELAKE_CLIENT,
  INTEL_COREI7_ICELAKE_SERVER,
  AMDFAM17H_ZNVER2,
  INTEL_COREI7_CASCADELAKE,
  INTEL_COREI7_TIGERLAKE,
  INTEL_COREI7_COOPERLAKE,
  INTEL_COREI7_SAPPHIRERAPIDS,
  INTEL_COREI7_ALDERLAKE,
  AMDFAM19H_ZNVER3,
  INTEL_COREI7_ROCKETLAKE,
  ZHAOXIN_FAM7H_LUJIAZUI,
  AMDFAM19H_ZNVER4,
  INTEL_COREI7_GRANITERAPIDS,
  INTEL_COREI7_GRANITERAPIDS_D,
  INTEL_COREI7_ARROWLAKE,
  INTEL_COREI7_ARROWLAKE_S,
  INTEL_COREI7_PANTHERLAKE,
  CPU_SUBTYPE_MAX
};

enum ProcessorFeatures {
  FEATURE_CMOV = 0,
  FEATURE_MMX,
  FEATURE_POPCNT,
  FEATURE_SSE,
  FEATURE_SSE2,
  FEATURE_SSE3,
  FEATURE_SSSE3,
  FEATURE_SSE4_1,
  FEATURE_SSE4_2,
  FEATURE_AVX,
  FEATURE_AVX2,
  FEATURE_SSE4_A,
  FEATURE_FMA4,
  FEATURE_XOP,
  FEATURE_FMA,
  FEATURE_AVX512F,
  FEATURE_BMI,
  FEATURE_BMI2,
  FEATURE_AES,
  FEATURE_PCLMUL,
  FEATURE_AVX512VL,
  FEATURE_AVX512BW,
  FEATURE_AVX512DQ,
  FEATURE_AVX512CD,
  FEATURE_AVX512ER,
  FEATURE_AVX512PF,
  FEATURE_AVX512VBMI,
  FEATURE_AVX512IFMA,
  FEATURE_AVX5124VNNIW,
  FEATURE_AVX5124FMAPS,
  FEATURE_AVX512VPOPCNTDQ,
  FEATURE_AVX512VBMI2,
  FEATURE_GFNI,
  FEATURE_VPCLMULQDQ,
  FEATURE_AVX512VNNI,
  FEATURE_AVX512BITALG,
  FEATURE_AVX512BF16,
  FEATURE_AVX512VP2INTERSECT,

  FEATURE_CMPXCHG16B = 46,
  FEATURE_F16C = 49,
  FEATURE_LAHF_LM = 54,
  FEATURE_LM,
  FEATURE_WP,
  FEATURE_LZCNT,
  FEATURE_MOVBE,

  FEATURE_AVX512FP16 = 94,
  FEATURE_X86_64_BASELINE,
  FEATURE_X86_64_V2,
  FEATURE_X86_64_V3,
  FEATURE_X86_64_V4,
  CPU_FEATURE_MAX
};

struct __processor_model {
  unsigned __cpu_vendor;
  unsigned __cpu_type;
  unsigned __cpu_subtype;
  unsigned __cpu_features[1];
  const char *__cpu_march;
};

extern struct __processor_model __cpu_model;

const char *__cpu_march(unsigned);

COSMOPOLITAN_C_END_
#endif /* COSMOPOLITAN_LIBC_INTRIN_X86_H_ */
