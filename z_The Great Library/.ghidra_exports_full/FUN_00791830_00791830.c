// FUN_00791830 @ 00791830 body=[[00791830, 00791a27]]


undefined4 FUN_00791830(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  int iStack_44;
  int local_40;
  int iStack_3c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4b57b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar1 = FUN_005e5800();
  if ((char)uVar1 == '\0') {
    ExceptionList = local_14;
    return uVar1;
  }
  local_40 = 0;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  iStack_3c = 0;
  if (0 < (in_ECX[0xb] - in_ECX[10]) / 0x2c) {
    iStack_44 = 0;
    iVar5 = DAT_01258a94;
    do {
      piVar6 = (int *)(in_ECX[10] + iStack_44);
      if ((uint)piVar6[1] < 0x1269) {
        if (DAT_01258a98 != 0) goto LAB_007918e5;
LAB_007918f7:
        iVar3 = 0;
      }
      else {
        if (iVar5 == 0) goto LAB_007918f7;
LAB_007918e5:
        iVar3 = FUN_009c1d40();
        if (iVar3 == 0) goto LAB_007918f7;
        iVar3 = iVar3 + -8;
      }
      *piVar6 = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_00aae9af(0x98);
        iVar5 = 0;
        uStack_c = 0;
        if (iVar3 == 0) {
          uVar1 = 0;
        }
        else {
          iVar4 = DAT_01258a94;
          if ((uint)piVar6[1] < 0x1269) {
            iVar4 = DAT_01258a98;
          }
          if ((iVar4 != 0) && (iVar4 = FUN_009c1d40(), iVar4 != 0)) {
            iVar5 = iVar4 + -8;
          }
          iVar4 = DAT_01258a94;
          *piVar6 = iVar5;
          if ((uint)in_ECX[1] < 0x1269) {
            iVar4 = DAT_01258a98;
          }
          if ((iVar4 == 0) || (iVar4 = FUN_009c1d40(), iVar4 == 0)) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + -8;
          }
          *in_ECX = iVar4;
          uVar1 = FUN_005e3a60(iVar3,iVar4,piVar6[10],iVar5);
        }
        uStack_c = 0xffffffff;
        (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar1);
        local_40 = local_40 + 1;
        iVar5 = DAT_01258a94;
      }
      iStack_44 = iStack_44 + 0x2c;
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < (in_ECX[0xb] - in_ECX[10]) / 0x2c);
  }
  iVar2 = (in_ECX[0xb] - in_ECX[10]) / 0x2c;
  ExceptionList = local_14;
  return CONCAT31((int3)((uint)iVar2 >> 8),local_40 == iVar2);
}

