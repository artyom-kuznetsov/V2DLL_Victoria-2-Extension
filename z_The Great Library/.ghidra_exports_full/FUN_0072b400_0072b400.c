// FUN_0072b400 @ 0072b400 body=[[0072b400, 0072b4c9]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072b400(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  
  iVar3 = DAT_012588e8;
  *(undefined4 *)(DAT_012588e8 + 0xbb0) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(iVar3 + 0xbb4) = *(undefined4 *)(in_ECX + 0x44);
  iVar2 = DAT_01258a98;
  iVar1 = DAT_01258a94;
  iVar3 = DAT_01258a98;
  if (0x1268 < DAT_00f0d870) {
    iVar3 = DAT_01258a94;
  }
  if ((iVar3 != 0) && (iVar3 = FUN_009c1d40(), iVar3 != 0)) {
    if (DAT_00f0d870 < 0x1269) {
      if (iVar2 != 0) {
        piVar4 = (int *)FUN_009c1d40();
        (**(code **)(*piVar4 + 0x34))();
        return;
      }
    }
    else if (iVar1 != 0) {
      piVar4 = (int *)FUN_009c1d40();
      (**(code **)(*piVar4 + 0x34))();
      return;
    }
    (**(code **)(_DAT_00000000 + 0x34))();
  }
  return;
}

