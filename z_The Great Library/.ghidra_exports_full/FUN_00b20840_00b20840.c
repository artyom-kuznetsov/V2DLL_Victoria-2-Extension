// PHYSFS_setAllocator @ 00b20840 body=[[00b20840, 00b208a2]]


undefined4 PHYSFS_setAllocator(undefined4 *param_1)

{
                    /* 0x720840  50  PHYSFS_setAllocator */
  if (DAT_00f20a78 != 0) {
    FUN_00b1f840("Already initialized");
    return 0;
  }
  DAT_00f20aa4 = (uint)(param_1 != (undefined4 *)0x0);
  if ((param_1 != (undefined4 *)0x0) != 0) {
    DAT_013f3aa0 = *param_1;
    DAT_013f3aa4 = param_1[1];
    DAT_013f3aa8 = param_1[2];
    DAT_013f3aac = param_1[3];
    DAT_013f3ab0 = param_1[4];
  }
  return 1;
}

