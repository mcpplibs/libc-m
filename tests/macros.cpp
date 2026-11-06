// Each mapping of mcpplibs.mwrap.libc.macros equals its macro, where the target defines
// it. A macro expands even in a qualified name, so the values of the headers are taken
// under other names and the macros undefined before the mapped names are used. Written
// by tools/generate.py.
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <wchar.h>

namespace header {
#ifdef EDOM
inline constexpr auto value_EDOM = (EDOM);
#endif
#ifdef EILSEQ
inline constexpr auto value_EILSEQ = (EILSEQ);
#endif
#ifdef ERANGE
inline constexpr auto value_ERANGE = (ERANGE);
#endif
#ifdef errno
inline decltype(auto) get_errno() { return (errno); }
#endif
#ifdef FE_DIVBYZERO
inline constexpr auto value_FE_DIVBYZERO = (FE_DIVBYZERO);
#endif
#ifdef FE_INEXACT
inline constexpr auto value_FE_INEXACT = (FE_INEXACT);
#endif
#ifdef FE_INVALID
inline constexpr auto value_FE_INVALID = (FE_INVALID);
#endif
#ifdef FE_OVERFLOW
inline constexpr auto value_FE_OVERFLOW = (FE_OVERFLOW);
#endif
#ifdef FE_UNDERFLOW
inline constexpr auto value_FE_UNDERFLOW = (FE_UNDERFLOW);
#endif
#ifdef FE_ALL_EXCEPT
inline constexpr auto value_FE_ALL_EXCEPT = (FE_ALL_EXCEPT);
#endif
#ifdef FE_DOWNWARD
inline constexpr auto value_FE_DOWNWARD = (FE_DOWNWARD);
#endif
#ifdef FE_TONEAREST
inline constexpr auto value_FE_TONEAREST = (FE_TONEAREST);
#endif
#ifdef FE_TOWARDZERO
inline constexpr auto value_FE_TOWARDZERO = (FE_TOWARDZERO);
#endif
#ifdef FE_UPWARD
inline constexpr auto value_FE_UPWARD = (FE_UPWARD);
#endif
#ifdef FE_DFL_ENV
inline decltype(auto) get_FE_DFL_ENV() { return (FE_DFL_ENV); }
#endif
#ifdef FLT_ROUNDS
inline decltype(auto) get_FLT_ROUNDS() { return (FLT_ROUNDS); }
#endif
#ifdef FLT_EVAL_METHOD
inline decltype(auto) get_FLT_EVAL_METHOD() { return (FLT_EVAL_METHOD); }
#endif
#ifdef FLT_HAS_SUBNORM
inline constexpr auto value_FLT_HAS_SUBNORM = (FLT_HAS_SUBNORM);
#endif
#ifdef DBL_HAS_SUBNORM
inline constexpr auto value_DBL_HAS_SUBNORM = (DBL_HAS_SUBNORM);
#endif
#ifdef LDBL_HAS_SUBNORM
inline constexpr auto value_LDBL_HAS_SUBNORM = (LDBL_HAS_SUBNORM);
#endif
#ifdef FLT_RADIX
inline constexpr auto value_FLT_RADIX = (FLT_RADIX);
#endif
#ifdef DECIMAL_DIG
inline constexpr auto value_DECIMAL_DIG = (DECIMAL_DIG);
#endif
#ifdef FLT_MANT_DIG
inline constexpr auto value_FLT_MANT_DIG = (FLT_MANT_DIG);
#endif
#ifdef DBL_MANT_DIG
inline constexpr auto value_DBL_MANT_DIG = (DBL_MANT_DIG);
#endif
#ifdef LDBL_MANT_DIG
inline constexpr auto value_LDBL_MANT_DIG = (LDBL_MANT_DIG);
#endif
#ifdef FLT_DECIMAL_DIG
inline constexpr auto value_FLT_DECIMAL_DIG = (FLT_DECIMAL_DIG);
#endif
#ifdef DBL_DECIMAL_DIG
inline constexpr auto value_DBL_DECIMAL_DIG = (DBL_DECIMAL_DIG);
#endif
#ifdef LDBL_DECIMAL_DIG
inline constexpr auto value_LDBL_DECIMAL_DIG = (LDBL_DECIMAL_DIG);
#endif
#ifdef FLT_DIG
inline constexpr auto value_FLT_DIG = (FLT_DIG);
#endif
#ifdef DBL_DIG
inline constexpr auto value_DBL_DIG = (DBL_DIG);
#endif
#ifdef LDBL_DIG
inline constexpr auto value_LDBL_DIG = (LDBL_DIG);
#endif
#ifdef FLT_MIN_EXP
inline constexpr auto value_FLT_MIN_EXP = (FLT_MIN_EXP);
#endif
#ifdef DBL_MIN_EXP
inline constexpr auto value_DBL_MIN_EXP = (DBL_MIN_EXP);
#endif
#ifdef LDBL_MIN_EXP
inline constexpr auto value_LDBL_MIN_EXP = (LDBL_MIN_EXP);
#endif
#ifdef FLT_MIN_10_EXP
inline constexpr auto value_FLT_MIN_10_EXP = (FLT_MIN_10_EXP);
#endif
#ifdef DBL_MIN_10_EXP
inline constexpr auto value_DBL_MIN_10_EXP = (DBL_MIN_10_EXP);
#endif
#ifdef LDBL_MIN_10_EXP
inline constexpr auto value_LDBL_MIN_10_EXP = (LDBL_MIN_10_EXP);
#endif
#ifdef FLT_MAX_EXP
inline constexpr auto value_FLT_MAX_EXP = (FLT_MAX_EXP);
#endif
#ifdef DBL_MAX_EXP
inline constexpr auto value_DBL_MAX_EXP = (DBL_MAX_EXP);
#endif
#ifdef LDBL_MAX_EXP
inline constexpr auto value_LDBL_MAX_EXP = (LDBL_MAX_EXP);
#endif
#ifdef FLT_MAX_10_EXP
inline constexpr auto value_FLT_MAX_10_EXP = (FLT_MAX_10_EXP);
#endif
#ifdef DBL_MAX_10_EXP
inline constexpr auto value_DBL_MAX_10_EXP = (DBL_MAX_10_EXP);
#endif
#ifdef LDBL_MAX_10_EXP
inline constexpr auto value_LDBL_MAX_10_EXP = (LDBL_MAX_10_EXP);
#endif
#ifdef FLT_MAX
inline constexpr auto value_FLT_MAX = (FLT_MAX);
#endif
#ifdef DBL_MAX
inline constexpr auto value_DBL_MAX = (DBL_MAX);
#endif
#ifdef LDBL_MAX
inline constexpr auto value_LDBL_MAX = (LDBL_MAX);
#endif
#ifdef FLT_EPSILON
inline constexpr auto value_FLT_EPSILON = (FLT_EPSILON);
#endif
#ifdef DBL_EPSILON
inline constexpr auto value_DBL_EPSILON = (DBL_EPSILON);
#endif
#ifdef LDBL_EPSILON
inline constexpr auto value_LDBL_EPSILON = (LDBL_EPSILON);
#endif
#ifdef FLT_MIN
inline constexpr auto value_FLT_MIN = (FLT_MIN);
#endif
#ifdef DBL_MIN
inline constexpr auto value_DBL_MIN = (DBL_MIN);
#endif
#ifdef LDBL_MIN
inline constexpr auto value_LDBL_MIN = (LDBL_MIN);
#endif
#ifdef FLT_TRUE_MIN
inline constexpr auto value_FLT_TRUE_MIN = (FLT_TRUE_MIN);
#endif
#ifdef DBL_TRUE_MIN
inline constexpr auto value_DBL_TRUE_MIN = (DBL_TRUE_MIN);
#endif
#ifdef LDBL_TRUE_MIN
inline constexpr auto value_LDBL_TRUE_MIN = (LDBL_TRUE_MIN);
#endif
#ifdef PRId8
inline constexpr auto value_PRId8 = (PRId8);
#endif
#ifdef PRId16
inline constexpr auto value_PRId16 = (PRId16);
#endif
#ifdef PRId32
inline constexpr auto value_PRId32 = (PRId32);
#endif
#ifdef PRId64
inline constexpr auto value_PRId64 = (PRId64);
#endif
#ifdef PRIdLEAST8
inline constexpr auto value_PRIdLEAST8 = (PRIdLEAST8);
#endif
#ifdef PRIdLEAST16
inline constexpr auto value_PRIdLEAST16 = (PRIdLEAST16);
#endif
#ifdef PRIdLEAST32
inline constexpr auto value_PRIdLEAST32 = (PRIdLEAST32);
#endif
#ifdef PRIdLEAST64
inline constexpr auto value_PRIdLEAST64 = (PRIdLEAST64);
#endif
#ifdef PRIdFAST8
inline constexpr auto value_PRIdFAST8 = (PRIdFAST8);
#endif
#ifdef PRIdFAST16
inline constexpr auto value_PRIdFAST16 = (PRIdFAST16);
#endif
#ifdef PRIdFAST32
inline constexpr auto value_PRIdFAST32 = (PRIdFAST32);
#endif
#ifdef PRIdFAST64
inline constexpr auto value_PRIdFAST64 = (PRIdFAST64);
#endif
#ifdef PRIdMAX
inline constexpr auto value_PRIdMAX = (PRIdMAX);
#endif
#ifdef PRIdPTR
inline constexpr auto value_PRIdPTR = (PRIdPTR);
#endif
#ifdef PRIi8
inline constexpr auto value_PRIi8 = (PRIi8);
#endif
#ifdef PRIi16
inline constexpr auto value_PRIi16 = (PRIi16);
#endif
#ifdef PRIi32
inline constexpr auto value_PRIi32 = (PRIi32);
#endif
#ifdef PRIi64
inline constexpr auto value_PRIi64 = (PRIi64);
#endif
#ifdef PRIiLEAST8
inline constexpr auto value_PRIiLEAST8 = (PRIiLEAST8);
#endif
#ifdef PRIiLEAST16
inline constexpr auto value_PRIiLEAST16 = (PRIiLEAST16);
#endif
#ifdef PRIiLEAST32
inline constexpr auto value_PRIiLEAST32 = (PRIiLEAST32);
#endif
#ifdef PRIiLEAST64
inline constexpr auto value_PRIiLEAST64 = (PRIiLEAST64);
#endif
#ifdef PRIiFAST8
inline constexpr auto value_PRIiFAST8 = (PRIiFAST8);
#endif
#ifdef PRIiFAST16
inline constexpr auto value_PRIiFAST16 = (PRIiFAST16);
#endif
#ifdef PRIiFAST32
inline constexpr auto value_PRIiFAST32 = (PRIiFAST32);
#endif
#ifdef PRIiFAST64
inline constexpr auto value_PRIiFAST64 = (PRIiFAST64);
#endif
#ifdef PRIiMAX
inline constexpr auto value_PRIiMAX = (PRIiMAX);
#endif
#ifdef PRIiPTR
inline constexpr auto value_PRIiPTR = (PRIiPTR);
#endif
#ifdef PRIo8
inline constexpr auto value_PRIo8 = (PRIo8);
#endif
#ifdef PRIo16
inline constexpr auto value_PRIo16 = (PRIo16);
#endif
#ifdef PRIo32
inline constexpr auto value_PRIo32 = (PRIo32);
#endif
#ifdef PRIo64
inline constexpr auto value_PRIo64 = (PRIo64);
#endif
#ifdef PRIoLEAST8
inline constexpr auto value_PRIoLEAST8 = (PRIoLEAST8);
#endif
#ifdef PRIoLEAST16
inline constexpr auto value_PRIoLEAST16 = (PRIoLEAST16);
#endif
#ifdef PRIoLEAST32
inline constexpr auto value_PRIoLEAST32 = (PRIoLEAST32);
#endif
#ifdef PRIoLEAST64
inline constexpr auto value_PRIoLEAST64 = (PRIoLEAST64);
#endif
#ifdef PRIoFAST8
inline constexpr auto value_PRIoFAST8 = (PRIoFAST8);
#endif
#ifdef PRIoFAST16
inline constexpr auto value_PRIoFAST16 = (PRIoFAST16);
#endif
#ifdef PRIoFAST32
inline constexpr auto value_PRIoFAST32 = (PRIoFAST32);
#endif
#ifdef PRIoFAST64
inline constexpr auto value_PRIoFAST64 = (PRIoFAST64);
#endif
#ifdef PRIoMAX
inline constexpr auto value_PRIoMAX = (PRIoMAX);
#endif
#ifdef PRIoPTR
inline constexpr auto value_PRIoPTR = (PRIoPTR);
#endif
#ifdef PRIu8
inline constexpr auto value_PRIu8 = (PRIu8);
#endif
#ifdef PRIu16
inline constexpr auto value_PRIu16 = (PRIu16);
#endif
#ifdef PRIu32
inline constexpr auto value_PRIu32 = (PRIu32);
#endif
#ifdef PRIu64
inline constexpr auto value_PRIu64 = (PRIu64);
#endif
#ifdef PRIuLEAST8
inline constexpr auto value_PRIuLEAST8 = (PRIuLEAST8);
#endif
#ifdef PRIuLEAST16
inline constexpr auto value_PRIuLEAST16 = (PRIuLEAST16);
#endif
#ifdef PRIuLEAST32
inline constexpr auto value_PRIuLEAST32 = (PRIuLEAST32);
#endif
#ifdef PRIuLEAST64
inline constexpr auto value_PRIuLEAST64 = (PRIuLEAST64);
#endif
#ifdef PRIuFAST8
inline constexpr auto value_PRIuFAST8 = (PRIuFAST8);
#endif
#ifdef PRIuFAST16
inline constexpr auto value_PRIuFAST16 = (PRIuFAST16);
#endif
#ifdef PRIuFAST32
inline constexpr auto value_PRIuFAST32 = (PRIuFAST32);
#endif
#ifdef PRIuFAST64
inline constexpr auto value_PRIuFAST64 = (PRIuFAST64);
#endif
#ifdef PRIuMAX
inline constexpr auto value_PRIuMAX = (PRIuMAX);
#endif
#ifdef PRIuPTR
inline constexpr auto value_PRIuPTR = (PRIuPTR);
#endif
#ifdef PRIx8
inline constexpr auto value_PRIx8 = (PRIx8);
#endif
#ifdef PRIx16
inline constexpr auto value_PRIx16 = (PRIx16);
#endif
#ifdef PRIx32
inline constexpr auto value_PRIx32 = (PRIx32);
#endif
#ifdef PRIx64
inline constexpr auto value_PRIx64 = (PRIx64);
#endif
#ifdef PRIxLEAST8
inline constexpr auto value_PRIxLEAST8 = (PRIxLEAST8);
#endif
#ifdef PRIxLEAST16
inline constexpr auto value_PRIxLEAST16 = (PRIxLEAST16);
#endif
#ifdef PRIxLEAST32
inline constexpr auto value_PRIxLEAST32 = (PRIxLEAST32);
#endif
#ifdef PRIxLEAST64
inline constexpr auto value_PRIxLEAST64 = (PRIxLEAST64);
#endif
#ifdef PRIxFAST8
inline constexpr auto value_PRIxFAST8 = (PRIxFAST8);
#endif
#ifdef PRIxFAST16
inline constexpr auto value_PRIxFAST16 = (PRIxFAST16);
#endif
#ifdef PRIxFAST32
inline constexpr auto value_PRIxFAST32 = (PRIxFAST32);
#endif
#ifdef PRIxFAST64
inline constexpr auto value_PRIxFAST64 = (PRIxFAST64);
#endif
#ifdef PRIxMAX
inline constexpr auto value_PRIxMAX = (PRIxMAX);
#endif
#ifdef PRIxPTR
inline constexpr auto value_PRIxPTR = (PRIxPTR);
#endif
#ifdef PRIX8
inline constexpr auto value_PRIX8 = (PRIX8);
#endif
#ifdef PRIX16
inline constexpr auto value_PRIX16 = (PRIX16);
#endif
#ifdef PRIX32
inline constexpr auto value_PRIX32 = (PRIX32);
#endif
#ifdef PRIX64
inline constexpr auto value_PRIX64 = (PRIX64);
#endif
#ifdef PRIXLEAST8
inline constexpr auto value_PRIXLEAST8 = (PRIXLEAST8);
#endif
#ifdef PRIXLEAST16
inline constexpr auto value_PRIXLEAST16 = (PRIXLEAST16);
#endif
#ifdef PRIXLEAST32
inline constexpr auto value_PRIXLEAST32 = (PRIXLEAST32);
#endif
#ifdef PRIXLEAST64
inline constexpr auto value_PRIXLEAST64 = (PRIXLEAST64);
#endif
#ifdef PRIXFAST8
inline constexpr auto value_PRIXFAST8 = (PRIXFAST8);
#endif
#ifdef PRIXFAST16
inline constexpr auto value_PRIXFAST16 = (PRIXFAST16);
#endif
#ifdef PRIXFAST32
inline constexpr auto value_PRIXFAST32 = (PRIXFAST32);
#endif
#ifdef PRIXFAST64
inline constexpr auto value_PRIXFAST64 = (PRIXFAST64);
#endif
#ifdef PRIXMAX
inline constexpr auto value_PRIXMAX = (PRIXMAX);
#endif
#ifdef PRIXPTR
inline constexpr auto value_PRIXPTR = (PRIXPTR);
#endif
#ifdef SCNd8
inline constexpr auto value_SCNd8 = (SCNd8);
#endif
#ifdef SCNd16
inline constexpr auto value_SCNd16 = (SCNd16);
#endif
#ifdef SCNd32
inline constexpr auto value_SCNd32 = (SCNd32);
#endif
#ifdef SCNd64
inline constexpr auto value_SCNd64 = (SCNd64);
#endif
#ifdef SCNdLEAST8
inline constexpr auto value_SCNdLEAST8 = (SCNdLEAST8);
#endif
#ifdef SCNdLEAST16
inline constexpr auto value_SCNdLEAST16 = (SCNdLEAST16);
#endif
#ifdef SCNdLEAST32
inline constexpr auto value_SCNdLEAST32 = (SCNdLEAST32);
#endif
#ifdef SCNdLEAST64
inline constexpr auto value_SCNdLEAST64 = (SCNdLEAST64);
#endif
#ifdef SCNdFAST8
inline constexpr auto value_SCNdFAST8 = (SCNdFAST8);
#endif
#ifdef SCNdFAST16
inline constexpr auto value_SCNdFAST16 = (SCNdFAST16);
#endif
#ifdef SCNdFAST32
inline constexpr auto value_SCNdFAST32 = (SCNdFAST32);
#endif
#ifdef SCNdFAST64
inline constexpr auto value_SCNdFAST64 = (SCNdFAST64);
#endif
#ifdef SCNdMAX
inline constexpr auto value_SCNdMAX = (SCNdMAX);
#endif
#ifdef SCNdPTR
inline constexpr auto value_SCNdPTR = (SCNdPTR);
#endif
#ifdef SCNi8
inline constexpr auto value_SCNi8 = (SCNi8);
#endif
#ifdef SCNi16
inline constexpr auto value_SCNi16 = (SCNi16);
#endif
#ifdef SCNi32
inline constexpr auto value_SCNi32 = (SCNi32);
#endif
#ifdef SCNi64
inline constexpr auto value_SCNi64 = (SCNi64);
#endif
#ifdef SCNiLEAST8
inline constexpr auto value_SCNiLEAST8 = (SCNiLEAST8);
#endif
#ifdef SCNiLEAST16
inline constexpr auto value_SCNiLEAST16 = (SCNiLEAST16);
#endif
#ifdef SCNiLEAST32
inline constexpr auto value_SCNiLEAST32 = (SCNiLEAST32);
#endif
#ifdef SCNiLEAST64
inline constexpr auto value_SCNiLEAST64 = (SCNiLEAST64);
#endif
#ifdef SCNiFAST8
inline constexpr auto value_SCNiFAST8 = (SCNiFAST8);
#endif
#ifdef SCNiFAST16
inline constexpr auto value_SCNiFAST16 = (SCNiFAST16);
#endif
#ifdef SCNiFAST32
inline constexpr auto value_SCNiFAST32 = (SCNiFAST32);
#endif
#ifdef SCNiFAST64
inline constexpr auto value_SCNiFAST64 = (SCNiFAST64);
#endif
#ifdef SCNiMAX
inline constexpr auto value_SCNiMAX = (SCNiMAX);
#endif
#ifdef SCNiPTR
inline constexpr auto value_SCNiPTR = (SCNiPTR);
#endif
#ifdef SCNo8
inline constexpr auto value_SCNo8 = (SCNo8);
#endif
#ifdef SCNo16
inline constexpr auto value_SCNo16 = (SCNo16);
#endif
#ifdef SCNo32
inline constexpr auto value_SCNo32 = (SCNo32);
#endif
#ifdef SCNo64
inline constexpr auto value_SCNo64 = (SCNo64);
#endif
#ifdef SCNoLEAST8
inline constexpr auto value_SCNoLEAST8 = (SCNoLEAST8);
#endif
#ifdef SCNoLEAST16
inline constexpr auto value_SCNoLEAST16 = (SCNoLEAST16);
#endif
#ifdef SCNoLEAST32
inline constexpr auto value_SCNoLEAST32 = (SCNoLEAST32);
#endif
#ifdef SCNoLEAST64
inline constexpr auto value_SCNoLEAST64 = (SCNoLEAST64);
#endif
#ifdef SCNoFAST8
inline constexpr auto value_SCNoFAST8 = (SCNoFAST8);
#endif
#ifdef SCNoFAST16
inline constexpr auto value_SCNoFAST16 = (SCNoFAST16);
#endif
#ifdef SCNoFAST32
inline constexpr auto value_SCNoFAST32 = (SCNoFAST32);
#endif
#ifdef SCNoFAST64
inline constexpr auto value_SCNoFAST64 = (SCNoFAST64);
#endif
#ifdef SCNoMAX
inline constexpr auto value_SCNoMAX = (SCNoMAX);
#endif
#ifdef SCNoPTR
inline constexpr auto value_SCNoPTR = (SCNoPTR);
#endif
#ifdef SCNu8
inline constexpr auto value_SCNu8 = (SCNu8);
#endif
#ifdef SCNu16
inline constexpr auto value_SCNu16 = (SCNu16);
#endif
#ifdef SCNu32
inline constexpr auto value_SCNu32 = (SCNu32);
#endif
#ifdef SCNu64
inline constexpr auto value_SCNu64 = (SCNu64);
#endif
#ifdef SCNuLEAST8
inline constexpr auto value_SCNuLEAST8 = (SCNuLEAST8);
#endif
#ifdef SCNuLEAST16
inline constexpr auto value_SCNuLEAST16 = (SCNuLEAST16);
#endif
#ifdef SCNuLEAST32
inline constexpr auto value_SCNuLEAST32 = (SCNuLEAST32);
#endif
#ifdef SCNuLEAST64
inline constexpr auto value_SCNuLEAST64 = (SCNuLEAST64);
#endif
#ifdef SCNuFAST8
inline constexpr auto value_SCNuFAST8 = (SCNuFAST8);
#endif
#ifdef SCNuFAST16
inline constexpr auto value_SCNuFAST16 = (SCNuFAST16);
#endif
#ifdef SCNuFAST32
inline constexpr auto value_SCNuFAST32 = (SCNuFAST32);
#endif
#ifdef SCNuFAST64
inline constexpr auto value_SCNuFAST64 = (SCNuFAST64);
#endif
#ifdef SCNuMAX
inline constexpr auto value_SCNuMAX = (SCNuMAX);
#endif
#ifdef SCNuPTR
inline constexpr auto value_SCNuPTR = (SCNuPTR);
#endif
#ifdef SCNx8
inline constexpr auto value_SCNx8 = (SCNx8);
#endif
#ifdef SCNx16
inline constexpr auto value_SCNx16 = (SCNx16);
#endif
#ifdef SCNx32
inline constexpr auto value_SCNx32 = (SCNx32);
#endif
#ifdef SCNx64
inline constexpr auto value_SCNx64 = (SCNx64);
#endif
#ifdef SCNxLEAST8
inline constexpr auto value_SCNxLEAST8 = (SCNxLEAST8);
#endif
#ifdef SCNxLEAST16
inline constexpr auto value_SCNxLEAST16 = (SCNxLEAST16);
#endif
#ifdef SCNxLEAST32
inline constexpr auto value_SCNxLEAST32 = (SCNxLEAST32);
#endif
#ifdef SCNxLEAST64
inline constexpr auto value_SCNxLEAST64 = (SCNxLEAST64);
#endif
#ifdef SCNxFAST8
inline constexpr auto value_SCNxFAST8 = (SCNxFAST8);
#endif
#ifdef SCNxFAST16
inline constexpr auto value_SCNxFAST16 = (SCNxFAST16);
#endif
#ifdef SCNxFAST32
inline constexpr auto value_SCNxFAST32 = (SCNxFAST32);
#endif
#ifdef SCNxFAST64
inline constexpr auto value_SCNxFAST64 = (SCNxFAST64);
#endif
#ifdef SCNxMAX
inline constexpr auto value_SCNxMAX = (SCNxMAX);
#endif
#ifdef SCNxPTR
inline constexpr auto value_SCNxPTR = (SCNxPTR);
#endif
#ifdef CHAR_BIT
inline constexpr auto value_CHAR_BIT = (CHAR_BIT);
#endif
#ifdef SCHAR_MIN
inline constexpr auto value_SCHAR_MIN = (SCHAR_MIN);
#endif
#ifdef SCHAR_MAX
inline constexpr auto value_SCHAR_MAX = (SCHAR_MAX);
#endif
#ifdef UCHAR_MAX
inline constexpr auto value_UCHAR_MAX = (UCHAR_MAX);
#endif
#ifdef CHAR_MIN
inline constexpr auto value_CHAR_MIN = (CHAR_MIN);
#endif
#ifdef CHAR_MAX
inline constexpr auto value_CHAR_MAX = (CHAR_MAX);
#endif
#ifdef MB_LEN_MAX
inline constexpr auto value_MB_LEN_MAX = (MB_LEN_MAX);
#endif
#ifdef SHRT_MIN
inline constexpr auto value_SHRT_MIN = (SHRT_MIN);
#endif
#ifdef SHRT_MAX
inline constexpr auto value_SHRT_MAX = (SHRT_MAX);
#endif
#ifdef USHRT_MAX
inline constexpr auto value_USHRT_MAX = (USHRT_MAX);
#endif
#ifdef INT_MIN
inline constexpr auto value_INT_MIN = (INT_MIN);
#endif
#ifdef INT_MAX
inline constexpr auto value_INT_MAX = (INT_MAX);
#endif
#ifdef UINT_MAX
inline constexpr auto value_UINT_MAX = (UINT_MAX);
#endif
#ifdef LONG_MIN
inline constexpr auto value_LONG_MIN = (LONG_MIN);
#endif
#ifdef LONG_MAX
inline constexpr auto value_LONG_MAX = (LONG_MAX);
#endif
#ifdef ULONG_MAX
inline constexpr auto value_ULONG_MAX = (ULONG_MAX);
#endif
#ifdef LLONG_MIN
inline constexpr auto value_LLONG_MIN = (LLONG_MIN);
#endif
#ifdef LLONG_MAX
inline constexpr auto value_LLONG_MAX = (LLONG_MAX);
#endif
#ifdef ULLONG_MAX
inline constexpr auto value_ULLONG_MAX = (ULLONG_MAX);
#endif
#ifdef LC_ALL
inline constexpr auto value_LC_ALL = (LC_ALL);
#endif
#ifdef LC_COLLATE
inline constexpr auto value_LC_COLLATE = (LC_COLLATE);
#endif
#ifdef LC_CTYPE
inline constexpr auto value_LC_CTYPE = (LC_CTYPE);
#endif
#ifdef LC_MONETARY
inline constexpr auto value_LC_MONETARY = (LC_MONETARY);
#endif
#ifdef LC_NUMERIC
inline constexpr auto value_LC_NUMERIC = (LC_NUMERIC);
#endif
#ifdef LC_TIME
inline constexpr auto value_LC_TIME = (LC_TIME);
#endif
#ifdef HUGE_VAL
inline decltype(auto) get_HUGE_VAL() { return (HUGE_VAL); }
#endif
#ifdef HUGE_VALF
inline decltype(auto) get_HUGE_VALF() { return (HUGE_VALF); }
#endif
#ifdef HUGE_VALL
inline decltype(auto) get_HUGE_VALL() { return (HUGE_VALL); }
#endif
#ifdef INFINITY
inline decltype(auto) get_INFINITY() { return (INFINITY); }
#endif
#ifdef NAN
inline decltype(auto) get_NAN() { return (NAN); }
#endif
#ifdef FP_INFINITE
inline constexpr auto value_FP_INFINITE = (FP_INFINITE);
#endif
#ifdef FP_NAN
inline constexpr auto value_FP_NAN = (FP_NAN);
#endif
#ifdef FP_NORMAL
inline constexpr auto value_FP_NORMAL = (FP_NORMAL);
#endif
#ifdef FP_SUBNORMAL
inline constexpr auto value_FP_SUBNORMAL = (FP_SUBNORMAL);
#endif
#ifdef FP_ZERO
inline constexpr auto value_FP_ZERO = (FP_ZERO);
#endif
#ifdef FP_FAST_FMA
inline decltype(auto) get_FP_FAST_FMA() { return (FP_FAST_FMA); }
#endif
#ifdef FP_FAST_FMAF
inline decltype(auto) get_FP_FAST_FMAF() { return (FP_FAST_FMAF); }
#endif
#ifdef FP_FAST_FMAL
inline decltype(auto) get_FP_FAST_FMAL() { return (FP_FAST_FMAL); }
#endif
#ifdef FP_ILOGB0
inline constexpr auto value_FP_ILOGB0 = (FP_ILOGB0);
#endif
#ifdef FP_ILOGBNAN
inline constexpr auto value_FP_ILOGBNAN = (FP_ILOGBNAN);
#endif
#ifdef MATH_ERRNO
inline constexpr auto value_MATH_ERRNO = (MATH_ERRNO);
#endif
#ifdef MATH_ERREXCEPT
inline constexpr auto value_MATH_ERREXCEPT = (MATH_ERREXCEPT);
#endif
#ifdef math_errhandling
inline decltype(auto) get_math_errhandling() { return (math_errhandling); }
#endif
#ifdef SIG_DFL
inline constexpr auto value_SIG_DFL = (SIG_DFL);
#endif
#ifdef SIG_ERR
inline decltype(auto) get_SIG_ERR() { return (SIG_ERR); }
#endif
#ifdef SIG_IGN
inline decltype(auto) get_SIG_IGN() { return (SIG_IGN); }
#endif
#ifdef SIGABRT
inline constexpr auto value_SIGABRT = (SIGABRT);
#endif
#ifdef SIGFPE
inline constexpr auto value_SIGFPE = (SIGFPE);
#endif
#ifdef SIGILL
inline constexpr auto value_SIGILL = (SIGILL);
#endif
#ifdef SIGINT
inline constexpr auto value_SIGINT = (SIGINT);
#endif
#ifdef SIGSEGV
inline constexpr auto value_SIGSEGV = (SIGSEGV);
#endif
#ifdef SIGTERM
inline constexpr auto value_SIGTERM = (SIGTERM);
#endif
#ifdef INT8_MIN
inline constexpr auto value_INT8_MIN = (INT8_MIN);
#endif
#ifdef INT8_MAX
inline constexpr auto value_INT8_MAX = (INT8_MAX);
#endif
#ifdef UINT8_MAX
inline constexpr auto value_UINT8_MAX = (UINT8_MAX);
#endif
#ifdef INT_LEAST8_MIN
inline constexpr auto value_INT_LEAST8_MIN = (INT_LEAST8_MIN);
#endif
#ifdef INT_LEAST8_MAX
inline constexpr auto value_INT_LEAST8_MAX = (INT_LEAST8_MAX);
#endif
#ifdef UINT_LEAST8_MAX
inline constexpr auto value_UINT_LEAST8_MAX = (UINT_LEAST8_MAX);
#endif
#ifdef INT_FAST8_MIN
inline constexpr auto value_INT_FAST8_MIN = (INT_FAST8_MIN);
#endif
#ifdef INT_FAST8_MAX
inline constexpr auto value_INT_FAST8_MAX = (INT_FAST8_MAX);
#endif
#ifdef UINT_FAST8_MAX
inline constexpr auto value_UINT_FAST8_MAX = (UINT_FAST8_MAX);
#endif
#ifdef INT16_MIN
inline constexpr auto value_INT16_MIN = (INT16_MIN);
#endif
#ifdef INT16_MAX
inline constexpr auto value_INT16_MAX = (INT16_MAX);
#endif
#ifdef UINT16_MAX
inline constexpr auto value_UINT16_MAX = (UINT16_MAX);
#endif
#ifdef INT_LEAST16_MIN
inline constexpr auto value_INT_LEAST16_MIN = (INT_LEAST16_MIN);
#endif
#ifdef INT_LEAST16_MAX
inline constexpr auto value_INT_LEAST16_MAX = (INT_LEAST16_MAX);
#endif
#ifdef UINT_LEAST16_MAX
inline constexpr auto value_UINT_LEAST16_MAX = (UINT_LEAST16_MAX);
#endif
#ifdef INT_FAST16_MIN
inline constexpr auto value_INT_FAST16_MIN = (INT_FAST16_MIN);
#endif
#ifdef INT_FAST16_MAX
inline constexpr auto value_INT_FAST16_MAX = (INT_FAST16_MAX);
#endif
#ifdef UINT_FAST16_MAX
inline constexpr auto value_UINT_FAST16_MAX = (UINT_FAST16_MAX);
#endif
#ifdef INT32_MIN
inline constexpr auto value_INT32_MIN = (INT32_MIN);
#endif
#ifdef INT32_MAX
inline constexpr auto value_INT32_MAX = (INT32_MAX);
#endif
#ifdef UINT32_MAX
inline constexpr auto value_UINT32_MAX = (UINT32_MAX);
#endif
#ifdef INT_LEAST32_MIN
inline constexpr auto value_INT_LEAST32_MIN = (INT_LEAST32_MIN);
#endif
#ifdef INT_LEAST32_MAX
inline constexpr auto value_INT_LEAST32_MAX = (INT_LEAST32_MAX);
#endif
#ifdef UINT_LEAST32_MAX
inline constexpr auto value_UINT_LEAST32_MAX = (UINT_LEAST32_MAX);
#endif
#ifdef INT_FAST32_MIN
inline constexpr auto value_INT_FAST32_MIN = (INT_FAST32_MIN);
#endif
#ifdef INT_FAST32_MAX
inline constexpr auto value_INT_FAST32_MAX = (INT_FAST32_MAX);
#endif
#ifdef UINT_FAST32_MAX
inline constexpr auto value_UINT_FAST32_MAX = (UINT_FAST32_MAX);
#endif
#ifdef INT64_MIN
inline constexpr auto value_INT64_MIN = (INT64_MIN);
#endif
#ifdef INT64_MAX
inline constexpr auto value_INT64_MAX = (INT64_MAX);
#endif
#ifdef UINT64_MAX
inline constexpr auto value_UINT64_MAX = (UINT64_MAX);
#endif
#ifdef INT_LEAST64_MIN
inline constexpr auto value_INT_LEAST64_MIN = (INT_LEAST64_MIN);
#endif
#ifdef INT_LEAST64_MAX
inline constexpr auto value_INT_LEAST64_MAX = (INT_LEAST64_MAX);
#endif
#ifdef UINT_LEAST64_MAX
inline constexpr auto value_UINT_LEAST64_MAX = (UINT_LEAST64_MAX);
#endif
#ifdef INT_FAST64_MIN
inline constexpr auto value_INT_FAST64_MIN = (INT_FAST64_MIN);
#endif
#ifdef INT_FAST64_MAX
inline constexpr auto value_INT_FAST64_MAX = (INT_FAST64_MAX);
#endif
#ifdef UINT_FAST64_MAX
inline constexpr auto value_UINT_FAST64_MAX = (UINT_FAST64_MAX);
#endif
#ifdef INTPTR_MIN
inline constexpr auto value_INTPTR_MIN = (INTPTR_MIN);
#endif
#ifdef INTPTR_MAX
inline constexpr auto value_INTPTR_MAX = (INTPTR_MAX);
#endif
#ifdef UINTPTR_MAX
inline constexpr auto value_UINTPTR_MAX = (UINTPTR_MAX);
#endif
#ifdef INTMAX_MIN
inline constexpr auto value_INTMAX_MIN = (INTMAX_MIN);
#endif
#ifdef INTMAX_MAX
inline constexpr auto value_INTMAX_MAX = (INTMAX_MAX);
#endif
#ifdef UINTMAX_MAX
inline constexpr auto value_UINTMAX_MAX = (UINTMAX_MAX);
#endif
#ifdef PTRDIFF_MIN
inline constexpr auto value_PTRDIFF_MIN = (PTRDIFF_MIN);
#endif
#ifdef PTRDIFF_MAX
inline constexpr auto value_PTRDIFF_MAX = (PTRDIFF_MAX);
#endif
#ifdef SIG_ATOMIC_MIN
inline constexpr auto value_SIG_ATOMIC_MIN = (SIG_ATOMIC_MIN);
#endif
#ifdef SIG_ATOMIC_MAX
inline constexpr auto value_SIG_ATOMIC_MAX = (SIG_ATOMIC_MAX);
#endif
#ifdef SIZE_MAX
inline constexpr auto value_SIZE_MAX = (SIZE_MAX);
#endif
#ifdef WCHAR_MIN
inline constexpr auto value_WCHAR_MIN = (WCHAR_MIN);
#endif
#ifdef WCHAR_MAX
inline constexpr auto value_WCHAR_MAX = (WCHAR_MAX);
#endif
#ifdef WINT_MIN
inline constexpr auto value_WINT_MIN = (WINT_MIN);
#endif
#ifdef WINT_MAX
inline constexpr auto value_WINT_MAX = (WINT_MAX);
#endif
#ifdef _IOFBF
inline constexpr auto value__IOFBF = (_IOFBF);
#endif
#ifdef _IOLBF
inline constexpr auto value__IOLBF = (_IOLBF);
#endif
#ifdef _IONBF
inline constexpr auto value__IONBF = (_IONBF);
#endif
#ifdef BUFSIZ
inline constexpr auto value_BUFSIZ = (BUFSIZ);
#endif
#ifdef EOF
inline constexpr auto value_EOF = (EOF);
#endif
#ifdef FOPEN_MAX
inline constexpr auto value_FOPEN_MAX = (FOPEN_MAX);
#endif
#ifdef FILENAME_MAX
inline constexpr auto value_FILENAME_MAX = (FILENAME_MAX);
#endif
#ifdef L_tmpnam
inline constexpr auto value_L_tmpnam = (L_tmpnam);
#endif
#ifdef SEEK_CUR
inline constexpr auto value_SEEK_CUR = (SEEK_CUR);
#endif
#ifdef SEEK_END
inline constexpr auto value_SEEK_END = (SEEK_END);
#endif
#ifdef SEEK_SET
inline constexpr auto value_SEEK_SET = (SEEK_SET);
#endif
#ifdef TMP_MAX
inline constexpr auto value_TMP_MAX = (TMP_MAX);
#endif
#ifdef stderr
inline decltype(auto) get_stderr() { return (stderr); }
#endif
#ifdef stdin
inline decltype(auto) get_stdin() { return (stdin); }
#endif
#ifdef stdout
inline decltype(auto) get_stdout() { return (stdout); }
#endif
#ifdef EXIT_FAILURE
inline constexpr auto value_EXIT_FAILURE = (EXIT_FAILURE);
#endif
#ifdef EXIT_SUCCESS
inline constexpr auto value_EXIT_SUCCESS = (EXIT_SUCCESS);
#endif
#ifdef RAND_MAX
inline constexpr auto value_RAND_MAX = (RAND_MAX);
#endif
#ifdef MB_CUR_MAX
inline decltype(auto) get_MB_CUR_MAX() { return (MB_CUR_MAX); }
#endif
#ifdef CLOCKS_PER_SEC
inline constexpr auto value_CLOCKS_PER_SEC = (CLOCKS_PER_SEC);
#endif
#ifdef TIME_UTC
inline constexpr auto value_TIME_UTC = (TIME_UTC);
#endif
#ifdef WEOF
inline constexpr auto value_WEOF = (WEOF);
#endif
}
#ifdef EDOM
#undef EDOM
#define MWRAP_LIBC_HAS_EDOM
#endif
#ifdef EILSEQ
#undef EILSEQ
#define MWRAP_LIBC_HAS_EILSEQ
#endif
#ifdef ERANGE
#undef ERANGE
#define MWRAP_LIBC_HAS_ERANGE
#endif
#ifdef errno
#undef errno
#define MWRAP_LIBC_HAS_errno
#endif
#ifdef FE_DIVBYZERO
#undef FE_DIVBYZERO
#define MWRAP_LIBC_HAS_FE_DIVBYZERO
#endif
#ifdef FE_INEXACT
#undef FE_INEXACT
#define MWRAP_LIBC_HAS_FE_INEXACT
#endif
#ifdef FE_INVALID
#undef FE_INVALID
#define MWRAP_LIBC_HAS_FE_INVALID
#endif
#ifdef FE_OVERFLOW
#undef FE_OVERFLOW
#define MWRAP_LIBC_HAS_FE_OVERFLOW
#endif
#ifdef FE_UNDERFLOW
#undef FE_UNDERFLOW
#define MWRAP_LIBC_HAS_FE_UNDERFLOW
#endif
#ifdef FE_ALL_EXCEPT
#undef FE_ALL_EXCEPT
#define MWRAP_LIBC_HAS_FE_ALL_EXCEPT
#endif
#ifdef FE_DOWNWARD
#undef FE_DOWNWARD
#define MWRAP_LIBC_HAS_FE_DOWNWARD
#endif
#ifdef FE_TONEAREST
#undef FE_TONEAREST
#define MWRAP_LIBC_HAS_FE_TONEAREST
#endif
#ifdef FE_TOWARDZERO
#undef FE_TOWARDZERO
#define MWRAP_LIBC_HAS_FE_TOWARDZERO
#endif
#ifdef FE_UPWARD
#undef FE_UPWARD
#define MWRAP_LIBC_HAS_FE_UPWARD
#endif
#ifdef FE_DFL_ENV
#undef FE_DFL_ENV
#define MWRAP_LIBC_HAS_FE_DFL_ENV
#endif
#ifdef FLT_ROUNDS
#undef FLT_ROUNDS
#define MWRAP_LIBC_HAS_FLT_ROUNDS
#endif
#ifdef FLT_EVAL_METHOD
#undef FLT_EVAL_METHOD
#define MWRAP_LIBC_HAS_FLT_EVAL_METHOD
#endif
#ifdef FLT_HAS_SUBNORM
#undef FLT_HAS_SUBNORM
#define MWRAP_LIBC_HAS_FLT_HAS_SUBNORM
#endif
#ifdef DBL_HAS_SUBNORM
#undef DBL_HAS_SUBNORM
#define MWRAP_LIBC_HAS_DBL_HAS_SUBNORM
#endif
#ifdef LDBL_HAS_SUBNORM
#undef LDBL_HAS_SUBNORM
#define MWRAP_LIBC_HAS_LDBL_HAS_SUBNORM
#endif
#ifdef FLT_RADIX
#undef FLT_RADIX
#define MWRAP_LIBC_HAS_FLT_RADIX
#endif
#ifdef DECIMAL_DIG
#undef DECIMAL_DIG
#define MWRAP_LIBC_HAS_DECIMAL_DIG
#endif
#ifdef FLT_MANT_DIG
#undef FLT_MANT_DIG
#define MWRAP_LIBC_HAS_FLT_MANT_DIG
#endif
#ifdef DBL_MANT_DIG
#undef DBL_MANT_DIG
#define MWRAP_LIBC_HAS_DBL_MANT_DIG
#endif
#ifdef LDBL_MANT_DIG
#undef LDBL_MANT_DIG
#define MWRAP_LIBC_HAS_LDBL_MANT_DIG
#endif
#ifdef FLT_DECIMAL_DIG
#undef FLT_DECIMAL_DIG
#define MWRAP_LIBC_HAS_FLT_DECIMAL_DIG
#endif
#ifdef DBL_DECIMAL_DIG
#undef DBL_DECIMAL_DIG
#define MWRAP_LIBC_HAS_DBL_DECIMAL_DIG
#endif
#ifdef LDBL_DECIMAL_DIG
#undef LDBL_DECIMAL_DIG
#define MWRAP_LIBC_HAS_LDBL_DECIMAL_DIG
#endif
#ifdef FLT_DIG
#undef FLT_DIG
#define MWRAP_LIBC_HAS_FLT_DIG
#endif
#ifdef DBL_DIG
#undef DBL_DIG
#define MWRAP_LIBC_HAS_DBL_DIG
#endif
#ifdef LDBL_DIG
#undef LDBL_DIG
#define MWRAP_LIBC_HAS_LDBL_DIG
#endif
#ifdef FLT_MIN_EXP
#undef FLT_MIN_EXP
#define MWRAP_LIBC_HAS_FLT_MIN_EXP
#endif
#ifdef DBL_MIN_EXP
#undef DBL_MIN_EXP
#define MWRAP_LIBC_HAS_DBL_MIN_EXP
#endif
#ifdef LDBL_MIN_EXP
#undef LDBL_MIN_EXP
#define MWRAP_LIBC_HAS_LDBL_MIN_EXP
#endif
#ifdef FLT_MIN_10_EXP
#undef FLT_MIN_10_EXP
#define MWRAP_LIBC_HAS_FLT_MIN_10_EXP
#endif
#ifdef DBL_MIN_10_EXP
#undef DBL_MIN_10_EXP
#define MWRAP_LIBC_HAS_DBL_MIN_10_EXP
#endif
#ifdef LDBL_MIN_10_EXP
#undef LDBL_MIN_10_EXP
#define MWRAP_LIBC_HAS_LDBL_MIN_10_EXP
#endif
#ifdef FLT_MAX_EXP
#undef FLT_MAX_EXP
#define MWRAP_LIBC_HAS_FLT_MAX_EXP
#endif
#ifdef DBL_MAX_EXP
#undef DBL_MAX_EXP
#define MWRAP_LIBC_HAS_DBL_MAX_EXP
#endif
#ifdef LDBL_MAX_EXP
#undef LDBL_MAX_EXP
#define MWRAP_LIBC_HAS_LDBL_MAX_EXP
#endif
#ifdef FLT_MAX_10_EXP
#undef FLT_MAX_10_EXP
#define MWRAP_LIBC_HAS_FLT_MAX_10_EXP
#endif
#ifdef DBL_MAX_10_EXP
#undef DBL_MAX_10_EXP
#define MWRAP_LIBC_HAS_DBL_MAX_10_EXP
#endif
#ifdef LDBL_MAX_10_EXP
#undef LDBL_MAX_10_EXP
#define MWRAP_LIBC_HAS_LDBL_MAX_10_EXP
#endif
#ifdef FLT_MAX
#undef FLT_MAX
#define MWRAP_LIBC_HAS_FLT_MAX
#endif
#ifdef DBL_MAX
#undef DBL_MAX
#define MWRAP_LIBC_HAS_DBL_MAX
#endif
#ifdef LDBL_MAX
#undef LDBL_MAX
#define MWRAP_LIBC_HAS_LDBL_MAX
#endif
#ifdef FLT_EPSILON
#undef FLT_EPSILON
#define MWRAP_LIBC_HAS_FLT_EPSILON
#endif
#ifdef DBL_EPSILON
#undef DBL_EPSILON
#define MWRAP_LIBC_HAS_DBL_EPSILON
#endif
#ifdef LDBL_EPSILON
#undef LDBL_EPSILON
#define MWRAP_LIBC_HAS_LDBL_EPSILON
#endif
#ifdef FLT_MIN
#undef FLT_MIN
#define MWRAP_LIBC_HAS_FLT_MIN
#endif
#ifdef DBL_MIN
#undef DBL_MIN
#define MWRAP_LIBC_HAS_DBL_MIN
#endif
#ifdef LDBL_MIN
#undef LDBL_MIN
#define MWRAP_LIBC_HAS_LDBL_MIN
#endif
#ifdef FLT_TRUE_MIN
#undef FLT_TRUE_MIN
#define MWRAP_LIBC_HAS_FLT_TRUE_MIN
#endif
#ifdef DBL_TRUE_MIN
#undef DBL_TRUE_MIN
#define MWRAP_LIBC_HAS_DBL_TRUE_MIN
#endif
#ifdef LDBL_TRUE_MIN
#undef LDBL_TRUE_MIN
#define MWRAP_LIBC_HAS_LDBL_TRUE_MIN
#endif
#ifdef PRId8
#undef PRId8
#define MWRAP_LIBC_HAS_PRId8
#endif
#ifdef PRId16
#undef PRId16
#define MWRAP_LIBC_HAS_PRId16
#endif
#ifdef PRId32
#undef PRId32
#define MWRAP_LIBC_HAS_PRId32
#endif
#ifdef PRId64
#undef PRId64
#define MWRAP_LIBC_HAS_PRId64
#endif
#ifdef PRIdLEAST8
#undef PRIdLEAST8
#define MWRAP_LIBC_HAS_PRIdLEAST8
#endif
#ifdef PRIdLEAST16
#undef PRIdLEAST16
#define MWRAP_LIBC_HAS_PRIdLEAST16
#endif
#ifdef PRIdLEAST32
#undef PRIdLEAST32
#define MWRAP_LIBC_HAS_PRIdLEAST32
#endif
#ifdef PRIdLEAST64
#undef PRIdLEAST64
#define MWRAP_LIBC_HAS_PRIdLEAST64
#endif
#ifdef PRIdFAST8
#undef PRIdFAST8
#define MWRAP_LIBC_HAS_PRIdFAST8
#endif
#ifdef PRIdFAST16
#undef PRIdFAST16
#define MWRAP_LIBC_HAS_PRIdFAST16
#endif
#ifdef PRIdFAST32
#undef PRIdFAST32
#define MWRAP_LIBC_HAS_PRIdFAST32
#endif
#ifdef PRIdFAST64
#undef PRIdFAST64
#define MWRAP_LIBC_HAS_PRIdFAST64
#endif
#ifdef PRIdMAX
#undef PRIdMAX
#define MWRAP_LIBC_HAS_PRIdMAX
#endif
#ifdef PRIdPTR
#undef PRIdPTR
#define MWRAP_LIBC_HAS_PRIdPTR
#endif
#ifdef PRIi8
#undef PRIi8
#define MWRAP_LIBC_HAS_PRIi8
#endif
#ifdef PRIi16
#undef PRIi16
#define MWRAP_LIBC_HAS_PRIi16
#endif
#ifdef PRIi32
#undef PRIi32
#define MWRAP_LIBC_HAS_PRIi32
#endif
#ifdef PRIi64
#undef PRIi64
#define MWRAP_LIBC_HAS_PRIi64
#endif
#ifdef PRIiLEAST8
#undef PRIiLEAST8
#define MWRAP_LIBC_HAS_PRIiLEAST8
#endif
#ifdef PRIiLEAST16
#undef PRIiLEAST16
#define MWRAP_LIBC_HAS_PRIiLEAST16
#endif
#ifdef PRIiLEAST32
#undef PRIiLEAST32
#define MWRAP_LIBC_HAS_PRIiLEAST32
#endif
#ifdef PRIiLEAST64
#undef PRIiLEAST64
#define MWRAP_LIBC_HAS_PRIiLEAST64
#endif
#ifdef PRIiFAST8
#undef PRIiFAST8
#define MWRAP_LIBC_HAS_PRIiFAST8
#endif
#ifdef PRIiFAST16
#undef PRIiFAST16
#define MWRAP_LIBC_HAS_PRIiFAST16
#endif
#ifdef PRIiFAST32
#undef PRIiFAST32
#define MWRAP_LIBC_HAS_PRIiFAST32
#endif
#ifdef PRIiFAST64
#undef PRIiFAST64
#define MWRAP_LIBC_HAS_PRIiFAST64
#endif
#ifdef PRIiMAX
#undef PRIiMAX
#define MWRAP_LIBC_HAS_PRIiMAX
#endif
#ifdef PRIiPTR
#undef PRIiPTR
#define MWRAP_LIBC_HAS_PRIiPTR
#endif
#ifdef PRIo8
#undef PRIo8
#define MWRAP_LIBC_HAS_PRIo8
#endif
#ifdef PRIo16
#undef PRIo16
#define MWRAP_LIBC_HAS_PRIo16
#endif
#ifdef PRIo32
#undef PRIo32
#define MWRAP_LIBC_HAS_PRIo32
#endif
#ifdef PRIo64
#undef PRIo64
#define MWRAP_LIBC_HAS_PRIo64
#endif
#ifdef PRIoLEAST8
#undef PRIoLEAST8
#define MWRAP_LIBC_HAS_PRIoLEAST8
#endif
#ifdef PRIoLEAST16
#undef PRIoLEAST16
#define MWRAP_LIBC_HAS_PRIoLEAST16
#endif
#ifdef PRIoLEAST32
#undef PRIoLEAST32
#define MWRAP_LIBC_HAS_PRIoLEAST32
#endif
#ifdef PRIoLEAST64
#undef PRIoLEAST64
#define MWRAP_LIBC_HAS_PRIoLEAST64
#endif
#ifdef PRIoFAST8
#undef PRIoFAST8
#define MWRAP_LIBC_HAS_PRIoFAST8
#endif
#ifdef PRIoFAST16
#undef PRIoFAST16
#define MWRAP_LIBC_HAS_PRIoFAST16
#endif
#ifdef PRIoFAST32
#undef PRIoFAST32
#define MWRAP_LIBC_HAS_PRIoFAST32
#endif
#ifdef PRIoFAST64
#undef PRIoFAST64
#define MWRAP_LIBC_HAS_PRIoFAST64
#endif
#ifdef PRIoMAX
#undef PRIoMAX
#define MWRAP_LIBC_HAS_PRIoMAX
#endif
#ifdef PRIoPTR
#undef PRIoPTR
#define MWRAP_LIBC_HAS_PRIoPTR
#endif
#ifdef PRIu8
#undef PRIu8
#define MWRAP_LIBC_HAS_PRIu8
#endif
#ifdef PRIu16
#undef PRIu16
#define MWRAP_LIBC_HAS_PRIu16
#endif
#ifdef PRIu32
#undef PRIu32
#define MWRAP_LIBC_HAS_PRIu32
#endif
#ifdef PRIu64
#undef PRIu64
#define MWRAP_LIBC_HAS_PRIu64
#endif
#ifdef PRIuLEAST8
#undef PRIuLEAST8
#define MWRAP_LIBC_HAS_PRIuLEAST8
#endif
#ifdef PRIuLEAST16
#undef PRIuLEAST16
#define MWRAP_LIBC_HAS_PRIuLEAST16
#endif
#ifdef PRIuLEAST32
#undef PRIuLEAST32
#define MWRAP_LIBC_HAS_PRIuLEAST32
#endif
#ifdef PRIuLEAST64
#undef PRIuLEAST64
#define MWRAP_LIBC_HAS_PRIuLEAST64
#endif
#ifdef PRIuFAST8
#undef PRIuFAST8
#define MWRAP_LIBC_HAS_PRIuFAST8
#endif
#ifdef PRIuFAST16
#undef PRIuFAST16
#define MWRAP_LIBC_HAS_PRIuFAST16
#endif
#ifdef PRIuFAST32
#undef PRIuFAST32
#define MWRAP_LIBC_HAS_PRIuFAST32
#endif
#ifdef PRIuFAST64
#undef PRIuFAST64
#define MWRAP_LIBC_HAS_PRIuFAST64
#endif
#ifdef PRIuMAX
#undef PRIuMAX
#define MWRAP_LIBC_HAS_PRIuMAX
#endif
#ifdef PRIuPTR
#undef PRIuPTR
#define MWRAP_LIBC_HAS_PRIuPTR
#endif
#ifdef PRIx8
#undef PRIx8
#define MWRAP_LIBC_HAS_PRIx8
#endif
#ifdef PRIx16
#undef PRIx16
#define MWRAP_LIBC_HAS_PRIx16
#endif
#ifdef PRIx32
#undef PRIx32
#define MWRAP_LIBC_HAS_PRIx32
#endif
#ifdef PRIx64
#undef PRIx64
#define MWRAP_LIBC_HAS_PRIx64
#endif
#ifdef PRIxLEAST8
#undef PRIxLEAST8
#define MWRAP_LIBC_HAS_PRIxLEAST8
#endif
#ifdef PRIxLEAST16
#undef PRIxLEAST16
#define MWRAP_LIBC_HAS_PRIxLEAST16
#endif
#ifdef PRIxLEAST32
#undef PRIxLEAST32
#define MWRAP_LIBC_HAS_PRIxLEAST32
#endif
#ifdef PRIxLEAST64
#undef PRIxLEAST64
#define MWRAP_LIBC_HAS_PRIxLEAST64
#endif
#ifdef PRIxFAST8
#undef PRIxFAST8
#define MWRAP_LIBC_HAS_PRIxFAST8
#endif
#ifdef PRIxFAST16
#undef PRIxFAST16
#define MWRAP_LIBC_HAS_PRIxFAST16
#endif
#ifdef PRIxFAST32
#undef PRIxFAST32
#define MWRAP_LIBC_HAS_PRIxFAST32
#endif
#ifdef PRIxFAST64
#undef PRIxFAST64
#define MWRAP_LIBC_HAS_PRIxFAST64
#endif
#ifdef PRIxMAX
#undef PRIxMAX
#define MWRAP_LIBC_HAS_PRIxMAX
#endif
#ifdef PRIxPTR
#undef PRIxPTR
#define MWRAP_LIBC_HAS_PRIxPTR
#endif
#ifdef PRIX8
#undef PRIX8
#define MWRAP_LIBC_HAS_PRIX8
#endif
#ifdef PRIX16
#undef PRIX16
#define MWRAP_LIBC_HAS_PRIX16
#endif
#ifdef PRIX32
#undef PRIX32
#define MWRAP_LIBC_HAS_PRIX32
#endif
#ifdef PRIX64
#undef PRIX64
#define MWRAP_LIBC_HAS_PRIX64
#endif
#ifdef PRIXLEAST8
#undef PRIXLEAST8
#define MWRAP_LIBC_HAS_PRIXLEAST8
#endif
#ifdef PRIXLEAST16
#undef PRIXLEAST16
#define MWRAP_LIBC_HAS_PRIXLEAST16
#endif
#ifdef PRIXLEAST32
#undef PRIXLEAST32
#define MWRAP_LIBC_HAS_PRIXLEAST32
#endif
#ifdef PRIXLEAST64
#undef PRIXLEAST64
#define MWRAP_LIBC_HAS_PRIXLEAST64
#endif
#ifdef PRIXFAST8
#undef PRIXFAST8
#define MWRAP_LIBC_HAS_PRIXFAST8
#endif
#ifdef PRIXFAST16
#undef PRIXFAST16
#define MWRAP_LIBC_HAS_PRIXFAST16
#endif
#ifdef PRIXFAST32
#undef PRIXFAST32
#define MWRAP_LIBC_HAS_PRIXFAST32
#endif
#ifdef PRIXFAST64
#undef PRIXFAST64
#define MWRAP_LIBC_HAS_PRIXFAST64
#endif
#ifdef PRIXMAX
#undef PRIXMAX
#define MWRAP_LIBC_HAS_PRIXMAX
#endif
#ifdef PRIXPTR
#undef PRIXPTR
#define MWRAP_LIBC_HAS_PRIXPTR
#endif
#ifdef SCNd8
#undef SCNd8
#define MWRAP_LIBC_HAS_SCNd8
#endif
#ifdef SCNd16
#undef SCNd16
#define MWRAP_LIBC_HAS_SCNd16
#endif
#ifdef SCNd32
#undef SCNd32
#define MWRAP_LIBC_HAS_SCNd32
#endif
#ifdef SCNd64
#undef SCNd64
#define MWRAP_LIBC_HAS_SCNd64
#endif
#ifdef SCNdLEAST8
#undef SCNdLEAST8
#define MWRAP_LIBC_HAS_SCNdLEAST8
#endif
#ifdef SCNdLEAST16
#undef SCNdLEAST16
#define MWRAP_LIBC_HAS_SCNdLEAST16
#endif
#ifdef SCNdLEAST32
#undef SCNdLEAST32
#define MWRAP_LIBC_HAS_SCNdLEAST32
#endif
#ifdef SCNdLEAST64
#undef SCNdLEAST64
#define MWRAP_LIBC_HAS_SCNdLEAST64
#endif
#ifdef SCNdFAST8
#undef SCNdFAST8
#define MWRAP_LIBC_HAS_SCNdFAST8
#endif
#ifdef SCNdFAST16
#undef SCNdFAST16
#define MWRAP_LIBC_HAS_SCNdFAST16
#endif
#ifdef SCNdFAST32
#undef SCNdFAST32
#define MWRAP_LIBC_HAS_SCNdFAST32
#endif
#ifdef SCNdFAST64
#undef SCNdFAST64
#define MWRAP_LIBC_HAS_SCNdFAST64
#endif
#ifdef SCNdMAX
#undef SCNdMAX
#define MWRAP_LIBC_HAS_SCNdMAX
#endif
#ifdef SCNdPTR
#undef SCNdPTR
#define MWRAP_LIBC_HAS_SCNdPTR
#endif
#ifdef SCNi8
#undef SCNi8
#define MWRAP_LIBC_HAS_SCNi8
#endif
#ifdef SCNi16
#undef SCNi16
#define MWRAP_LIBC_HAS_SCNi16
#endif
#ifdef SCNi32
#undef SCNi32
#define MWRAP_LIBC_HAS_SCNi32
#endif
#ifdef SCNi64
#undef SCNi64
#define MWRAP_LIBC_HAS_SCNi64
#endif
#ifdef SCNiLEAST8
#undef SCNiLEAST8
#define MWRAP_LIBC_HAS_SCNiLEAST8
#endif
#ifdef SCNiLEAST16
#undef SCNiLEAST16
#define MWRAP_LIBC_HAS_SCNiLEAST16
#endif
#ifdef SCNiLEAST32
#undef SCNiLEAST32
#define MWRAP_LIBC_HAS_SCNiLEAST32
#endif
#ifdef SCNiLEAST64
#undef SCNiLEAST64
#define MWRAP_LIBC_HAS_SCNiLEAST64
#endif
#ifdef SCNiFAST8
#undef SCNiFAST8
#define MWRAP_LIBC_HAS_SCNiFAST8
#endif
#ifdef SCNiFAST16
#undef SCNiFAST16
#define MWRAP_LIBC_HAS_SCNiFAST16
#endif
#ifdef SCNiFAST32
#undef SCNiFAST32
#define MWRAP_LIBC_HAS_SCNiFAST32
#endif
#ifdef SCNiFAST64
#undef SCNiFAST64
#define MWRAP_LIBC_HAS_SCNiFAST64
#endif
#ifdef SCNiMAX
#undef SCNiMAX
#define MWRAP_LIBC_HAS_SCNiMAX
#endif
#ifdef SCNiPTR
#undef SCNiPTR
#define MWRAP_LIBC_HAS_SCNiPTR
#endif
#ifdef SCNo8
#undef SCNo8
#define MWRAP_LIBC_HAS_SCNo8
#endif
#ifdef SCNo16
#undef SCNo16
#define MWRAP_LIBC_HAS_SCNo16
#endif
#ifdef SCNo32
#undef SCNo32
#define MWRAP_LIBC_HAS_SCNo32
#endif
#ifdef SCNo64
#undef SCNo64
#define MWRAP_LIBC_HAS_SCNo64
#endif
#ifdef SCNoLEAST8
#undef SCNoLEAST8
#define MWRAP_LIBC_HAS_SCNoLEAST8
#endif
#ifdef SCNoLEAST16
#undef SCNoLEAST16
#define MWRAP_LIBC_HAS_SCNoLEAST16
#endif
#ifdef SCNoLEAST32
#undef SCNoLEAST32
#define MWRAP_LIBC_HAS_SCNoLEAST32
#endif
#ifdef SCNoLEAST64
#undef SCNoLEAST64
#define MWRAP_LIBC_HAS_SCNoLEAST64
#endif
#ifdef SCNoFAST8
#undef SCNoFAST8
#define MWRAP_LIBC_HAS_SCNoFAST8
#endif
#ifdef SCNoFAST16
#undef SCNoFAST16
#define MWRAP_LIBC_HAS_SCNoFAST16
#endif
#ifdef SCNoFAST32
#undef SCNoFAST32
#define MWRAP_LIBC_HAS_SCNoFAST32
#endif
#ifdef SCNoFAST64
#undef SCNoFAST64
#define MWRAP_LIBC_HAS_SCNoFAST64
#endif
#ifdef SCNoMAX
#undef SCNoMAX
#define MWRAP_LIBC_HAS_SCNoMAX
#endif
#ifdef SCNoPTR
#undef SCNoPTR
#define MWRAP_LIBC_HAS_SCNoPTR
#endif
#ifdef SCNu8
#undef SCNu8
#define MWRAP_LIBC_HAS_SCNu8
#endif
#ifdef SCNu16
#undef SCNu16
#define MWRAP_LIBC_HAS_SCNu16
#endif
#ifdef SCNu32
#undef SCNu32
#define MWRAP_LIBC_HAS_SCNu32
#endif
#ifdef SCNu64
#undef SCNu64
#define MWRAP_LIBC_HAS_SCNu64
#endif
#ifdef SCNuLEAST8
#undef SCNuLEAST8
#define MWRAP_LIBC_HAS_SCNuLEAST8
#endif
#ifdef SCNuLEAST16
#undef SCNuLEAST16
#define MWRAP_LIBC_HAS_SCNuLEAST16
#endif
#ifdef SCNuLEAST32
#undef SCNuLEAST32
#define MWRAP_LIBC_HAS_SCNuLEAST32
#endif
#ifdef SCNuLEAST64
#undef SCNuLEAST64
#define MWRAP_LIBC_HAS_SCNuLEAST64
#endif
#ifdef SCNuFAST8
#undef SCNuFAST8
#define MWRAP_LIBC_HAS_SCNuFAST8
#endif
#ifdef SCNuFAST16
#undef SCNuFAST16
#define MWRAP_LIBC_HAS_SCNuFAST16
#endif
#ifdef SCNuFAST32
#undef SCNuFAST32
#define MWRAP_LIBC_HAS_SCNuFAST32
#endif
#ifdef SCNuFAST64
#undef SCNuFAST64
#define MWRAP_LIBC_HAS_SCNuFAST64
#endif
#ifdef SCNuMAX
#undef SCNuMAX
#define MWRAP_LIBC_HAS_SCNuMAX
#endif
#ifdef SCNuPTR
#undef SCNuPTR
#define MWRAP_LIBC_HAS_SCNuPTR
#endif
#ifdef SCNx8
#undef SCNx8
#define MWRAP_LIBC_HAS_SCNx8
#endif
#ifdef SCNx16
#undef SCNx16
#define MWRAP_LIBC_HAS_SCNx16
#endif
#ifdef SCNx32
#undef SCNx32
#define MWRAP_LIBC_HAS_SCNx32
#endif
#ifdef SCNx64
#undef SCNx64
#define MWRAP_LIBC_HAS_SCNx64
#endif
#ifdef SCNxLEAST8
#undef SCNxLEAST8
#define MWRAP_LIBC_HAS_SCNxLEAST8
#endif
#ifdef SCNxLEAST16
#undef SCNxLEAST16
#define MWRAP_LIBC_HAS_SCNxLEAST16
#endif
#ifdef SCNxLEAST32
#undef SCNxLEAST32
#define MWRAP_LIBC_HAS_SCNxLEAST32
#endif
#ifdef SCNxLEAST64
#undef SCNxLEAST64
#define MWRAP_LIBC_HAS_SCNxLEAST64
#endif
#ifdef SCNxFAST8
#undef SCNxFAST8
#define MWRAP_LIBC_HAS_SCNxFAST8
#endif
#ifdef SCNxFAST16
#undef SCNxFAST16
#define MWRAP_LIBC_HAS_SCNxFAST16
#endif
#ifdef SCNxFAST32
#undef SCNxFAST32
#define MWRAP_LIBC_HAS_SCNxFAST32
#endif
#ifdef SCNxFAST64
#undef SCNxFAST64
#define MWRAP_LIBC_HAS_SCNxFAST64
#endif
#ifdef SCNxMAX
#undef SCNxMAX
#define MWRAP_LIBC_HAS_SCNxMAX
#endif
#ifdef SCNxPTR
#undef SCNxPTR
#define MWRAP_LIBC_HAS_SCNxPTR
#endif
#ifdef CHAR_BIT
#undef CHAR_BIT
#define MWRAP_LIBC_HAS_CHAR_BIT
#endif
#ifdef SCHAR_MIN
#undef SCHAR_MIN
#define MWRAP_LIBC_HAS_SCHAR_MIN
#endif
#ifdef SCHAR_MAX
#undef SCHAR_MAX
#define MWRAP_LIBC_HAS_SCHAR_MAX
#endif
#ifdef UCHAR_MAX
#undef UCHAR_MAX
#define MWRAP_LIBC_HAS_UCHAR_MAX
#endif
#ifdef CHAR_MIN
#undef CHAR_MIN
#define MWRAP_LIBC_HAS_CHAR_MIN
#endif
#ifdef CHAR_MAX
#undef CHAR_MAX
#define MWRAP_LIBC_HAS_CHAR_MAX
#endif
#ifdef MB_LEN_MAX
#undef MB_LEN_MAX
#define MWRAP_LIBC_HAS_MB_LEN_MAX
#endif
#ifdef SHRT_MIN
#undef SHRT_MIN
#define MWRAP_LIBC_HAS_SHRT_MIN
#endif
#ifdef SHRT_MAX
#undef SHRT_MAX
#define MWRAP_LIBC_HAS_SHRT_MAX
#endif
#ifdef USHRT_MAX
#undef USHRT_MAX
#define MWRAP_LIBC_HAS_USHRT_MAX
#endif
#ifdef INT_MIN
#undef INT_MIN
#define MWRAP_LIBC_HAS_INT_MIN
#endif
#ifdef INT_MAX
#undef INT_MAX
#define MWRAP_LIBC_HAS_INT_MAX
#endif
#ifdef UINT_MAX
#undef UINT_MAX
#define MWRAP_LIBC_HAS_UINT_MAX
#endif
#ifdef LONG_MIN
#undef LONG_MIN
#define MWRAP_LIBC_HAS_LONG_MIN
#endif
#ifdef LONG_MAX
#undef LONG_MAX
#define MWRAP_LIBC_HAS_LONG_MAX
#endif
#ifdef ULONG_MAX
#undef ULONG_MAX
#define MWRAP_LIBC_HAS_ULONG_MAX
#endif
#ifdef LLONG_MIN
#undef LLONG_MIN
#define MWRAP_LIBC_HAS_LLONG_MIN
#endif
#ifdef LLONG_MAX
#undef LLONG_MAX
#define MWRAP_LIBC_HAS_LLONG_MAX
#endif
#ifdef ULLONG_MAX
#undef ULLONG_MAX
#define MWRAP_LIBC_HAS_ULLONG_MAX
#endif
#ifdef LC_ALL
#undef LC_ALL
#define MWRAP_LIBC_HAS_LC_ALL
#endif
#ifdef LC_COLLATE
#undef LC_COLLATE
#define MWRAP_LIBC_HAS_LC_COLLATE
#endif
#ifdef LC_CTYPE
#undef LC_CTYPE
#define MWRAP_LIBC_HAS_LC_CTYPE
#endif
#ifdef LC_MONETARY
#undef LC_MONETARY
#define MWRAP_LIBC_HAS_LC_MONETARY
#endif
#ifdef LC_NUMERIC
#undef LC_NUMERIC
#define MWRAP_LIBC_HAS_LC_NUMERIC
#endif
#ifdef LC_TIME
#undef LC_TIME
#define MWRAP_LIBC_HAS_LC_TIME
#endif
#ifdef HUGE_VAL
#undef HUGE_VAL
#define MWRAP_LIBC_HAS_HUGE_VAL
#endif
#ifdef HUGE_VALF
#undef HUGE_VALF
#define MWRAP_LIBC_HAS_HUGE_VALF
#endif
#ifdef HUGE_VALL
#undef HUGE_VALL
#define MWRAP_LIBC_HAS_HUGE_VALL
#endif
#ifdef INFINITY
#undef INFINITY
#define MWRAP_LIBC_HAS_INFINITY
#endif
#ifdef NAN
#undef NAN
#define MWRAP_LIBC_HAS_NAN
#endif
#ifdef FP_INFINITE
#undef FP_INFINITE
#define MWRAP_LIBC_HAS_FP_INFINITE
#endif
#ifdef FP_NAN
#undef FP_NAN
#define MWRAP_LIBC_HAS_FP_NAN
#endif
#ifdef FP_NORMAL
#undef FP_NORMAL
#define MWRAP_LIBC_HAS_FP_NORMAL
#endif
#ifdef FP_SUBNORMAL
#undef FP_SUBNORMAL
#define MWRAP_LIBC_HAS_FP_SUBNORMAL
#endif
#ifdef FP_ZERO
#undef FP_ZERO
#define MWRAP_LIBC_HAS_FP_ZERO
#endif
#ifdef FP_FAST_FMA
#undef FP_FAST_FMA
#define MWRAP_LIBC_HAS_FP_FAST_FMA
#endif
#ifdef FP_FAST_FMAF
#undef FP_FAST_FMAF
#define MWRAP_LIBC_HAS_FP_FAST_FMAF
#endif
#ifdef FP_FAST_FMAL
#undef FP_FAST_FMAL
#define MWRAP_LIBC_HAS_FP_FAST_FMAL
#endif
#ifdef FP_ILOGB0
#undef FP_ILOGB0
#define MWRAP_LIBC_HAS_FP_ILOGB0
#endif
#ifdef FP_ILOGBNAN
#undef FP_ILOGBNAN
#define MWRAP_LIBC_HAS_FP_ILOGBNAN
#endif
#ifdef MATH_ERRNO
#undef MATH_ERRNO
#define MWRAP_LIBC_HAS_MATH_ERRNO
#endif
#ifdef MATH_ERREXCEPT
#undef MATH_ERREXCEPT
#define MWRAP_LIBC_HAS_MATH_ERREXCEPT
#endif
#ifdef math_errhandling
#undef math_errhandling
#define MWRAP_LIBC_HAS_math_errhandling
#endif
#ifdef SIG_DFL
#undef SIG_DFL
#define MWRAP_LIBC_HAS_SIG_DFL
#endif
#ifdef SIG_ERR
#undef SIG_ERR
#define MWRAP_LIBC_HAS_SIG_ERR
#endif
#ifdef SIG_IGN
#undef SIG_IGN
#define MWRAP_LIBC_HAS_SIG_IGN
#endif
#ifdef SIGABRT
#undef SIGABRT
#define MWRAP_LIBC_HAS_SIGABRT
#endif
#ifdef SIGFPE
#undef SIGFPE
#define MWRAP_LIBC_HAS_SIGFPE
#endif
#ifdef SIGILL
#undef SIGILL
#define MWRAP_LIBC_HAS_SIGILL
#endif
#ifdef SIGINT
#undef SIGINT
#define MWRAP_LIBC_HAS_SIGINT
#endif
#ifdef SIGSEGV
#undef SIGSEGV
#define MWRAP_LIBC_HAS_SIGSEGV
#endif
#ifdef SIGTERM
#undef SIGTERM
#define MWRAP_LIBC_HAS_SIGTERM
#endif
#ifdef INT8_MIN
#undef INT8_MIN
#define MWRAP_LIBC_HAS_INT8_MIN
#endif
#ifdef INT8_MAX
#undef INT8_MAX
#define MWRAP_LIBC_HAS_INT8_MAX
#endif
#ifdef UINT8_MAX
#undef UINT8_MAX
#define MWRAP_LIBC_HAS_UINT8_MAX
#endif
#ifdef INT_LEAST8_MIN
#undef INT_LEAST8_MIN
#define MWRAP_LIBC_HAS_INT_LEAST8_MIN
#endif
#ifdef INT_LEAST8_MAX
#undef INT_LEAST8_MAX
#define MWRAP_LIBC_HAS_INT_LEAST8_MAX
#endif
#ifdef UINT_LEAST8_MAX
#undef UINT_LEAST8_MAX
#define MWRAP_LIBC_HAS_UINT_LEAST8_MAX
#endif
#ifdef INT_FAST8_MIN
#undef INT_FAST8_MIN
#define MWRAP_LIBC_HAS_INT_FAST8_MIN
#endif
#ifdef INT_FAST8_MAX
#undef INT_FAST8_MAX
#define MWRAP_LIBC_HAS_INT_FAST8_MAX
#endif
#ifdef UINT_FAST8_MAX
#undef UINT_FAST8_MAX
#define MWRAP_LIBC_HAS_UINT_FAST8_MAX
#endif
#ifdef INT16_MIN
#undef INT16_MIN
#define MWRAP_LIBC_HAS_INT16_MIN
#endif
#ifdef INT16_MAX
#undef INT16_MAX
#define MWRAP_LIBC_HAS_INT16_MAX
#endif
#ifdef UINT16_MAX
#undef UINT16_MAX
#define MWRAP_LIBC_HAS_UINT16_MAX
#endif
#ifdef INT_LEAST16_MIN
#undef INT_LEAST16_MIN
#define MWRAP_LIBC_HAS_INT_LEAST16_MIN
#endif
#ifdef INT_LEAST16_MAX
#undef INT_LEAST16_MAX
#define MWRAP_LIBC_HAS_INT_LEAST16_MAX
#endif
#ifdef UINT_LEAST16_MAX
#undef UINT_LEAST16_MAX
#define MWRAP_LIBC_HAS_UINT_LEAST16_MAX
#endif
#ifdef INT_FAST16_MIN
#undef INT_FAST16_MIN
#define MWRAP_LIBC_HAS_INT_FAST16_MIN
#endif
#ifdef INT_FAST16_MAX
#undef INT_FAST16_MAX
#define MWRAP_LIBC_HAS_INT_FAST16_MAX
#endif
#ifdef UINT_FAST16_MAX
#undef UINT_FAST16_MAX
#define MWRAP_LIBC_HAS_UINT_FAST16_MAX
#endif
#ifdef INT32_MIN
#undef INT32_MIN
#define MWRAP_LIBC_HAS_INT32_MIN
#endif
#ifdef INT32_MAX
#undef INT32_MAX
#define MWRAP_LIBC_HAS_INT32_MAX
#endif
#ifdef UINT32_MAX
#undef UINT32_MAX
#define MWRAP_LIBC_HAS_UINT32_MAX
#endif
#ifdef INT_LEAST32_MIN
#undef INT_LEAST32_MIN
#define MWRAP_LIBC_HAS_INT_LEAST32_MIN
#endif
#ifdef INT_LEAST32_MAX
#undef INT_LEAST32_MAX
#define MWRAP_LIBC_HAS_INT_LEAST32_MAX
#endif
#ifdef UINT_LEAST32_MAX
#undef UINT_LEAST32_MAX
#define MWRAP_LIBC_HAS_UINT_LEAST32_MAX
#endif
#ifdef INT_FAST32_MIN
#undef INT_FAST32_MIN
#define MWRAP_LIBC_HAS_INT_FAST32_MIN
#endif
#ifdef INT_FAST32_MAX
#undef INT_FAST32_MAX
#define MWRAP_LIBC_HAS_INT_FAST32_MAX
#endif
#ifdef UINT_FAST32_MAX
#undef UINT_FAST32_MAX
#define MWRAP_LIBC_HAS_UINT_FAST32_MAX
#endif
#ifdef INT64_MIN
#undef INT64_MIN
#define MWRAP_LIBC_HAS_INT64_MIN
#endif
#ifdef INT64_MAX
#undef INT64_MAX
#define MWRAP_LIBC_HAS_INT64_MAX
#endif
#ifdef UINT64_MAX
#undef UINT64_MAX
#define MWRAP_LIBC_HAS_UINT64_MAX
#endif
#ifdef INT_LEAST64_MIN
#undef INT_LEAST64_MIN
#define MWRAP_LIBC_HAS_INT_LEAST64_MIN
#endif
#ifdef INT_LEAST64_MAX
#undef INT_LEAST64_MAX
#define MWRAP_LIBC_HAS_INT_LEAST64_MAX
#endif
#ifdef UINT_LEAST64_MAX
#undef UINT_LEAST64_MAX
#define MWRAP_LIBC_HAS_UINT_LEAST64_MAX
#endif
#ifdef INT_FAST64_MIN
#undef INT_FAST64_MIN
#define MWRAP_LIBC_HAS_INT_FAST64_MIN
#endif
#ifdef INT_FAST64_MAX
#undef INT_FAST64_MAX
#define MWRAP_LIBC_HAS_INT_FAST64_MAX
#endif
#ifdef UINT_FAST64_MAX
#undef UINT_FAST64_MAX
#define MWRAP_LIBC_HAS_UINT_FAST64_MAX
#endif
#ifdef INTPTR_MIN
#undef INTPTR_MIN
#define MWRAP_LIBC_HAS_INTPTR_MIN
#endif
#ifdef INTPTR_MAX
#undef INTPTR_MAX
#define MWRAP_LIBC_HAS_INTPTR_MAX
#endif
#ifdef UINTPTR_MAX
#undef UINTPTR_MAX
#define MWRAP_LIBC_HAS_UINTPTR_MAX
#endif
#ifdef INTMAX_MIN
#undef INTMAX_MIN
#define MWRAP_LIBC_HAS_INTMAX_MIN
#endif
#ifdef INTMAX_MAX
#undef INTMAX_MAX
#define MWRAP_LIBC_HAS_INTMAX_MAX
#endif
#ifdef UINTMAX_MAX
#undef UINTMAX_MAX
#define MWRAP_LIBC_HAS_UINTMAX_MAX
#endif
#ifdef PTRDIFF_MIN
#undef PTRDIFF_MIN
#define MWRAP_LIBC_HAS_PTRDIFF_MIN
#endif
#ifdef PTRDIFF_MAX
#undef PTRDIFF_MAX
#define MWRAP_LIBC_HAS_PTRDIFF_MAX
#endif
#ifdef SIG_ATOMIC_MIN
#undef SIG_ATOMIC_MIN
#define MWRAP_LIBC_HAS_SIG_ATOMIC_MIN
#endif
#ifdef SIG_ATOMIC_MAX
#undef SIG_ATOMIC_MAX
#define MWRAP_LIBC_HAS_SIG_ATOMIC_MAX
#endif
#ifdef SIZE_MAX
#undef SIZE_MAX
#define MWRAP_LIBC_HAS_SIZE_MAX
#endif
#ifdef WCHAR_MIN
#undef WCHAR_MIN
#define MWRAP_LIBC_HAS_WCHAR_MIN
#endif
#ifdef WCHAR_MAX
#undef WCHAR_MAX
#define MWRAP_LIBC_HAS_WCHAR_MAX
#endif
#ifdef WINT_MIN
#undef WINT_MIN
#define MWRAP_LIBC_HAS_WINT_MIN
#endif
#ifdef WINT_MAX
#undef WINT_MAX
#define MWRAP_LIBC_HAS_WINT_MAX
#endif
#ifdef _IOFBF
#undef _IOFBF
#define MWRAP_LIBC_HAS__IOFBF
#endif
#ifdef _IOLBF
#undef _IOLBF
#define MWRAP_LIBC_HAS__IOLBF
#endif
#ifdef _IONBF
#undef _IONBF
#define MWRAP_LIBC_HAS__IONBF
#endif
#ifdef BUFSIZ
#undef BUFSIZ
#define MWRAP_LIBC_HAS_BUFSIZ
#endif
#ifdef EOF
#undef EOF
#define MWRAP_LIBC_HAS_EOF
#endif
#ifdef FOPEN_MAX
#undef FOPEN_MAX
#define MWRAP_LIBC_HAS_FOPEN_MAX
#endif
#ifdef FILENAME_MAX
#undef FILENAME_MAX
#define MWRAP_LIBC_HAS_FILENAME_MAX
#endif
#ifdef L_tmpnam
#undef L_tmpnam
#define MWRAP_LIBC_HAS_L_tmpnam
#endif
#ifdef SEEK_CUR
#undef SEEK_CUR
#define MWRAP_LIBC_HAS_SEEK_CUR
#endif
#ifdef SEEK_END
#undef SEEK_END
#define MWRAP_LIBC_HAS_SEEK_END
#endif
#ifdef SEEK_SET
#undef SEEK_SET
#define MWRAP_LIBC_HAS_SEEK_SET
#endif
#ifdef TMP_MAX
#undef TMP_MAX
#define MWRAP_LIBC_HAS_TMP_MAX
#endif
#ifdef stderr
#undef stderr
#define MWRAP_LIBC_HAS_stderr
#endif
#ifdef stdin
#undef stdin
#define MWRAP_LIBC_HAS_stdin
#endif
#ifdef stdout
#undef stdout
#define MWRAP_LIBC_HAS_stdout
#endif
#ifdef EXIT_FAILURE
#undef EXIT_FAILURE
#define MWRAP_LIBC_HAS_EXIT_FAILURE
#endif
#ifdef EXIT_SUCCESS
#undef EXIT_SUCCESS
#define MWRAP_LIBC_HAS_EXIT_SUCCESS
#endif
#ifdef RAND_MAX
#undef RAND_MAX
#define MWRAP_LIBC_HAS_RAND_MAX
#endif
#ifdef MB_CUR_MAX
#undef MB_CUR_MAX
#define MWRAP_LIBC_HAS_MB_CUR_MAX
#endif
#ifdef CLOCKS_PER_SEC
#undef CLOCKS_PER_SEC
#define MWRAP_LIBC_HAS_CLOCKS_PER_SEC
#endif
#ifdef TIME_UTC
#undef TIME_UTC
#define MWRAP_LIBC_HAS_TIME_UTC
#endif
#ifdef WEOF
#undef WEOF
#define MWRAP_LIBC_HAS_WEOF
#endif

