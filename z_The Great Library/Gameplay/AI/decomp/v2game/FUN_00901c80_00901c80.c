// FUN_00901c80 @ 00901c80 body=[[00901c80, 00901d57] [00901d60, 00901dae] [00901db4, 00901e1f] [00901e23, 00901e71] [00901e75, 00901e94] [00901e98, 00901ead]]


undefined4 FUN_00901c80(undefined4 param_1,int param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined4 local_50 [5];
  uint uStack_3c;
  undefined4 auStack_34 [5];
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b85280;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009c9e20(local_50,*(undefined4 *)(in_ECX + 0x1c),0);
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  cVar1 = (**(code **)(**(int **)(param_2 + 0x14) + 0x20))();
  if (cVar1 == '\0') {
    if (*(int *)(param_2 + 0x10) != 0) {
      uVar2 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4)
                          + 0x1c))(auStack_34);
      local_c._0_1_ = 3;
      FUN_00408ed0(uVar2,0,0xffffffff);
      local_c._0_1_ = 1;
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_34[0]);
      }
      goto LAB_00901de6;
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      if (*(int *)(param_2 + 0xc) != 0) {
        uVar2 = FUN_0055dd40();
        local_c._0_1_ = 5;
        FUN_00408ed0(uVar2,0,0xffffffff);
        local_c._0_1_ = 1;
        FUN_00408ad0();
      }
      goto LAB_00901de6;
    }
    uVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                            *(int *)(param_2 + 0x18) * 4) + 0x188) + 0x20))
                      (auStack_34);
    local_c._0_1_ = 4;
  }
  else {
    uVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(param_2 + 0x14) + 100) + 0x188) + 0x20))
                      (auStack_34);
    local_c._0_1_ = 2;
  }
  FUN_00408ed0(uVar2,0,0xffffffff);
  local_c._0_1_ = 1;
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_34[0]);
  }
LAB_00901de6:
  if (param_3 == '\0') {
    FUN_0043ec10(param_1,&DAT_00df7e90,local_50,"WHERE",local_6c);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  else {
    FUN_0043ec10(param_1,&DAT_00df7e90,local_50,"WHERE",local_6c);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  if (uStack_3c < 0x10) {
    ExceptionList = pvStack_14;
    return param_1;
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

