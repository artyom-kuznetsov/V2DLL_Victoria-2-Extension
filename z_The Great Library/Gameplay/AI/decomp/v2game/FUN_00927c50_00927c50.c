// FUN_00927c50 @ 00927c50 body=[[00927c50, 00927cea] [00927cee, 00927d10] [00927d14, 00927d37] [00927d3b, 00927dc1] [00927dc5, 00927de5] [00927de9, 00927e0c] [00927e10, 00927e3a]]


undefined4 FUN_00927c50(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b845af;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dfc7b4,3);
  local_8 = 1;
  uVar2 = FUN_0094c240();
  local_8._0_1_ = 2;
  FUN_00988fa0(uVar2);
  local_8._0_1_ = 3;
  FUN_00988f20(local_30);
  local_14 = 1;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (*(int *)(in_ECX + 0x34) != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))();
    if (cVar1 != '\0') {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfc988,2);
      local_8 = 4;
      FUN_0094c600(in_ECX + 0x28,local_bc);
      local_8._0_1_ = 5;
      uVar2 = FUN_00988f20(local_4c);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_00448aa0(uVar2,0,0xffffffff);
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_84);
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84 = local_84 & 0xffffff00;
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_bc[0]);
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      ExceptionList = local_10;
      return param_1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}

