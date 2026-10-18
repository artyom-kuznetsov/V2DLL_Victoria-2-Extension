// FUN_006938f0 @ 006938f0 body=[[006938f0, 00693966] [0069396a, 0069399c] [006939a0, 006939e5] [006939e9, 00693a49] [00693a4d, 00693a66] [00693a6a, 00693ace] [00693ad2, 00693b43] [00693b47, 00693b6b] [00693b6f, 00693b89]]


void FUN_006938f0(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92a8b;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_00409350("provinces",9);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x98) + 0x7c))(local_34);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._1_3_ = 0;
  piVar2 = (int *)*puVar3;
  do {
    if (piVar2 == (int *)0x0) {
      local_8._0_1_ = 1;
joined_r0x00693b7b:
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c);
      }
      ExceptionList = local_10;
      return;
    }
    local_8._0_1_ = 1;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00e09e48,4);
    local_8._0_1_ = 2;
    iVar4 = (**(code **)(**(int **)(*piVar2 + 0x20) + 0x48))(local_50);
    local_11 = param_1 == iVar4;
    local_8._0_1_ = 1;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 1;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if ((bool)local_11) {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      local_8._0_1_ = uVar1;
      FUN_00409350(&DAT_00e09e48,4);
      local_8._0_1_ = 3;
      iVar4 = (**(code **)(**(int **)(*piVar2 + 0x20) + 0x48))(local_34);
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00408ed0(iVar4 + 0x110,0,0xffffffff);
      local_8._0_1_ = 5;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      *(undefined4 *)(local_18 + 0x9c) = *(undefined4 *)(*piVar2 + 0x28);
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      FUN_00409350("goto_edit",9);
      local_8._0_1_ = 6;
      iVar4 = (**(code **)(**(int **)(local_18 + 0x98) + 0x40))(local_88);
      (**(code **)(*(int *)(iVar4 + 0x54) + 0x40))(local_50);
      local_8._0_1_ = 5;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88[0]);
      }
      FUN_006923c0(local_18,1);
      *(undefined4 *)(local_18 + 0x9c) = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      goto joined_r0x00693b7b;
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00e09e48,4);
    local_8._0_1_ = 7;
    iVar4 = (**(code **)(**(int **)(*piVar2 + 0x20) + 0x48))(local_50);
    if ((*(char *)(iVar4 + 0xe4) == '\0') || (*(char *)(iVar4 + 0x142) != '\0')) {
      *(undefined4 *)(iVar4 + 0x6c) = 0;
      *(undefined4 *)(iVar4 + 0x10c) = 0;
    }
    local_8._0_1_ = 1;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

