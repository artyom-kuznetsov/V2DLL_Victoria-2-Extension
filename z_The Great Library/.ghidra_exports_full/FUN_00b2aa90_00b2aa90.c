// PHYSFS_swapSBE32 @ 00b2aa90 body=[[00b2aa90, 00b2aaba]]


uint PHYSFS_swapSBE32(uint param_1)

{
                    /* 0x72aa90  56  PHYSFS_swapSBE32
                       0x72aa90  62  PHYSFS_swapUBE32 */
  return (param_1 & 0xff00 | param_1 << 0x10) << 8 | (param_1 & 0xff0000 | param_1 >> 0x10) >> 8;
}

