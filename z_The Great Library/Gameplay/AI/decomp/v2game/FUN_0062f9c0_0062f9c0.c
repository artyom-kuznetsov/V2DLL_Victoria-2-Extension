// FUN_0062f9c0 @ 0062f9c0 body=[[0062f9c0, 0062fa79] [0062fa7d, 0062faea] [0062faf0, 0062fbb9] [0062fbbd, 0062fc35] [0062fc39, 0062fc68]]


int FUN_0062f9c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45722;
  local_10 = ExceptionList;
  local_14 = 0;
  if (*(int *)(param_1 + 0xec) == 0) {
    ExceptionList = &local_10;
    local_1c = FUN_00aae9af(0x28);
    local_8 = 0;
    if (local_1c == 0) {
      local_1c = 0;
    }
    else {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("diplomacy_puppet",0x10);
      local_8 = CONCAT31(local_8._1_3_,1);
      puVar6 = local_50;
      local_14 = 1;
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))(puVar6);
      local_1c = FUN_009b1df0(local_1c,puVar6);
    }
    local_8 = 0xffffffff;
    if ((local_14 & 1) != 0) {
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
    }
    piVar4 = *(int **)(local_1c + 0x20);
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    FUN_00409350("country_flag",0xc);
    local_8 = 3;
    iVar1 = (**(code **)(*piVar4 + 0x34))(local_88);
    (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0xf4);
    local_8 = 0xffffffff;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88[0]);
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00816010();
    piVar4 = (int *)FUN_00705450();
    if ((int *)*piVar4 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)*piVar4;
    }
    uVar2 = (uint)piVar4[2] >> 2;
    if (*(uint *)(iVar1 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar1 + 8);
    }
    local_1c = *(int *)(*(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) + (piVar4[2] & 3U) * 4);
    if ((*(int *)(param_1 + 0xec) != 0) &&
       (iVar1 = *(int *)(param_1 + 0xec) + -1, *(int *)(param_1 + 0xec) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    piVar4 = *(int **)(local_1c + 0x20);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  local_8 = 4;
  piVar3 = (int *)(**(code **)(*piVar4 + 0x34))(local_88);
  (**(code **)(*piVar3 + 0xd4))(param_2[1]);
  local_8 = 0xffffffff;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  local_8 = 5;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x34))(local_6c);
  piVar4 = (int *)(**(code **)(*piVar4 + 0xec))();
  local_18 = *param_2;
  iVar1 = *piVar4;
  uVar5 = FUN_0052fc10();
  (**(code **)(iVar1 + 0x150))(uVar5);
  iVar1 = local_1c;
  local_8 = 0xffffffff;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  (**(code **)(*(int *)(local_1c + 0x1c) + 0x28))();
  ExceptionList = local_10;
  return iVar1;
}

