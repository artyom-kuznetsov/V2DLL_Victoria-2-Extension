// FUN_005d8120 @ 005d8120 body=[[005d8120, 005d8199]]


undefined4 FUN_005d8120(void)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  undefined1 local_8 [4];
  
  piVar1 = (int *)(**(code **)(*in_EAX + 0x7c))(local_8);
  if (0 < *piVar1) {
    return 1;
  }
  if (((in_EAX[0x37] != 0) &&
      (0 < *(int *)(*(int *)(*(int *)(in_EAX[0x37] + 0x118) + DAT_01258720 * 4) + 0x20))) &&
     (0 < in_EAX[0x10])) {
    piVar1 = (int *)(**(code **)(*in_EAX + 0x54))(local_8);
    FUN_00401000(0x4454a001);
    iVar2 = FUN_00b31c00();
    if (*piVar1 < iVar2) {
      return 1;
    }
  }
  return 0;
}