import std;
import mcpplibs.mwrap.libc.macros;

namespace m = mcpplibs::mwrap::libc::macros;

template <class A, class B>
bool same(A&& a, B&& b)
{
    using T = std::remove_cvref_t<A>;
    if constexpr (std::is_convertible_v<T, const char*>)
        return std::string_view(a) == std::string_view(b);
    else if constexpr (std::is_floating_point_v<T>)
        return (a != a && b != b) || a == b;  // NAN equals NAN here
    else
        return a == b;
}

// A function form: an lvalue (errno, stdout) is the same object, a value is equal.
template <class F, class G>
bool same_result(F mapped, G header)
{
    if constexpr (std::is_lvalue_reference_v<decltype(mapped())>)
        return &mapped() == &header();
    else
        return same(mapped(), header());
}

int main()
{
    int mapped = 0, differ = 0;
    auto check = [&](bool ok, std::string_view name) {
        ++mapped;
        if (!ok) { std::println("FAIL {}", name); ++differ; }
    };
#ifdef MWRAP_LIBC_HAS_EDOM
    check(same(m::EDOM, header::value_EDOM), "EDOM");
#endif
#ifdef MWRAP_LIBC_HAS_EILSEQ
    check(same(m::EILSEQ, header::value_EILSEQ), "EILSEQ");
#endif
#ifdef MWRAP_LIBC_HAS_ERANGE
    check(same(m::ERANGE, header::value_ERANGE), "ERANGE");
#endif
#ifdef MWRAP_LIBC_HAS_errno
    check(same_result([]() -> decltype(auto) { return m::errno(); }, header::get_errno), "errno");
#endif
#ifdef MWRAP_LIBC_HAS_FE_DIVBYZERO
    check(same(m::FE_DIVBYZERO, header::value_FE_DIVBYZERO), "FE_DIVBYZERO");
#endif
#ifdef MWRAP_LIBC_HAS_FE_INEXACT
    check(same(m::FE_INEXACT, header::value_FE_INEXACT), "FE_INEXACT");
#endif
#ifdef MWRAP_LIBC_HAS_FE_INVALID
    check(same(m::FE_INVALID, header::value_FE_INVALID), "FE_INVALID");
#endif
#ifdef MWRAP_LIBC_HAS_FE_OVERFLOW
    check(same(m::FE_OVERFLOW, header::value_FE_OVERFLOW), "FE_OVERFLOW");
#endif
#ifdef MWRAP_LIBC_HAS_FE_UNDERFLOW
    check(same(m::FE_UNDERFLOW, header::value_FE_UNDERFLOW), "FE_UNDERFLOW");
#endif
#ifdef MWRAP_LIBC_HAS_FE_ALL_EXCEPT
    check(same(m::FE_ALL_EXCEPT, header::value_FE_ALL_EXCEPT), "FE_ALL_EXCEPT");
#endif
#ifdef MWRAP_LIBC_HAS_FE_DOWNWARD
    check(same(m::FE_DOWNWARD, header::value_FE_DOWNWARD), "FE_DOWNWARD");
#endif
#ifdef MWRAP_LIBC_HAS_FE_TONEAREST
    check(same(m::FE_TONEAREST, header::value_FE_TONEAREST), "FE_TONEAREST");
#endif
#ifdef MWRAP_LIBC_HAS_FE_TOWARDZERO
    check(same(m::FE_TOWARDZERO, header::value_FE_TOWARDZERO), "FE_TOWARDZERO");
#endif
#ifdef MWRAP_LIBC_HAS_FE_UPWARD
    check(same(m::FE_UPWARD, header::value_FE_UPWARD), "FE_UPWARD");
#endif
#ifdef MWRAP_LIBC_HAS_FE_DFL_ENV
    check(same_result([]() -> decltype(auto) { return m::FE_DFL_ENV(); }, header::get_FE_DFL_ENV), "FE_DFL_ENV");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_ROUNDS
    check(same_result([]() -> decltype(auto) { return m::FLT_ROUNDS(); }, header::get_FLT_ROUNDS), "FLT_ROUNDS");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_EVAL_METHOD
    check(same_result([]() -> decltype(auto) { return m::FLT_EVAL_METHOD(); }, header::get_FLT_EVAL_METHOD), "FLT_EVAL_METHOD");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_HAS_SUBNORM
    check(same(m::FLT_HAS_SUBNORM, header::value_FLT_HAS_SUBNORM), "FLT_HAS_SUBNORM");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_HAS_SUBNORM
    check(same(m::DBL_HAS_SUBNORM, header::value_DBL_HAS_SUBNORM), "DBL_HAS_SUBNORM");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_HAS_SUBNORM
    check(same(m::LDBL_HAS_SUBNORM, header::value_LDBL_HAS_SUBNORM), "LDBL_HAS_SUBNORM");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_RADIX
    check(same(m::FLT_RADIX, header::value_FLT_RADIX), "FLT_RADIX");
#endif
#ifdef MWRAP_LIBC_HAS_DECIMAL_DIG
    check(same(m::DECIMAL_DIG, header::value_DECIMAL_DIG), "DECIMAL_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_MANT_DIG
    check(same(m::FLT_MANT_DIG, header::value_FLT_MANT_DIG), "FLT_MANT_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_MANT_DIG
    check(same(m::DBL_MANT_DIG, header::value_DBL_MANT_DIG), "DBL_MANT_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_MANT_DIG
    check(same(m::LDBL_MANT_DIG, header::value_LDBL_MANT_DIG), "LDBL_MANT_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_DECIMAL_DIG
    check(same(m::FLT_DECIMAL_DIG, header::value_FLT_DECIMAL_DIG), "FLT_DECIMAL_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_DECIMAL_DIG
    check(same(m::DBL_DECIMAL_DIG, header::value_DBL_DECIMAL_DIG), "DBL_DECIMAL_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_DECIMAL_DIG
    check(same(m::LDBL_DECIMAL_DIG, header::value_LDBL_DECIMAL_DIG), "LDBL_DECIMAL_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_DIG
    check(same(m::FLT_DIG, header::value_FLT_DIG), "FLT_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_DIG
    check(same(m::DBL_DIG, header::value_DBL_DIG), "DBL_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_DIG
    check(same(m::LDBL_DIG, header::value_LDBL_DIG), "LDBL_DIG");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_MIN_EXP
    check(same(m::FLT_MIN_EXP, header::value_FLT_MIN_EXP), "FLT_MIN_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_MIN_EXP
    check(same(m::DBL_MIN_EXP, header::value_DBL_MIN_EXP), "DBL_MIN_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_MIN_EXP
    check(same(m::LDBL_MIN_EXP, header::value_LDBL_MIN_EXP), "LDBL_MIN_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_MIN_10_EXP
    check(same(m::FLT_MIN_10_EXP, header::value_FLT_MIN_10_EXP), "FLT_MIN_10_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_MIN_10_EXP
    check(same(m::DBL_MIN_10_EXP, header::value_DBL_MIN_10_EXP), "DBL_MIN_10_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_MIN_10_EXP
    check(same(m::LDBL_MIN_10_EXP, header::value_LDBL_MIN_10_EXP), "LDBL_MIN_10_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_MAX_EXP
    check(same(m::FLT_MAX_EXP, header::value_FLT_MAX_EXP), "FLT_MAX_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_MAX_EXP
    check(same(m::DBL_MAX_EXP, header::value_DBL_MAX_EXP), "DBL_MAX_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_MAX_EXP
    check(same(m::LDBL_MAX_EXP, header::value_LDBL_MAX_EXP), "LDBL_MAX_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_MAX_10_EXP
    check(same(m::FLT_MAX_10_EXP, header::value_FLT_MAX_10_EXP), "FLT_MAX_10_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_MAX_10_EXP
    check(same(m::DBL_MAX_10_EXP, header::value_DBL_MAX_10_EXP), "DBL_MAX_10_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_MAX_10_EXP
    check(same(m::LDBL_MAX_10_EXP, header::value_LDBL_MAX_10_EXP), "LDBL_MAX_10_EXP");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_MAX
    check(same(m::FLT_MAX, header::value_FLT_MAX), "FLT_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_MAX
    check(same(m::DBL_MAX, header::value_DBL_MAX), "DBL_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_MAX
    check(same(m::LDBL_MAX, header::value_LDBL_MAX), "LDBL_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_EPSILON
    check(same(m::FLT_EPSILON, header::value_FLT_EPSILON), "FLT_EPSILON");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_EPSILON
    check(same(m::DBL_EPSILON, header::value_DBL_EPSILON), "DBL_EPSILON");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_EPSILON
    check(same(m::LDBL_EPSILON, header::value_LDBL_EPSILON), "LDBL_EPSILON");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_MIN
    check(same(m::FLT_MIN, header::value_FLT_MIN), "FLT_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_MIN
    check(same(m::DBL_MIN, header::value_DBL_MIN), "DBL_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_MIN
    check(same(m::LDBL_MIN, header::value_LDBL_MIN), "LDBL_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_FLT_TRUE_MIN
    check(same(m::FLT_TRUE_MIN, header::value_FLT_TRUE_MIN), "FLT_TRUE_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_DBL_TRUE_MIN
    check(same(m::DBL_TRUE_MIN, header::value_DBL_TRUE_MIN), "DBL_TRUE_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_LDBL_TRUE_MIN
    check(same(m::LDBL_TRUE_MIN, header::value_LDBL_TRUE_MIN), "LDBL_TRUE_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_PRId8
    check(same(m::PRId8, header::value_PRId8), "PRId8");
#endif
#ifdef MWRAP_LIBC_HAS_PRId16
    check(same(m::PRId16, header::value_PRId16), "PRId16");
#endif
#ifdef MWRAP_LIBC_HAS_PRId32
    check(same(m::PRId32, header::value_PRId32), "PRId32");
#endif
#ifdef MWRAP_LIBC_HAS_PRId64
    check(same(m::PRId64, header::value_PRId64), "PRId64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdLEAST8
    check(same(m::PRIdLEAST8, header::value_PRIdLEAST8), "PRIdLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdLEAST16
    check(same(m::PRIdLEAST16, header::value_PRIdLEAST16), "PRIdLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdLEAST32
    check(same(m::PRIdLEAST32, header::value_PRIdLEAST32), "PRIdLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdLEAST64
    check(same(m::PRIdLEAST64, header::value_PRIdLEAST64), "PRIdLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdFAST8
    check(same(m::PRIdFAST8, header::value_PRIdFAST8), "PRIdFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdFAST16
    check(same(m::PRIdFAST16, header::value_PRIdFAST16), "PRIdFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdFAST32
    check(same(m::PRIdFAST32, header::value_PRIdFAST32), "PRIdFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdFAST64
    check(same(m::PRIdFAST64, header::value_PRIdFAST64), "PRIdFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdMAX
    check(same(m::PRIdMAX, header::value_PRIdMAX), "PRIdMAX");
#endif
#ifdef MWRAP_LIBC_HAS_PRIdPTR
    check(same(m::PRIdPTR, header::value_PRIdPTR), "PRIdPTR");
#endif
#ifdef MWRAP_LIBC_HAS_PRIi8
    check(same(m::PRIi8, header::value_PRIi8), "PRIi8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIi16
    check(same(m::PRIi16, header::value_PRIi16), "PRIi16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIi32
    check(same(m::PRIi32, header::value_PRIi32), "PRIi32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIi64
    check(same(m::PRIi64, header::value_PRIi64), "PRIi64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiLEAST8
    check(same(m::PRIiLEAST8, header::value_PRIiLEAST8), "PRIiLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiLEAST16
    check(same(m::PRIiLEAST16, header::value_PRIiLEAST16), "PRIiLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiLEAST32
    check(same(m::PRIiLEAST32, header::value_PRIiLEAST32), "PRIiLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiLEAST64
    check(same(m::PRIiLEAST64, header::value_PRIiLEAST64), "PRIiLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiFAST8
    check(same(m::PRIiFAST8, header::value_PRIiFAST8), "PRIiFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiFAST16
    check(same(m::PRIiFAST16, header::value_PRIiFAST16), "PRIiFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiFAST32
    check(same(m::PRIiFAST32, header::value_PRIiFAST32), "PRIiFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiFAST64
    check(same(m::PRIiFAST64, header::value_PRIiFAST64), "PRIiFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiMAX
    check(same(m::PRIiMAX, header::value_PRIiMAX), "PRIiMAX");
#endif
#ifdef MWRAP_LIBC_HAS_PRIiPTR
    check(same(m::PRIiPTR, header::value_PRIiPTR), "PRIiPTR");
#endif
#ifdef MWRAP_LIBC_HAS_PRIo8
    check(same(m::PRIo8, header::value_PRIo8), "PRIo8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIo16
    check(same(m::PRIo16, header::value_PRIo16), "PRIo16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIo32
    check(same(m::PRIo32, header::value_PRIo32), "PRIo32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIo64
    check(same(m::PRIo64, header::value_PRIo64), "PRIo64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoLEAST8
    check(same(m::PRIoLEAST8, header::value_PRIoLEAST8), "PRIoLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoLEAST16
    check(same(m::PRIoLEAST16, header::value_PRIoLEAST16), "PRIoLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoLEAST32
    check(same(m::PRIoLEAST32, header::value_PRIoLEAST32), "PRIoLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoLEAST64
    check(same(m::PRIoLEAST64, header::value_PRIoLEAST64), "PRIoLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoFAST8
    check(same(m::PRIoFAST8, header::value_PRIoFAST8), "PRIoFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoFAST16
    check(same(m::PRIoFAST16, header::value_PRIoFAST16), "PRIoFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoFAST32
    check(same(m::PRIoFAST32, header::value_PRIoFAST32), "PRIoFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoFAST64
    check(same(m::PRIoFAST64, header::value_PRIoFAST64), "PRIoFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoMAX
    check(same(m::PRIoMAX, header::value_PRIoMAX), "PRIoMAX");
#endif
#ifdef MWRAP_LIBC_HAS_PRIoPTR
    check(same(m::PRIoPTR, header::value_PRIoPTR), "PRIoPTR");
#endif
#ifdef MWRAP_LIBC_HAS_PRIu8
    check(same(m::PRIu8, header::value_PRIu8), "PRIu8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIu16
    check(same(m::PRIu16, header::value_PRIu16), "PRIu16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIu32
    check(same(m::PRIu32, header::value_PRIu32), "PRIu32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIu64
    check(same(m::PRIu64, header::value_PRIu64), "PRIu64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuLEAST8
    check(same(m::PRIuLEAST8, header::value_PRIuLEAST8), "PRIuLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuLEAST16
    check(same(m::PRIuLEAST16, header::value_PRIuLEAST16), "PRIuLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuLEAST32
    check(same(m::PRIuLEAST32, header::value_PRIuLEAST32), "PRIuLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuLEAST64
    check(same(m::PRIuLEAST64, header::value_PRIuLEAST64), "PRIuLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuFAST8
    check(same(m::PRIuFAST8, header::value_PRIuFAST8), "PRIuFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuFAST16
    check(same(m::PRIuFAST16, header::value_PRIuFAST16), "PRIuFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuFAST32
    check(same(m::PRIuFAST32, header::value_PRIuFAST32), "PRIuFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuFAST64
    check(same(m::PRIuFAST64, header::value_PRIuFAST64), "PRIuFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuMAX
    check(same(m::PRIuMAX, header::value_PRIuMAX), "PRIuMAX");
#endif
#ifdef MWRAP_LIBC_HAS_PRIuPTR
    check(same(m::PRIuPTR, header::value_PRIuPTR), "PRIuPTR");
#endif
#ifdef MWRAP_LIBC_HAS_PRIx8
    check(same(m::PRIx8, header::value_PRIx8), "PRIx8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIx16
    check(same(m::PRIx16, header::value_PRIx16), "PRIx16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIx32
    check(same(m::PRIx32, header::value_PRIx32), "PRIx32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIx64
    check(same(m::PRIx64, header::value_PRIx64), "PRIx64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxLEAST8
    check(same(m::PRIxLEAST8, header::value_PRIxLEAST8), "PRIxLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxLEAST16
    check(same(m::PRIxLEAST16, header::value_PRIxLEAST16), "PRIxLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxLEAST32
    check(same(m::PRIxLEAST32, header::value_PRIxLEAST32), "PRIxLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxLEAST64
    check(same(m::PRIxLEAST64, header::value_PRIxLEAST64), "PRIxLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxFAST8
    check(same(m::PRIxFAST8, header::value_PRIxFAST8), "PRIxFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxFAST16
    check(same(m::PRIxFAST16, header::value_PRIxFAST16), "PRIxFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxFAST32
    check(same(m::PRIxFAST32, header::value_PRIxFAST32), "PRIxFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxFAST64
    check(same(m::PRIxFAST64, header::value_PRIxFAST64), "PRIxFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxMAX
    check(same(m::PRIxMAX, header::value_PRIxMAX), "PRIxMAX");
#endif
#ifdef MWRAP_LIBC_HAS_PRIxPTR
    check(same(m::PRIxPTR, header::value_PRIxPTR), "PRIxPTR");
#endif
#ifdef MWRAP_LIBC_HAS_PRIX8
    check(same(m::PRIX8, header::value_PRIX8), "PRIX8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIX16
    check(same(m::PRIX16, header::value_PRIX16), "PRIX16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIX32
    check(same(m::PRIX32, header::value_PRIX32), "PRIX32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIX64
    check(same(m::PRIX64, header::value_PRIX64), "PRIX64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXLEAST8
    check(same(m::PRIXLEAST8, header::value_PRIXLEAST8), "PRIXLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXLEAST16
    check(same(m::PRIXLEAST16, header::value_PRIXLEAST16), "PRIXLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXLEAST32
    check(same(m::PRIXLEAST32, header::value_PRIXLEAST32), "PRIXLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXLEAST64
    check(same(m::PRIXLEAST64, header::value_PRIXLEAST64), "PRIXLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXFAST8
    check(same(m::PRIXFAST8, header::value_PRIXFAST8), "PRIXFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXFAST16
    check(same(m::PRIXFAST16, header::value_PRIXFAST16), "PRIXFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXFAST32
    check(same(m::PRIXFAST32, header::value_PRIXFAST32), "PRIXFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXFAST64
    check(same(m::PRIXFAST64, header::value_PRIXFAST64), "PRIXFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXMAX
    check(same(m::PRIXMAX, header::value_PRIXMAX), "PRIXMAX");
#endif
#ifdef MWRAP_LIBC_HAS_PRIXPTR
    check(same(m::PRIXPTR, header::value_PRIXPTR), "PRIXPTR");
#endif
#ifdef MWRAP_LIBC_HAS_SCNd8
    check(same(m::SCNd8, header::value_SCNd8), "SCNd8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNd16
    check(same(m::SCNd16, header::value_SCNd16), "SCNd16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNd32
    check(same(m::SCNd32, header::value_SCNd32), "SCNd32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNd64
    check(same(m::SCNd64, header::value_SCNd64), "SCNd64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdLEAST8
    check(same(m::SCNdLEAST8, header::value_SCNdLEAST8), "SCNdLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdLEAST16
    check(same(m::SCNdLEAST16, header::value_SCNdLEAST16), "SCNdLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdLEAST32
    check(same(m::SCNdLEAST32, header::value_SCNdLEAST32), "SCNdLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdLEAST64
    check(same(m::SCNdLEAST64, header::value_SCNdLEAST64), "SCNdLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdFAST8
    check(same(m::SCNdFAST8, header::value_SCNdFAST8), "SCNdFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdFAST16
    check(same(m::SCNdFAST16, header::value_SCNdFAST16), "SCNdFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdFAST32
    check(same(m::SCNdFAST32, header::value_SCNdFAST32), "SCNdFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdFAST64
    check(same(m::SCNdFAST64, header::value_SCNdFAST64), "SCNdFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdMAX
    check(same(m::SCNdMAX, header::value_SCNdMAX), "SCNdMAX");
#endif
#ifdef MWRAP_LIBC_HAS_SCNdPTR
    check(same(m::SCNdPTR, header::value_SCNdPTR), "SCNdPTR");
#endif
#ifdef MWRAP_LIBC_HAS_SCNi8
    check(same(m::SCNi8, header::value_SCNi8), "SCNi8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNi16
    check(same(m::SCNi16, header::value_SCNi16), "SCNi16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNi32
    check(same(m::SCNi32, header::value_SCNi32), "SCNi32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNi64
    check(same(m::SCNi64, header::value_SCNi64), "SCNi64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiLEAST8
    check(same(m::SCNiLEAST8, header::value_SCNiLEAST8), "SCNiLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiLEAST16
    check(same(m::SCNiLEAST16, header::value_SCNiLEAST16), "SCNiLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiLEAST32
    check(same(m::SCNiLEAST32, header::value_SCNiLEAST32), "SCNiLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiLEAST64
    check(same(m::SCNiLEAST64, header::value_SCNiLEAST64), "SCNiLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiFAST8
    check(same(m::SCNiFAST8, header::value_SCNiFAST8), "SCNiFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiFAST16
    check(same(m::SCNiFAST16, header::value_SCNiFAST16), "SCNiFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiFAST32
    check(same(m::SCNiFAST32, header::value_SCNiFAST32), "SCNiFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiFAST64
    check(same(m::SCNiFAST64, header::value_SCNiFAST64), "SCNiFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiMAX
    check(same(m::SCNiMAX, header::value_SCNiMAX), "SCNiMAX");
#endif
#ifdef MWRAP_LIBC_HAS_SCNiPTR
    check(same(m::SCNiPTR, header::value_SCNiPTR), "SCNiPTR");
#endif
#ifdef MWRAP_LIBC_HAS_SCNo8
    check(same(m::SCNo8, header::value_SCNo8), "SCNo8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNo16
    check(same(m::SCNo16, header::value_SCNo16), "SCNo16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNo32
    check(same(m::SCNo32, header::value_SCNo32), "SCNo32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNo64
    check(same(m::SCNo64, header::value_SCNo64), "SCNo64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoLEAST8
    check(same(m::SCNoLEAST8, header::value_SCNoLEAST8), "SCNoLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoLEAST16
    check(same(m::SCNoLEAST16, header::value_SCNoLEAST16), "SCNoLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoLEAST32
    check(same(m::SCNoLEAST32, header::value_SCNoLEAST32), "SCNoLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoLEAST64
    check(same(m::SCNoLEAST64, header::value_SCNoLEAST64), "SCNoLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoFAST8
    check(same(m::SCNoFAST8, header::value_SCNoFAST8), "SCNoFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoFAST16
    check(same(m::SCNoFAST16, header::value_SCNoFAST16), "SCNoFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoFAST32
    check(same(m::SCNoFAST32, header::value_SCNoFAST32), "SCNoFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoFAST64
    check(same(m::SCNoFAST64, header::value_SCNoFAST64), "SCNoFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoMAX
    check(same(m::SCNoMAX, header::value_SCNoMAX), "SCNoMAX");
#endif
#ifdef MWRAP_LIBC_HAS_SCNoPTR
    check(same(m::SCNoPTR, header::value_SCNoPTR), "SCNoPTR");
#endif
#ifdef MWRAP_LIBC_HAS_SCNu8
    check(same(m::SCNu8, header::value_SCNu8), "SCNu8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNu16
    check(same(m::SCNu16, header::value_SCNu16), "SCNu16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNu32
    check(same(m::SCNu32, header::value_SCNu32), "SCNu32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNu64
    check(same(m::SCNu64, header::value_SCNu64), "SCNu64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuLEAST8
    check(same(m::SCNuLEAST8, header::value_SCNuLEAST8), "SCNuLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuLEAST16
    check(same(m::SCNuLEAST16, header::value_SCNuLEAST16), "SCNuLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuLEAST32
    check(same(m::SCNuLEAST32, header::value_SCNuLEAST32), "SCNuLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuLEAST64
    check(same(m::SCNuLEAST64, header::value_SCNuLEAST64), "SCNuLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuFAST8
    check(same(m::SCNuFAST8, header::value_SCNuFAST8), "SCNuFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuFAST16
    check(same(m::SCNuFAST16, header::value_SCNuFAST16), "SCNuFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuFAST32
    check(same(m::SCNuFAST32, header::value_SCNuFAST32), "SCNuFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuFAST64
    check(same(m::SCNuFAST64, header::value_SCNuFAST64), "SCNuFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuMAX
    check(same(m::SCNuMAX, header::value_SCNuMAX), "SCNuMAX");
#endif
#ifdef MWRAP_LIBC_HAS_SCNuPTR
    check(same(m::SCNuPTR, header::value_SCNuPTR), "SCNuPTR");
#endif
#ifdef MWRAP_LIBC_HAS_SCNx8
    check(same(m::SCNx8, header::value_SCNx8), "SCNx8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNx16
    check(same(m::SCNx16, header::value_SCNx16), "SCNx16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNx32
    check(same(m::SCNx32, header::value_SCNx32), "SCNx32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNx64
    check(same(m::SCNx64, header::value_SCNx64), "SCNx64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxLEAST8
    check(same(m::SCNxLEAST8, header::value_SCNxLEAST8), "SCNxLEAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxLEAST16
    check(same(m::SCNxLEAST16, header::value_SCNxLEAST16), "SCNxLEAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxLEAST32
    check(same(m::SCNxLEAST32, header::value_SCNxLEAST32), "SCNxLEAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxLEAST64
    check(same(m::SCNxLEAST64, header::value_SCNxLEAST64), "SCNxLEAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxFAST8
    check(same(m::SCNxFAST8, header::value_SCNxFAST8), "SCNxFAST8");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxFAST16
    check(same(m::SCNxFAST16, header::value_SCNxFAST16), "SCNxFAST16");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxFAST32
    check(same(m::SCNxFAST32, header::value_SCNxFAST32), "SCNxFAST32");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxFAST64
    check(same(m::SCNxFAST64, header::value_SCNxFAST64), "SCNxFAST64");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxMAX
    check(same(m::SCNxMAX, header::value_SCNxMAX), "SCNxMAX");
#endif
#ifdef MWRAP_LIBC_HAS_SCNxPTR
    check(same(m::SCNxPTR, header::value_SCNxPTR), "SCNxPTR");
#endif
#ifdef MWRAP_LIBC_HAS_CHAR_BIT
    check(same(m::CHAR_BIT, header::value_CHAR_BIT), "CHAR_BIT");
#endif
#ifdef MWRAP_LIBC_HAS_SCHAR_MIN
    check(same(m::SCHAR_MIN, header::value_SCHAR_MIN), "SCHAR_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_SCHAR_MAX
    check(same(m::SCHAR_MAX, header::value_SCHAR_MAX), "SCHAR_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UCHAR_MAX
    check(same(m::UCHAR_MAX, header::value_UCHAR_MAX), "UCHAR_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_CHAR_MIN
    check(same(m::CHAR_MIN, header::value_CHAR_MIN), "CHAR_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_CHAR_MAX
    check(same(m::CHAR_MAX, header::value_CHAR_MAX), "CHAR_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_MB_LEN_MAX
    check(same(m::MB_LEN_MAX, header::value_MB_LEN_MAX), "MB_LEN_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_SHRT_MIN
    check(same(m::SHRT_MIN, header::value_SHRT_MIN), "SHRT_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_SHRT_MAX
    check(same(m::SHRT_MAX, header::value_SHRT_MAX), "SHRT_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_USHRT_MAX
    check(same(m::USHRT_MAX, header::value_USHRT_MAX), "USHRT_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_MIN
    check(same(m::INT_MIN, header::value_INT_MIN), "INT_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_MAX
    check(same(m::INT_MAX, header::value_INT_MAX), "INT_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_MAX
    check(same(m::UINT_MAX, header::value_UINT_MAX), "UINT_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_LONG_MIN
    check(same(m::LONG_MIN, header::value_LONG_MIN), "LONG_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_LONG_MAX
    check(same(m::LONG_MAX, header::value_LONG_MAX), "LONG_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_ULONG_MAX
    check(same(m::ULONG_MAX, header::value_ULONG_MAX), "ULONG_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_LLONG_MIN
    check(same(m::LLONG_MIN, header::value_LLONG_MIN), "LLONG_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_LLONG_MAX
    check(same(m::LLONG_MAX, header::value_LLONG_MAX), "LLONG_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_ULLONG_MAX
    check(same(m::ULLONG_MAX, header::value_ULLONG_MAX), "ULLONG_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_LC_ALL
    check(same(m::LC_ALL, header::value_LC_ALL), "LC_ALL");
#endif
#ifdef MWRAP_LIBC_HAS_LC_COLLATE
    check(same(m::LC_COLLATE, header::value_LC_COLLATE), "LC_COLLATE");
#endif
#ifdef MWRAP_LIBC_HAS_LC_CTYPE
    check(same(m::LC_CTYPE, header::value_LC_CTYPE), "LC_CTYPE");
#endif
#ifdef MWRAP_LIBC_HAS_LC_MONETARY
    check(same(m::LC_MONETARY, header::value_LC_MONETARY), "LC_MONETARY");
#endif
#ifdef MWRAP_LIBC_HAS_LC_NUMERIC
    check(same(m::LC_NUMERIC, header::value_LC_NUMERIC), "LC_NUMERIC");
#endif
#ifdef MWRAP_LIBC_HAS_LC_TIME
    check(same(m::LC_TIME, header::value_LC_TIME), "LC_TIME");
#endif
#ifdef MWRAP_LIBC_HAS_HUGE_VAL
    check(same_result([]() -> decltype(auto) { return m::HUGE_VAL(); }, header::get_HUGE_VAL), "HUGE_VAL");
#endif
#ifdef MWRAP_LIBC_HAS_HUGE_VALF
    check(same_result([]() -> decltype(auto) { return m::HUGE_VALF(); }, header::get_HUGE_VALF), "HUGE_VALF");
#endif
#ifdef MWRAP_LIBC_HAS_HUGE_VALL
    check(same_result([]() -> decltype(auto) { return m::HUGE_VALL(); }, header::get_HUGE_VALL), "HUGE_VALL");
#endif
#ifdef MWRAP_LIBC_HAS_INFINITY
    check(same_result([]() -> decltype(auto) { return m::INFINITY(); }, header::get_INFINITY), "INFINITY");
#endif
#ifdef MWRAP_LIBC_HAS_NAN
    check(same_result([]() -> decltype(auto) { return m::NAN(); }, header::get_NAN), "NAN");
#endif
#ifdef MWRAP_LIBC_HAS_FP_INFINITE
    check(same(m::FP_INFINITE, header::value_FP_INFINITE), "FP_INFINITE");
#endif
#ifdef MWRAP_LIBC_HAS_FP_NAN
    check(same(m::FP_NAN, header::value_FP_NAN), "FP_NAN");
#endif
#ifdef MWRAP_LIBC_HAS_FP_NORMAL
    check(same(m::FP_NORMAL, header::value_FP_NORMAL), "FP_NORMAL");
#endif
#ifdef MWRAP_LIBC_HAS_FP_SUBNORMAL
    check(same(m::FP_SUBNORMAL, header::value_FP_SUBNORMAL), "FP_SUBNORMAL");
#endif
#ifdef MWRAP_LIBC_HAS_FP_ZERO
    check(same(m::FP_ZERO, header::value_FP_ZERO), "FP_ZERO");
#endif
#ifdef MWRAP_LIBC_HAS_FP_FAST_FMA
    check(same_result([]() -> decltype(auto) { return m::FP_FAST_FMA(); }, header::get_FP_FAST_FMA), "FP_FAST_FMA");
#endif
#ifdef MWRAP_LIBC_HAS_FP_FAST_FMAF
    check(same_result([]() -> decltype(auto) { return m::FP_FAST_FMAF(); }, header::get_FP_FAST_FMAF), "FP_FAST_FMAF");
#endif
#ifdef MWRAP_LIBC_HAS_FP_FAST_FMAL
    check(same_result([]() -> decltype(auto) { return m::FP_FAST_FMAL(); }, header::get_FP_FAST_FMAL), "FP_FAST_FMAL");
#endif
#ifdef MWRAP_LIBC_HAS_FP_ILOGB0
    check(same(m::FP_ILOGB0, header::value_FP_ILOGB0), "FP_ILOGB0");
#endif
#ifdef MWRAP_LIBC_HAS_FP_ILOGBNAN
    check(same(m::FP_ILOGBNAN, header::value_FP_ILOGBNAN), "FP_ILOGBNAN");
#endif
#ifdef MWRAP_LIBC_HAS_MATH_ERRNO
    check(same(m::MATH_ERRNO, header::value_MATH_ERRNO), "MATH_ERRNO");
#endif
#ifdef MWRAP_LIBC_HAS_MATH_ERREXCEPT
    check(same(m::MATH_ERREXCEPT, header::value_MATH_ERREXCEPT), "MATH_ERREXCEPT");
#endif
#ifdef MWRAP_LIBC_HAS_math_errhandling
    check(same_result([]() -> decltype(auto) { return m::math_errhandling(); }, header::get_math_errhandling), "math_errhandling");
#endif
#ifdef MWRAP_LIBC_HAS_SIG_DFL
    check(same(m::SIG_DFL, header::value_SIG_DFL), "SIG_DFL");
#endif
#ifdef MWRAP_LIBC_HAS_SIG_ERR
    check(same_result([]() -> decltype(auto) { return m::SIG_ERR(); }, header::get_SIG_ERR), "SIG_ERR");
#endif
#ifdef MWRAP_LIBC_HAS_SIG_IGN
    check(same_result([]() -> decltype(auto) { return m::SIG_IGN(); }, header::get_SIG_IGN), "SIG_IGN");
#endif
#ifdef MWRAP_LIBC_HAS_SIGABRT
    check(same(m::SIGABRT, header::value_SIGABRT), "SIGABRT");
#endif
#ifdef MWRAP_LIBC_HAS_SIGFPE
    check(same(m::SIGFPE, header::value_SIGFPE), "SIGFPE");
#endif
#ifdef MWRAP_LIBC_HAS_SIGILL
    check(same(m::SIGILL, header::value_SIGILL), "SIGILL");
#endif
#ifdef MWRAP_LIBC_HAS_SIGINT
    check(same(m::SIGINT, header::value_SIGINT), "SIGINT");
#endif
#ifdef MWRAP_LIBC_HAS_SIGSEGV
    check(same(m::SIGSEGV, header::value_SIGSEGV), "SIGSEGV");
#endif
#ifdef MWRAP_LIBC_HAS_SIGTERM
    check(same(m::SIGTERM, header::value_SIGTERM), "SIGTERM");
#endif
#ifdef MWRAP_LIBC_HAS_INT8_MIN
    check(same(m::INT8_MIN, header::value_INT8_MIN), "INT8_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT8_MAX
    check(same(m::INT8_MAX, header::value_INT8_MAX), "INT8_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT8_MAX
    check(same(m::UINT8_MAX, header::value_UINT8_MAX), "UINT8_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_LEAST8_MIN
    check(same(m::INT_LEAST8_MIN, header::value_INT_LEAST8_MIN), "INT_LEAST8_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_LEAST8_MAX
    check(same(m::INT_LEAST8_MAX, header::value_INT_LEAST8_MAX), "INT_LEAST8_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_LEAST8_MAX
    check(same(m::UINT_LEAST8_MAX, header::value_UINT_LEAST8_MAX), "UINT_LEAST8_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_FAST8_MIN
    check(same(m::INT_FAST8_MIN, header::value_INT_FAST8_MIN), "INT_FAST8_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_FAST8_MAX
    check(same(m::INT_FAST8_MAX, header::value_INT_FAST8_MAX), "INT_FAST8_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_FAST8_MAX
    check(same(m::UINT_FAST8_MAX, header::value_UINT_FAST8_MAX), "UINT_FAST8_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT16_MIN
    check(same(m::INT16_MIN, header::value_INT16_MIN), "INT16_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT16_MAX
    check(same(m::INT16_MAX, header::value_INT16_MAX), "INT16_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT16_MAX
    check(same(m::UINT16_MAX, header::value_UINT16_MAX), "UINT16_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_LEAST16_MIN
    check(same(m::INT_LEAST16_MIN, header::value_INT_LEAST16_MIN), "INT_LEAST16_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_LEAST16_MAX
    check(same(m::INT_LEAST16_MAX, header::value_INT_LEAST16_MAX), "INT_LEAST16_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_LEAST16_MAX
    check(same(m::UINT_LEAST16_MAX, header::value_UINT_LEAST16_MAX), "UINT_LEAST16_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_FAST16_MIN
    check(same(m::INT_FAST16_MIN, header::value_INT_FAST16_MIN), "INT_FAST16_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_FAST16_MAX
    check(same(m::INT_FAST16_MAX, header::value_INT_FAST16_MAX), "INT_FAST16_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_FAST16_MAX
    check(same(m::UINT_FAST16_MAX, header::value_UINT_FAST16_MAX), "UINT_FAST16_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT32_MIN
    check(same(m::INT32_MIN, header::value_INT32_MIN), "INT32_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT32_MAX
    check(same(m::INT32_MAX, header::value_INT32_MAX), "INT32_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT32_MAX
    check(same(m::UINT32_MAX, header::value_UINT32_MAX), "UINT32_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_LEAST32_MIN
    check(same(m::INT_LEAST32_MIN, header::value_INT_LEAST32_MIN), "INT_LEAST32_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_LEAST32_MAX
    check(same(m::INT_LEAST32_MAX, header::value_INT_LEAST32_MAX), "INT_LEAST32_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_LEAST32_MAX
    check(same(m::UINT_LEAST32_MAX, header::value_UINT_LEAST32_MAX), "UINT_LEAST32_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_FAST32_MIN
    check(same(m::INT_FAST32_MIN, header::value_INT_FAST32_MIN), "INT_FAST32_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_FAST32_MAX
    check(same(m::INT_FAST32_MAX, header::value_INT_FAST32_MAX), "INT_FAST32_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_FAST32_MAX
    check(same(m::UINT_FAST32_MAX, header::value_UINT_FAST32_MAX), "UINT_FAST32_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT64_MIN
    check(same(m::INT64_MIN, header::value_INT64_MIN), "INT64_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT64_MAX
    check(same(m::INT64_MAX, header::value_INT64_MAX), "INT64_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT64_MAX
    check(same(m::UINT64_MAX, header::value_UINT64_MAX), "UINT64_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_LEAST64_MIN
    check(same(m::INT_LEAST64_MIN, header::value_INT_LEAST64_MIN), "INT_LEAST64_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_LEAST64_MAX
    check(same(m::INT_LEAST64_MAX, header::value_INT_LEAST64_MAX), "INT_LEAST64_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_LEAST64_MAX
    check(same(m::UINT_LEAST64_MAX, header::value_UINT_LEAST64_MAX), "UINT_LEAST64_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INT_FAST64_MIN
    check(same(m::INT_FAST64_MIN, header::value_INT_FAST64_MIN), "INT_FAST64_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INT_FAST64_MAX
    check(same(m::INT_FAST64_MAX, header::value_INT_FAST64_MAX), "INT_FAST64_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINT_FAST64_MAX
    check(same(m::UINT_FAST64_MAX, header::value_UINT_FAST64_MAX), "UINT_FAST64_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INTPTR_MIN
    check(same(m::INTPTR_MIN, header::value_INTPTR_MIN), "INTPTR_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INTPTR_MAX
    check(same(m::INTPTR_MAX, header::value_INTPTR_MAX), "INTPTR_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINTPTR_MAX
    check(same(m::UINTPTR_MAX, header::value_UINTPTR_MAX), "UINTPTR_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_INTMAX_MIN
    check(same(m::INTMAX_MIN, header::value_INTMAX_MIN), "INTMAX_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_INTMAX_MAX
    check(same(m::INTMAX_MAX, header::value_INTMAX_MAX), "INTMAX_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_UINTMAX_MAX
    check(same(m::UINTMAX_MAX, header::value_UINTMAX_MAX), "UINTMAX_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_PTRDIFF_MIN
    check(same(m::PTRDIFF_MIN, header::value_PTRDIFF_MIN), "PTRDIFF_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_PTRDIFF_MAX
    check(same(m::PTRDIFF_MAX, header::value_PTRDIFF_MAX), "PTRDIFF_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_SIG_ATOMIC_MIN
    check(same(m::SIG_ATOMIC_MIN, header::value_SIG_ATOMIC_MIN), "SIG_ATOMIC_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_SIG_ATOMIC_MAX
    check(same(m::SIG_ATOMIC_MAX, header::value_SIG_ATOMIC_MAX), "SIG_ATOMIC_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_SIZE_MAX
    check(same(m::SIZE_MAX, header::value_SIZE_MAX), "SIZE_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_WCHAR_MIN
    check(same(m::WCHAR_MIN, header::value_WCHAR_MIN), "WCHAR_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_WCHAR_MAX
    check(same(m::WCHAR_MAX, header::value_WCHAR_MAX), "WCHAR_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_WINT_MIN
    check(same(m::WINT_MIN, header::value_WINT_MIN), "WINT_MIN");
#endif
#ifdef MWRAP_LIBC_HAS_WINT_MAX
    check(same(m::WINT_MAX, header::value_WINT_MAX), "WINT_MAX");
#endif
#ifdef MWRAP_LIBC_HAS__IOFBF
    check(same(m::_IOFBF, header::value__IOFBF), "_IOFBF");
#endif
#ifdef MWRAP_LIBC_HAS__IOLBF
    check(same(m::_IOLBF, header::value__IOLBF), "_IOLBF");
#endif
#ifdef MWRAP_LIBC_HAS__IONBF
    check(same(m::_IONBF, header::value__IONBF), "_IONBF");
#endif
#ifdef MWRAP_LIBC_HAS_BUFSIZ
    check(same(m::BUFSIZ, header::value_BUFSIZ), "BUFSIZ");
#endif
#ifdef MWRAP_LIBC_HAS_EOF
    check(same(m::EOF, header::value_EOF), "EOF");
#endif
#ifdef MWRAP_LIBC_HAS_FOPEN_MAX
    check(same(m::FOPEN_MAX, header::value_FOPEN_MAX), "FOPEN_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_FILENAME_MAX
    check(same(m::FILENAME_MAX, header::value_FILENAME_MAX), "FILENAME_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_L_tmpnam
    check(same(m::L_tmpnam, header::value_L_tmpnam), "L_tmpnam");
#endif
#ifdef MWRAP_LIBC_HAS_SEEK_CUR
    check(same(m::SEEK_CUR, header::value_SEEK_CUR), "SEEK_CUR");
#endif
#ifdef MWRAP_LIBC_HAS_SEEK_END
    check(same(m::SEEK_END, header::value_SEEK_END), "SEEK_END");
#endif
#ifdef MWRAP_LIBC_HAS_SEEK_SET
    check(same(m::SEEK_SET, header::value_SEEK_SET), "SEEK_SET");
#endif
#ifdef MWRAP_LIBC_HAS_TMP_MAX
    check(same(m::TMP_MAX, header::value_TMP_MAX), "TMP_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_stderr
    check(same_result([]() -> decltype(auto) { return m::stderr(); }, header::get_stderr), "stderr");
#endif
#ifdef MWRAP_LIBC_HAS_stdin
    check(same_result([]() -> decltype(auto) { return m::stdin(); }, header::get_stdin), "stdin");
#endif
#ifdef MWRAP_LIBC_HAS_stdout
    check(same_result([]() -> decltype(auto) { return m::stdout(); }, header::get_stdout), "stdout");
#endif
#ifdef MWRAP_LIBC_HAS_EXIT_FAILURE
    check(same(m::EXIT_FAILURE, header::value_EXIT_FAILURE), "EXIT_FAILURE");
#endif
#ifdef MWRAP_LIBC_HAS_EXIT_SUCCESS
    check(same(m::EXIT_SUCCESS, header::value_EXIT_SUCCESS), "EXIT_SUCCESS");
#endif
#ifdef MWRAP_LIBC_HAS_RAND_MAX
    check(same(m::RAND_MAX, header::value_RAND_MAX), "RAND_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_MB_CUR_MAX
    check(same_result([]() -> decltype(auto) { return m::MB_CUR_MAX(); }, header::get_MB_CUR_MAX), "MB_CUR_MAX");
#endif
#ifdef MWRAP_LIBC_HAS_CLOCKS_PER_SEC
    check(same(m::CLOCKS_PER_SEC, header::value_CLOCKS_PER_SEC), "CLOCKS_PER_SEC");
#endif
#ifdef MWRAP_LIBC_HAS_TIME_UTC
    check(same(m::TIME_UTC, header::value_TIME_UTC), "TIME_UTC");
#endif
#ifdef MWRAP_LIBC_HAS_WEOF
    check(same(m::WEOF, header::value_WEOF), "WEOF");
#endif
    std::println("{} macros mapped here, {} differ", mapped, differ);
    return differ != 0;
}
