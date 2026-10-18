// FUN_005dd6e0 @ 005dd6e0 body=[[005dd6e0, 005dd917] [005dd91b, 005dd937] [005dd93b, 005dd957] [005dd95b, 005dd9a7]]


void FUN_005dd6e0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int local_78;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar2 = DAT_01258a98;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9eb18;
  pvStack_14 = ExceptionList;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    ExceptionList = &pvStack_14;
    if (DAT_01258a98 != 0) goto LAB_005dd977;
LAB_005dd730:
    iVar5 = 0;
  }
  else {
    ExceptionList = &pvStack_14;
    if (DAT_01258a94 == 0) goto LAB_005dd730;
LAB_005dd977:
    ExceptionList = &pvStack_14;
    iVar5 = FUN_009c1d40();
    if (iVar5 == 0) goto LAB_005dd730;
    iVar5 = iVar5 + -8;
  }
  *(int *)(in_ECX + 0x3c) = iVar5;
  if (*(uint *)(in_ECX + 0x68) < 0x1269) {
    if (iVar2 == 0) goto LAB_005dd75c;
LAB_005dd99a:
    piVar4 = (int *)FUN_009c1d40();
  }
  else {
    if (DAT_01258a94 != 0) goto LAB_005dd99a;
LAB_005dd75c:
    piVar4 = (int *)0x0;
  }
  *(int **)(in_ECX + 100) = piVar4;
  piVar1 = *(int **)(iVar5 + 0xd8);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_005b6140();
  }
  local_78 = piVar4[0x22];
  if (local_78 != 0) {
    FUN_005b6140();
    FUN_005cbcc0();
  }
  FUN_005cbcc0();
  if (*(int *)(iVar5 + 0xc4) != *(int *)(DAT_012588e8 + 0xb60)) goto LAB_005dd862;
  if ((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x20))(), cVar3 != '\0')) {
    cVar3 = (**(code **)(*piVar4 + 0x20))();
    if (cVar3 != '\0') {
      local_78 = piVar4[2];
      cVar3 = FUN_005dcd20();
      if (cVar3 == '\0') goto LAB_005dd84a;
    }
    FUN_005b6750();
    if (0 < local_78) {
      FUN_005341a0();
    }
  }
LAB_005dd84a:
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
LAB_005dd862:
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350();
    uStack_c = 0;
    uStack_3c = 0xf;
    uStack_40 = 0;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    FUN_00409350();
    uStack_c._0_1_ = 1;
    uStack_58 = 0xf;
    uStack_5c = 0;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    FUN_00409350();
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(auStack_6c,auStack_50);
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_14;
  return;
}

