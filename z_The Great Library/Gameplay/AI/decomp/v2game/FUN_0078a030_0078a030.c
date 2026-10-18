// FUN_0078a030 @ 0078a030 body=[[0078a030, 0078a385] [0078a389, 0078a3a8] [0078a3ac, 0078a3d2] [0078a3d6, 0078a441]]


undefined1 * FUN_0078a030(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int local_d8;
  uint auStack_cc [4];
  undefined4 uStack_bc;
  uint uStack_b8;
  uint auStack_b0 [4];
  undefined4 uStack_a0;
  uint uStack_9c;
  uint auStack_94 [4];
  undefined4 uStack_84;
  uint uStack_80;
  undefined1 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined1 uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b7ac76;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar3 = FUN_00967f50();
  if (iVar3 == 0) {
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
    ExceptionList = local_14;
    return param_1;
  }
  iVar3 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x7c) < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 0x78) = iVar3;
  if (iVar3 == 0) {
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
    ExceptionList = local_14;
    return param_1;
  }
  (**(code **)(*param_2 + 0x44))();
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
    FUN_005bee20(iVar3,param_1);
    ExceptionList = local_14;
    return param_1;
  }
  uStack_64 = 0xf;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_48 = 0xf;
  uStack_4c = 0;
  uStack_5c = 0;
  uStack_2c = 0xf;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_24 = 0;
  uStack_20 = 1;
  uStack_c._0_1_ = 0;
  uStack_c._1_3_ = 0;
  iVar3 = FUN_00967f10();
  iVar3 = *(int *)(iVar3 + 0x30);
  if (iVar3 != 0) {
    uVar4 = (**(code **)(**(int **)(iVar3 + 100) + 0x1c))(auStack_b0);
    uStack_c._0_1_ = 1;
    uVar5 = FUN_0096d650(*(undefined4 *)(iVar3 + 0x68),auStack_94);
    uStack_c._0_1_ = 2;
    uVar4 = FUN_0043ec10(auStack_cc,&DAT_00df7e80,uVar5,&DAT_00df8310,uVar4);
    uStack_c._0_1_ = 3;
    FUN_00448aa0(uVar4,0,0xffffffff);
    FUN_00408ad0();
    FUN_00408ad0();
    uStack_c._0_1_ = 0;
    FUN_00408ad0();
    iVar6 = FUN_00967f50();
    if (iVar6 != 0) {
      uVar4 = FUN_00967f50();
      uVar4 = FUN_0041a080(uVar4);
      uStack_c._0_1_ = 4;
      uVar4 = FUN_0042c180(auStack_94,uVar4);
      uStack_c._0_1_ = 5;
      uVar4 = FUN_00988fa0(uVar4);
      uStack_c._0_1_ = 6;
      FUN_00448aa0(uVar4,0,0xffffffff);
      FUN_00408ad0();
      FUN_00408ad0();
      uStack_c._0_1_ = 0;
      FUN_00408ad0();
    }
    uVar4 = FUN_009652f0(auStack_cc,1);
    uStack_c._0_1_ = 7;
    FUN_00448aa0(uVar4,0,0xffffffff);
    uStack_c._0_1_ = 0;
    FUN_00408ad0();
    iVar6 = *(int *)(iVar3 + 0x3c);
    local_d8 = 0;
    if (0 < (int)(*(int *)(iVar3 + 0x40) - iVar6 & 0xfffffffcU)) {
      do {
        piVar1 = *(int **)(iVar6 + local_d8 * 4);
        uStack_9c = 0xf;
        uStack_a0 = 0;
        auStack_b0[0] = auStack_b0[0] & 0xffffff00;
        FUN_00409350(&DAT_00dee2cc,1);
        uStack_c._0_1_ = 8;
        (**(code **)(*piVar1 + 0x20))(auStack_cc);
        uStack_c._0_1_ = 9;
        uVar4 = FUN_00988f20(auStack_b0);
        uStack_c._0_1_ = 10;
        FUN_00448aa0(uVar4,0,0xffffffff);
        if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_94[0]);
        }
        uStack_80 = 0xf;
        uStack_84 = 0;
        auStack_94[0] = auStack_94[0] & 0xffffff00;
        if (0xf < uStack_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_cc[0]);
        }
        uStack_c._0_1_ = 0;
        uStack_b8 = 0xf;
        uStack_bc = 0;
        auStack_cc[0] = auStack_cc[0] & 0xffffff00;
        if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_b0[0]);
        }
        iVar6 = *(int *)(iVar3 + 0x3c);
        local_d8 = local_d8 + 1;
      } while (local_d8 < *(int *)(iVar3 + 0x40) - iVar6 >> 2);
    }
  }
  FUN_0040c830(param_1);
  FUN_00459820();
  ExceptionList = local_14;
  return param_1;
}

