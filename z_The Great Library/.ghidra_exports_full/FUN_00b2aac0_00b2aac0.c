// PHYSFS_swapSBE64 @ 00b2aac0 body=[[00b2aac0, 00b2ab1e]]


undefined8 PHYSFS_swapSBE64(uint param_1,uint param_2)

{
                    /* 0x72aac0  57  PHYSFS_swapSBE64
                       0x72aac0  63  PHYSFS_swapUBE64 */
  return CONCAT44((param_1 & 0xff0000 | param_1 >> 0x10) >> 8 |
                  (param_1 & 0xff00 | param_1 << 0x10) << 8,
                  (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 |
                  (param_2 & 0xff00 | param_2 << 0x10) << 8);
}

