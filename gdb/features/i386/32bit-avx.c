/* THIS FILE IS GENERATED.  -*- buffer-read-only: t -*- vi:set ro:
  Original: 32bit-avx.xml.tmp */

#ifdef GDBSERVER
#include "tdesc.h"
#else
#include "defs.h"
#include "osabi.h"
#include "target-descriptions.h"
#endif

static int
create_feature_i386_32bit_avx (struct target_desc *result, long regnum)
{
  struct tdesc_feature *feature;

  feature = tdesc_create_feature (result, "org.gnu.gdb.i386.avx", "32bit-avx.xml");
  tdesc_create_reg (feature, "ymm0h", regnum++, 1, NULL, 128, "uint128");
  tdesc_create_reg (feature, "ymm1h", regnum++, 1, NULL, 128, "uint128");
  tdesc_create_reg (feature, "ymm2h", regnum++, 1, NULL, 128, "uint128");
  tdesc_create_reg (feature, "ymm3h", regnum++, 1, NULL, 128, "uint128");
  tdesc_create_reg (feature, "ymm4h", regnum++, 1, NULL, 128, "uint128");
  tdesc_create_reg (feature, "ymm5h", regnum++, 1, NULL, 128, "uint128");
  tdesc_create_reg (feature, "ymm6h", regnum++, 1, NULL, 128, "uint128");
  tdesc_create_reg (feature, "ymm7h", regnum++, 1, NULL, 128, "uint128");
  return regnum;
}