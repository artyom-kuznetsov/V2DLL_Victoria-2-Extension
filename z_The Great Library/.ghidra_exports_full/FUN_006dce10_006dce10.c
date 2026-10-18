// FUN_006dce10 @ 006dce10 body=[[006dce10, 006dced8] [006dcee0, 006dd05c] [006dd060, 006dd073]]


void FUN_006dce10(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  int local_40;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba0ea9;
  local_14 = ExceptionList;
  puVar2 = (undefined4 *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  pcVar3 = (char *)((int)puVar2 + 0x15);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350((char *)((int)puVar2 + 0x15),(int)pcVar3 - ((int)puVar2 + 0x16));
  local_c = 0;
  iVar4 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar6 = 0;
  for (iVar4 = (iVar4 - (int)((float)(int)((double)iVar4 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar4; iVar4 = iVar4 - (&DAT_00f1027c)[iVar6]) {
    iVar6 = iVar6 + 1;
  }
  FUN_008a8650((int)((float)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / 365.0) + iVar6);
  if (local_40 != 0) {
    local_20 = local_40;
    local_1c = local_40;
  }
  local_58 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_54 = *(undefined4 *)(DAT_012588e8 + 0xb60);
  if (DAT_01319730 == 0) {
    iVar4 = FUN_00aae9af(0x38);
    local_c._0_1_ = 1;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_008750a0(iVar4);
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00876010(uVar5);
  }
  iVar4 = FUN_005c2ad0(local_7c);
  if (iVar4 == 0) {
    if (DAT_01319730 == 0) {
      iVar4 = FUN_00aae9af(0x38);
      local_c._0_1_ = 3;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_008750a0(iVar4);
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00876010(uVar5);
    }
    iVar4 = FUN_005c2ad0(local_7c);
    if (iVar4 == 0) goto LAB_006dd04c;
    FUN_00875040();
  }
  else if (DAT_01319730 == 0) {
    iVar6 = FUN_00aae9af(0x38);
    local_c._0_1_ = 2;
    if (iVar6 == 0) {
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00876010(0);
    }
    else {
      uVar5 = FUN_008750a0(iVar6);
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00876010(uVar5);
    }
  }
  FUN_00874f80(iVar4,local_60);
LAB_006dd04c:
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  ExceptionList = local_14;
  return;
}

