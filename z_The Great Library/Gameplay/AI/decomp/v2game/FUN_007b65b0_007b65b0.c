// FUN_007b65b0 @ 007b65b0 body=[[007b65b0, 007b6745] [007b6749, 007b676a] [007b676e, 007b67a3] [007b67a7, 007b67c3] [007b67c7, 007b67eb] [007b67ef, 007b6808] [007b680c, 007b6890]]


void FUN_007b65b0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_1b8 [52];
  undefined4 uStack_184;
  undefined1 *puStack_180;
  undefined1 auStack_17c [156];
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined1 *local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b7a1db;
  local_10 = ExceptionList;
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_d4 = 0x14c007b65ec;
    ExceptionList = &local_10;
    local_14 = FUN_00aae9af();
    local_8 = 1;
    if (local_14 == 0) {
      iVar2 = 0;
    }
    else {
      local_d4 = CONCAT44(*(undefined4 *)(*(int *)(param_1 + 8) + 0x70),(undefined4)local_d4);
      local_18 = auStack_17c;
      puStack_180 = auStack_17c;
      uStack_184 = 0x7b6615;
      FUN_007b47e0();
      local_68 = auStack_1b8;
      local_8 = 2;
      FUN_007b4ff0();
      local_8 = 1;
      iVar2 = FUN_007b8f10(local_14);
    }
    local_8 = 0;
    uVar1 = local_8;
    local_8 = 0;
    *(int *)(param_1 + 0xc) = iVar2;
    if (*(int *)(iVar2 + 0x104) != 0) {
      local_d4 = 0x800e1849c;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      local_dc = CONCAT44(0x7b6668,(undefined4)local_dc);
      FUN_00409350();
      local_8 = 3;
      local_d4 = 0xc00e18438;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      local_dc = CONCAT44(0x7b6684,(undefined4)local_dc);
      FUN_00409350();
      local_8 = 4;
      piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x20);
      local_d4 = CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x104),local_bc);
      local_dc = CONCAT44(0x7b66a7,(undefined4)local_dc);
      local_18 = (undefined1 *)FUN_007b1800();
      local_d4 = CONCAT44(local_64,local_2c);
      local_8 = 5;
      local_dc = CONCAT44(0x7b66be,(undefined4)local_dc);
      local_14 = FUN_009a8ee0();
      local_8 = 6;
      local_d4 = CONCAT44(0x7b66ca,(undefined4)local_d4);
      iVar2 = FUN_00475500();
      local_dc = *(undefined8 *)(iVar2 + 0x6c);
      local_d4 = *(undefined8 *)(iVar2 + 0x74);
      uStack_e0 = 0x7b66f0;
      FUN_009a9880();
      local_8 = 7;
      local_d4 = CONCAT44(local_18,0x7b6702);
      uVar3 = FUN_00988f20();
      local_8 = 8;
      local_d4 = CONCAT44(local_48,0x7b6715);
      (**(code **)(*piVar4 + 0x3c))();
      local_d4 = 0xffffffff00000000;
      local_dc = CONCAT44(uVar3,0x7b6726);
      FUN_00408ed0();
      local_d4 = (ulonglong)uVar3;
      local_dc = CONCAT44(0x7b6733,(undefined4)local_dc);
      FUN_00a5ecc0();
      if (0xf < local_70) {
        local_d4 = CONCAT44(local_84,&UNK_007b6746);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84 = local_84 & 0xffffff00;
      if (0xf < local_8c) {
        local_d4 = CONCAT44(local_a0,&UNK_007b676b);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
      local_8 = 9;
      local_d4 = CONCAT44(0x7b678c,(undefined4)local_d4);
      FUN_009adb70();
      if (local_28 != 0) {
        local_d4 = CONCAT44(0x7b679b,(undefined4)local_d4);
        FUN_009e6a80();
        local_d4 = CONCAT44(local_28,&UNK_007b67a4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      if (0xf < local_a8) {
        local_d4 = CONCAT44(local_bc[0],&UNK_007b67c4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      if (0xf < local_34) {
        local_d4 = CONCAT44(local_48[0],&UNK_007b67ec);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      if (0xf < local_50) {
        local_d4 = CONCAT44(local_64[0],&UNK_007b6809);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
        local_d4 = 0x1007b6827;
        (**(code **)**(undefined4 **)(param_1 + 0xc))();
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      uVar1 = local_8;
    }
    local_8 = uVar1;
    if (DAT_00f20c18 == (int *)0x0) {
      local_d4 = 0x4007b683d;
      DAT_00f20c18 = (int *)FUN_00aae9af();
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    local_d4 = CONCAT44(0x7b685d,(undefined4)local_d4);
    piVar4 = (int *)(**(code **)(*DAT_00f20c18 + 0x38))();
    local_d4._4_4_ = *(undefined4 *)(param_1 + 0xc);
    *(int **)(param_1 + 0x10) = piVar4;
    local_d4._0_4_ = 0x7b686d;
    (**(code **)(*piVar4 + 4))();
    local_d4 = CONCAT44(local_d4._4_4_,0x7b6876);
    (**(code **)**(undefined4 **)(param_1 + 0x10))();
  }
  local_d4 = CONCAT44(0x7b687e,(undefined4)local_d4);
  FUN_007b46e0();
  ExceptionList = local_10;
  return;
}

