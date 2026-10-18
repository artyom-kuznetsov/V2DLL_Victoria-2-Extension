// FUN_0066a7f0 @ 0066a7f0 body=[[0066a7f0, 0066aa25] [0066aa29, 0066aa64] [0066aa68, 0066ab35] [0066ab39, 0066abd0] [0066abd4, 0066ac0f] [0066ac13, 0066ac37] [0066ac3b, 0066ad56] [0066ad5a, 0066ad89] [0066ad8d, 0066adb1] [0066adb5, 0066add0] [0066add4, 0066adef] [0066adf3, 0066ae05] [0066ae09, 0066ae1f]]


void FUN_0066a7f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint in_ECX;
  char *pcVar7;
  undefined4 uStack_ec;
  undefined4 local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  uint auStack_cc [3];
  undefined4 uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_94;
  uint local_90;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_5c;
  undefined4 uStack_4c;
  uint uStack_48;
  char acStack_3c [32];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbc05f;
  pvStack_14 = ExceptionList;
  local_e8 = CONCAT22(*(undefined2 *)(in_ECX + 0x1d7e),0x15e);
  ExceptionList = &pvStack_14;
  local_90 = in_ECX;
  (**(code **)(**(int **)(in_ECX + 0x1638) + 0x48))(local_e8);
  iVar2 = FUN_00aae9af();
  puStack_10 = (undefined1 *)0x0;
  if (iVar2 == 0) {
    uStack_ec = 0;
  }
  else {
    uStack_ec = FUN_00798a50(iVar2,param_1,0,*(undefined4 *)(in_ECX + 0x1e20));
  }
  puStack_10 = (undefined1 *)0xffffffff;
  iVar2 = *(int *)(in_ECX + 0xda4);
  puVar3 = (undefined4 *)FUN_00aae9af();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = uStack_ec;
    puVar3[1] = iVar2;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar4 = *(int *)(in_ECX + 0xda8);
  *(undefined4 **)(in_ECX + 0xda4) = puVar3;
  *(int *)(in_ECX + 0xda8) = iVar4 + 1;
  if (iVar4 == 0) {
    *(undefined4 **)(in_ECX + 0xda0) = puVar3;
  }
  else {
    *(undefined4 **)(iVar2 + 8) = puVar3;
  }
  cVar1 = FUN_00651d90();
  if (cVar1 == '\0') {
    FUN_0066a750();
  }
  if (*(int *)(in_ECX + 0xda8) == 2) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x1648) + 0x18) + 0x34))();
    (**(code **)(**(int **)(in_ECX + 0x164c) + 0x38))();
  }
  if (*(int *)(in_ECX + 0xda8) == 1) {
    *(undefined4 *)(*(int *)(in_ECX + 0x1640) + 8) = param_1;
    FUN_00793510();
  }
  if (*(char *)(*(int *)(in_ECX + 0x163c) + 0xc) != '\0') {
    FUN_00795740();
  }
  if (*(int *)(in_ECX + 0xda8) == 1) {
    (**(code **)(**(int **)(**(int **)(in_ECX + 0xda0) + 0x20) + 0x2c))();
  }
  iVar2 = *(int *)(in_ECX + 0xda8);
  uStack_7c = 0xf;
  uStack_80 = 0;
  local_90 = local_90 & 0xffffff00;
  puStack_10 = (undefined1 *)0x1;
  cVar1 = (**(code **)(**(int **)(**(int **)(in_ECX + 0xda0) + 0x28) + 0x38))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)(**(int **)(in_ECX + 0xda0) + 0x28) + 0x3c))();
    uStack_b8 = 0xf;
    uStack_bc = 0;
    auStack_cc[0] = auStack_cc[0] & 0xffffff00;
    if (cVar1 == '\0') {
      FUN_00409350("AIRWINGS",8);
      puStack_10._0_1_ = 10;
      FUN_009a8ee0(&local_e8,auStack_cc);
      puStack_10._0_1_ = 0xb;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      puStack_10._0_1_ = 0xc;
      FUN_00408ed0();
      if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_9c = 0xf;
      uStack_a0 = 0;
      uStack_b0 = uStack_b0 & 0xffffff00;
      puStack_10._0_1_ = 0xd;
      FUN_009adb70();
      if (iStack_e4 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto joined_r0x0066ac2c;
    }
    FUN_00409350("NAVIES",6);
    puStack_10._0_1_ = 6;
    FUN_009a8ee0(&local_e8,auStack_cc);
    puStack_10._0_1_ = 7;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    puStack_10._0_1_ = 8;
    FUN_00408ed0();
    if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 9;
  }
  else {
    uStack_b8 = 0xf;
    uStack_bc = 0;
    auStack_cc[0] = auStack_cc[0] & 0xffffff00;
    FUN_00409350("ARMIES",6);
    puStack_10._0_1_ = 2;
    FUN_009a8ee0(&local_e8,auStack_cc);
    puStack_10._0_1_ = 3;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    puStack_10._0_1_ = 4;
    FUN_00408ed0();
    if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 5;
  }
  uStack_b0 = uStack_b0 & 0xffffff00;
  uStack_9c = 0xf;
  uStack_a0 = 0;
  FUN_009adb70();
  if (iStack_e4 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
joined_r0x0066ac2c:
  if (0xf < uStack_b8) {
    puStack_10._0_1_ = 1;
    uStack_dc = 0;
    uStack_e0 = 0;
    iStack_e4 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 1;
  uStack_dc = 0;
  uStack_e0 = 0;
  iStack_e4 = 0;
  uStack_9c = 0xf;
  uStack_a0 = 0;
  uStack_b0 = uStack_b0 & 0xffffff00;
  FUN_00409350(&DAT_00dfac10,4);
  puStack_10._0_1_ = 0xe;
  uStack_b8 = 0xf;
  uStack_bc = 0;
  auStack_cc[0] = auStack_cc[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded950,1);
  uStack_d4 = 0xf;
  uStack_d8 = 0;
  local_e8 = local_e8 & 0xffffff00;
  puStack_10._0_1_ = 0x10;
  pcVar5 = __itoa(iVar2,acStack_3c,10);
  pcVar7 = pcVar5;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
  puStack_10._0_1_ = 0x11;
  FUN_00988f20();
  puStack_10._0_1_ = 0x12;
  uVar6 = FUN_00988f20();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x13);
  (**(code **)(**(int **)(iStack_94 + 0x1648) + 0x3c))();
  FUN_00408ed0(uVar6,0,0xffffffff);
  FUN_00a5ecc0();
  if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_5c);
  }
  uStack_48 = 0xf;
  uStack_4c = 0;
  uStack_5c = uStack_5c & 0xffffff00;
  if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_78);
  }
  uStack_64 = 0xf;
  uStack_68 = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  if (uStack_d8 < 0x10) {
    uStack_d8 = 0xf;
    uStack_dc = 0;
    if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_d0);
    }
    uStack_bc = 0xf;
    uStack_c0 = 0;
    uStack_d0 = uStack_d0 & 0xffffff00;
    if (uStack_a0 < 0x10) {
      if (uStack_80 < 0x10) {
        ExceptionList = pvStack_1c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_94);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_b4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar2);
}

