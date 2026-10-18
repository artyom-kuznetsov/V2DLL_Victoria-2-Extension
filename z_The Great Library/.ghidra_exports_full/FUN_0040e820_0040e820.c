// FUN_0040e820 @ 0040e820 body=[[0040e820, 0040e86a] [0040e86e, 0040e8a7]]


void FUN_0040e820(int param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 local_20;
  uint local_c;
  
  if ((in_EAX != 0) && (*(char *)(in_EAX + 0x1f0) == '\0')) {
    puVar1 = (undefined4 *)FUN_004063b0(*(undefined4 *)(param_1 + 0x390));
    if (0xf < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    PHYSFS_delete(puVar1);
    if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_20);
    }
    FUN_00412940(param_1);
    *(undefined4 *)(param_1 + 0x34c) = 2;
    FUN_0040d870();
    FUN_0040f040(param_1);
    FUN_0040f740();
    FUN_0040f4d0();
  }
  return;
}

