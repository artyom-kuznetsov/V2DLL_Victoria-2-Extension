// FUN_004cece0 @ 004cece0 body=[[004cece0, 004ced8d] [004ced90, 004ceeb3] [004ceeb7, 004ceed2] [004ceed6, 004ceef4] [004ceef8, 004cef20] [004cef24, 004cf023] [004cf027, 004cf04e] [004cf052, 004cf07c] [004cf080, 004cf0c0] [004cf0c4, 004cf0e4] [004cf0e8, 004cf10e] [004cf112, 004cf14a] [004cf14e, 004cf166]]


undefined1 * FUN_004cece0(undefined1 *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  int *local_e8;
  uint auStack_dc [4];
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a4;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b823f7;
  local_14 = ExceptionList;
  if ((*(int *)(in_ECX + 0x4c) - (int)*(int **)(in_ECX + 0x48) & 0xfffffffcU) == 0) {
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350("NULL_STATE",10);
  }
  else {
    iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + **(int **)(in_ECX + 0x48) * 4);
    piVar7 = (int *)(DAT_012588e8 + 0xacc);
    if (*(int *)(iVar6 + 0x164) == 0) {
      local_e8 = (int *)0x0;
    }
    else {
      local_e8 = (int *)**(undefined4 **)(iVar6 + 0x15c);
    }
    bVar3 = false;
    bVar4 = false;
    ExceptionList = &local_14;
    for (piVar1 = (int *)local_e8[2]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar6 = *(int *)(*piVar7 + *piVar1 * 4);
      if (*(int *)(iVar6 + 300) == *(int *)(in_ECX + 0x5c)) {
        cVar5 = (**(code **)(**(int **)(iVar6 + 0x188) + 0x24))();
        if (((cVar5 != '\0') && (*(int *)(iVar6 + 0x188) != in_ECX)) &&
           (bVar2 = 0 < *(int *)(in_ECX + 0x84),
           0 < *(int *)(*(int *)(iVar6 + 0x188) + 0x84) != bVar2)) {
          bVar4 = bVar2;
        }
      }
      else {
        bVar3 = true;
      }
    }
    (**(code **)(*local_e8 + 0x1c))();
    uStack_c._0_1_ = 0;
    uStack_c._1_3_ = 0;
    if (bVar3) {
      uStack_c8 = 0xf;
      uStack_cc = 0;
      auStack_dc[0] = auStack_dc[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded950,1);
      uStack_c._0_1_ = 1;
      FUN_0055dd70();
      uStack_c._0_1_ = 2;
      FUN_00988f20();
      uStack_c._0_1_ = 3;
      FUN_00988f20();
      uStack_c._0_1_ = 4;
      FUN_00408ed0();
      if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_90 = 0xf;
      uStack_94 = 0;
      uStack_a4 = uStack_a4 & 0xffffff00;
      if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_ac = 0xf;
      uStack_b0 = 0;
      uStack_c0 = uStack_c0 & 0xffffff00;
      if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c._0_1_ = 0;
      uStack_74 = 0xf;
      uStack_78 = 0;
      uStack_88 = uStack_88 & 0xffffff00;
      if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    uStack_c._0_1_ = 0;
    if (bVar4) {
      uStack_90 = 0xf;
      uStack_94 = 0;
      uStack_a4 = uStack_a4 & 0xffffff00;
      FUN_00409350(&DAT_00ded950,1);
      uStack_c._0_1_ = 5;
      uStack_c8 = 0xf;
      uStack_cc = 0;
      auStack_dc[0] = auStack_dc[0] & 0xffffff00;
      FUN_00409350("colonial_b",10);
      uStack_c._0_1_ = 6;
      FUN_009a8ee0(&uStack_c0,auStack_dc);
      uStack_c._0_1_ = 7;
      iVar6 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
      uStack_c._0_1_ = 8;
      FUN_00988f20();
      uStack_c._0_1_ = 9;
      FUN_00988f20();
      uStack_c._0_1_ = 10;
      FUN_00408ed0();
      if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_74 = 0xf;
      uStack_78 = 0;
      uStack_88 = uStack_88 & 0xffffff00;
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      uStack_50 = uStack_50 & 0xffffff00;
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      uStack_c._0_1_ = 0xb;
      FUN_009adb70();
      if (iStack_bc != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iStack_bc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c._0_1_ = 0;
      uStack_c8 = 0xf;
      uStack_cc = 0;
      auStack_dc[0] = auStack_dc[0] & 0xffffff00;
      if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    uStack_c._0_1_ = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

