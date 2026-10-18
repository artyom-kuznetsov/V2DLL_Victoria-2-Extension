// FUN_00491030 @ 00491030 body=[[00491030, 0049119e]]


void FUN_00491030(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((*(int *)(in_ECX + 0x54) != 0) && (ExceptionList = &local_14, param_2 == '\0')) {
    ExceptionList = &local_14;
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 0x18;
    *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 0x18;
  }
  if ((DAT_012586d6 != '\0') && (*(int *)(in_ECX + 0x50) == *(int *)(DAT_012588e8 + 0xb60))) {
    *(int *)(in_ECX + 0x3c) = *param_1;
  }
  iVar1 = (*(int *)(in_ECX + 0x38) + -43800000) / 0x18;
  iVar5 = (int)((double)iVar1 / 365.0);
  iVar2 = (*param_1 + -43800000) / 0x18;
  iVar3 = (int)((double)iVar2 / 365.0);
  FUN_00401000((((float)(((((int)((float)iVar3 * -365.0) - (int)((float)iVar5 * -365.0)) +
                          (iVar3 - iVar5) * 0x16d) - iVar1) + iVar2) /
                (float)*(int *)(in_ECX + 0x40)) * 100.0 + 0.0005) * 1000.0);
  uVar4 = FUN_00b31c00();
  *(undefined4 *)(in_ECX + 0x44) = uVar4;
  ExceptionList = local_14;
  return;
}

