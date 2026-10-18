// FUN_0040b0a0 @ 0040b0a0 body=[[0040b0a0, 0040b105]]


void FUN_0040b0a0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x1e24);
  piVar2 = (int *)(*(int *)(in_ECX + 0x40) * 0x10 + *(int *)(iVar1 + 0x350));
  if (*(int *)(in_ECX + 0x44) < piVar2[1] - *piVar2 >> 2) {
    FUN_00412580(iVar1);
    FUN_004123a0(iVar1);
    if (*(int *)(iVar1 + 0x34c) == 0) {
      FUN_0040d870();
      FUN_0040f740();
      FUN_0040f4d0();
      return;
    }
  }
  return;
}

