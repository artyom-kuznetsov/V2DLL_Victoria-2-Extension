// PHYSFS_swapSBE16 @ 00b2aa70 body=[[00b2aa70, 00b2aa82]]


uint PHYSFS_swapSBE16(ushort param_1)

{
                    /* 0x72aa70  55  PHYSFS_swapSBE16
                       0x72aa70  61  PHYSFS_swapUBE16 */
  return (uint)(param_1 >> 8) | (uint)param_1 << 8;
}

