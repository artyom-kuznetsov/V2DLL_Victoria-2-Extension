// FUN_0072bb50 @ 0072bb50 body=[[0072bb50, 0072bbc6] [0072bbca, 0072bceb] [0072bcef, 0072bdd2] [0072bdd6, 0072bdea]]


void FUN_0072bb50(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined4 local_c0;
  uint local_ac;
  undefined4 local_88;
  uint uStack_74;
  undefined4 local_50;
  uint uStack_3c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4be3b;
  local_14 = ExceptionList;
  if (*(char *)(in_ECX + 0x5c) == '\0') {
    ExceptionList = &local_14;
    iVar2 = FUN_0041a100(*(undefined4 *)(in_ECX + 0x58));
    iVar1 = DAT_012588e8;
    iVar5 = *(int *)(DAT_012588e8 + 0x18);
    if (iVar5 != 0) {
      do {
        if (*(int *)(iVar5 + 0x1c) == *(int *)(iVar2 + 0x1c)) break;
        iVar5 = *(int *)(iVar5 + 0x3c);
      } while (iVar5 != 0);
    }
    FUN_0068efc0(iVar5);
    *(undefined1 *)(iVar1 + 0x60) = 1;
    iVar1 = DAT_01258a98;
    iVar5 = DAT_01258a94;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c0);
    }
    iVar2 = DAT_01258a98;
    if (0x1268 < DAT_00f0d870) {
      iVar2 = DAT_01258a94;
    }
    if (iVar2 == 0) {
      ExceptionList = local_14;
      return;
    }
    iVar2 = FUN_009c1d40();
    if (iVar2 == 0) {
      ExceptionList = local_14;
      return;
    }
    if (DAT_00f0d870 < 0x1269) {
      if (iVar1 == 0) goto LAB_0072bd91;
      piVar3 = (int *)FUN_009c1d40();
    }
    else if (iVar5 == 0) {
LAB_0072bd91:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_009c1d40();
    }
    uVar4 = FUN_0041a100(*(undefined4 *)(in_ECX + 0x58));
    local_c = 2;
    (**(code **)(*piVar3 + 0x28))(uVar4);
    goto joined_r0x0072bdc4;
  }
  ExceptionList = &local_14;
  FUN_0041a100(*(undefined4 *)(in_ECX + 0x58));
  local_c = 0;
  FUN_0068b470(DAT_012588e8);
  iVar1 = DAT_01258a98;
  iVar5 = DAT_01258a94;
  local_c = 0xffffffff;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0);
  }
  iVar2 = DAT_01258a98;
  if (0x1268 < DAT_00f0d870) {
    iVar2 = DAT_01258a94;
  }
  if (iVar2 == 0) {
    ExceptionList = local_14;
    return;
  }
  iVar2 = FUN_009c1d40();
  if (iVar2 == 0) {
    ExceptionList = local_14;
    return;
  }
  if (DAT_00f0d870 < 0x1269) {
    if (iVar1 == 0) goto LAB_0072bc68;
    piVar3 = (int *)FUN_009c1d40();
  }
  else if (iVar5 == 0) {
LAB_0072bc68:
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_009c1d40();
  }
  uVar4 = FUN_0041a100(*(undefined4 *)(in_ECX + 0x58));
  local_c = 1;
  (**(code **)(*piVar3 + 0x24))(uVar4);
  local_50 = local_88;
  uStack_3c = uStack_74;
joined_r0x0072bdc4:
  if (uStack_3c < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50);
}

