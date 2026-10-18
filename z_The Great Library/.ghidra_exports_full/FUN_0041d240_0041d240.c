// FUN_0041d240 @ 0041d240 body=[[0041d240, 0041d2db] [0041d2e0, 0041d425] [0041d429, 0041d447] [0041d44b, 0041d466] [0041d46a, 0041d485] [0041d489, 0041d49b]]


undefined1 * FUN_0041d240(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char local_b4 [32];
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4dacf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_20 = 1;
  local_14 = 0;
  if (DAT_0131bb34 == 0) {
    local_1c = FUN_00aae9af(0x188);
    local_8 = 1;
    if (local_1c == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0041a160();
    }
    local_8 = local_8 & 0xffffff00;
    FUN_00423700(uVar2);
  }
  iVar10 = DAT_0131bb34;
  local_1c = DAT_0131bb34;
  local_18 = 0;
  iVar3 = (**(code **)(*DAT_012588e8 + 0x18))();
  if (0 < iVar3) {
    do {
      iVar11 = 0;
      local_24 = *(int *)(DAT_012588e8[0x2b3] + local_18 * 4);
      iVar8 = 0;
      iVar7 = *(int *)(iVar10 + 0x10) - *(int *)(iVar10 + 0xc) >> 2;
      iVar3 = 1;
      if (1 < iVar7) {
        if (1 < iVar7 + -1) {
          uVar9 = iVar7 - 3U >> 1;
          piVar4 = (int *)(*(int *)(local_24 + 0x194) + 0x28);
          iVar10 = uVar9 + 1;
          iVar3 = uVar9 + 2 + iVar10;
          do {
            iVar11 = iVar11 + piVar4[-4];
            iVar8 = iVar8 + *piVar4;
            piVar4 = piVar4 + 8;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (iVar3 < iVar7) {
          local_14 = local_14 + *(int *)(*(int *)(local_24 + 0x194) + 8 + iVar3 * 0x10);
        }
        local_14 = local_14 + iVar11 + iVar8;
        iVar10 = local_1c;
      }
      iVar7 = local_18 + 1;
      local_18 = iVar7;
      iVar3 = (**(code **)(*DAT_012588e8 + 0x18))();
    } while (iVar7 < iVar3);
  }
  *param_1 = 1;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350(" pops active.",0xd);
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  pcVar5 = __itoa(local_14,local_b4,10);
  pcVar6 = pcVar5;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
  local_8._0_1_ = 4;
  FUN_00988fa0(local_40);
  local_8._0_1_ = 5;
  uVar2 = FUN_00988f20(local_5c);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00408ed0(uVar2,0,0xffffffff);
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94);
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78);
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  if (local_2c < 0x10) {
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (local_48 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_40[0]);
}

