// FUN_0071a6f0 @ 0071a6f0 body=[[0071a6f0, 0071a845] [0071a849, 0071a863] [0071a867, 0071a952] [0071a956, 0071a970] [0071a974, 0071a98e] [0071a992, 0071a9a6]]


undefined1 * FUN_0071a6f0(undefined1 *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *local_98;
  uint local_94;
  undefined4 local_80 [5];
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b6dbc9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  local_94 = 0x71a755;
  uVar7 = FUN_00b31c36();
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  if ((*(int *)(in_ECX + 0x34) < iVar5) ||
     ((*(int *)(in_ECX + 0x34) <= iVar5 && (*(uint *)(in_ECX + 0x30) <= (uint)uVar7)))) {
    if (iVar5 < *(int *)(in_ECX + 0x34)) {
      ExceptionList = local_10;
      return param_1;
    }
    if ((iVar5 <= *(int *)(in_ECX + 0x34)) && ((uint)uVar7 <= *(uint *)(in_ECX + 0x30))) {
      ExceptionList = local_10;
      return param_1;
    }
    iVar5 = *(int *)(DAT_012588e8 + 0xbcc);
    uVar6 = (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x6c4 + iVar5);
    pcVar2 = *(char **)(*(int *)(iVar5 + 0x704) + uVar6 * 8);
    puVar1 = (undefined4 *)
             (*(int *)(iVar5 + 0x6ac) +
             (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x66c + iVar5) * 8);
    local_98 = (char *)*puVar1;
    local_94 = puVar1[1];
    local_28 = *(undefined4 *)(*(int *)(iVar5 + 0x704) + uVar6 * 8 + 4);
    local_18 = (undefined1 *)&local_98;
    uVar3 = FUN_00988bb0(local_80,2);
    local_18 = (undefined1 *)&local_98;
    local_8 = 4;
    local_94 = local_28;
    local_98 = pcVar2;
    uVar4 = FUN_00988bb0(local_48,2);
    local_98 = "UNITS";
    local_8._0_1_ = 5;
    local_94 = uVar3;
    uVar3 = FUN_0043ec10(local_64,"MONEY",uVar4);
    local_94 = 0xffffffff;
    local_98 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00408ed0(uVar3);
    if (0xf < local_50) {
      local_94 = local_64[0];
                    /* WARNING: Subroutine does not return */
      local_98 = &UNK_0071a953;
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_34) {
      local_94 = local_48[0];
                    /* WARNING: Subroutine does not return */
      local_98 = &UNK_0071a971;
      FUN_00aae91b();
    }
    local_48[0] = local_48[0] & 0xffffff00;
  }
  else {
    iVar5 = *(int *)(DAT_012588e8 + 0xbcc);
    uVar6 = (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x614 + iVar5);
    pcVar2 = *(char **)(*(int *)(iVar5 + 0x654) + uVar6 * 8);
    local_94 = *(undefined4 *)(*(int *)(iVar5 + 0x654) + uVar6 * 8 + 4);
    puVar1 = (undefined4 *)
             (*(int *)(iVar5 + 0x2c8) +
             (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x288 + iVar5) * 8);
    local_98 = pcVar2;
    local_20 = local_94;
    lVar8 = __allmul(*puVar1,puVar1[1]);
    local_2c = (char *)(lVar8 >> 0xf);
    local_18 = (undefined1 *)&local_98;
    local_94 = local_20;
    local_98 = pcVar2;
    uVar3 = FUN_00988bb0(local_80,2);
    local_18 = (undefined1 *)&local_98;
    local_8 = 1;
    local_98 = local_2c;
    local_94 = (int)((ulonglong)(lVar8 >> 0xf) >> 0x20);
    uVar4 = FUN_00988bb0(local_64,2);
    local_98 = "UNITS";
    local_8._0_1_ = 2;
    local_94 = uVar3;
    uVar3 = FUN_0043ec10(local_48,"MONEY",uVar4);
    local_94 = 0xffffffff;
    local_98 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00408ed0(uVar3);
    if (0xf < local_34) {
      local_94 = local_48[0];
                    /* WARNING: Subroutine does not return */
      local_98 = &UNK_0071a846;
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
      local_94 = local_64[0];
                    /* WARNING: Subroutine does not return */
      local_98 = &UNK_0071a864;
      FUN_00aae91b();
    }
    local_64[0] = local_64[0] & 0xffffff00;
  }
  local_34 = 0xf;
  local_38 = 0;
  local_50 = 0xf;
  local_54 = 0;
  if (local_6c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_94 = local_80[0];
                    /* WARNING: Subroutine does not return */
  local_98 = &UNK_0071a98f;
  FUN_00aae91b();
}

