// FUN_00767c30 @ 00767c30 body=[[00767c30, 00767d84] [00767d88, 00767db0] [00767db4, 00767dcc] [00767dd0, 00767dec] [00767df0, 00767eda] [00767ede, 00767f0a] [00767f0e, 00767f36] [00767f3a, 00768076]]


void FUN_00767c30(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined1 auStack_390 [80];
  undefined4 uStack_340;
  undefined1 *puStack_33c;
  uint *puStack_338;
  uint *puStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  uint *puStack_318;
  undefined **ppuStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  uint uStack_300;
  int iStack_2fc;
  uint *puStack_2f8;
  undefined *puStack_2f4;
  undefined1 *puStack_2f0;
  uint *puStack_2ec;
  uint *puStack_2e8;
  char *pcStack_2e4;
  uint *puStack_2e0;
  undefined1 local_2d0 [164];
  undefined1 local_22c [168];
  uint local_184 [4];
  undefined4 local_174;
  uint local_170;
  undefined1 local_168 [164];
  undefined1 local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  undefined1 *local_88;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7bbd5;
  local_10 = ExceptionList;
  puStack_2e0 = (uint *)0x4;
  pcStack_2e4 = "edit";
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  puStack_2e8 = (uint *)0x767c73;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  puStack_2e0 = (uint *)0x9;
  pcStack_2e4 = "localhost";
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  puStack_2e8 = (uint *)0x767c8f;
  FUN_00409350();
  local_8._0_1_ = 1;
  puStack_2e0 = (uint *)0xc;
  pcStack_2e4 = "LobbySession";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puStack_2e8 = (uint *)0x767cac;
  FUN_00409350();
  local_8._0_1_ = 2;
  puStack_2e0 = local_68;
  pcStack_2e4 = (char *)0x767cc1;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x36c) + 0x40))();
  pcStack_2e4 = (char *)0x1;
  puStack_2e8 = (uint *)0x767cd2;
  iStack_320 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
  uStack_310 = *(undefined4 *)(iStack_320 + 0x24);
  local_14 = (undefined1 *)&ppuStack_314;
  ppuStack_314 = CVersion::vftable;
  uStack_30c = *(undefined4 *)(iStack_320 + 0x28);
  uStack_308 = *(undefined4 *)(iStack_320 + 0x2c);
  uStack_304 = *(undefined4 *)(iStack_320 + 0x30);
  puStack_318 = (uint *)0xffffffff;
  uStack_31c = 0;
  iStack_320 = iStack_320 + 0x34;
  puStack_2ec = (uint *)0xf;
  puStack_2f0 = (undefined1 *)0x0;
  uStack_300 = uStack_300 & 0xffffff00;
  uStack_324 = 0x767d14;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  puStack_318 = local_c0;
  uStack_31c = 0x767d2a;
  uStack_32c = (**(code **)(*(int *)(iVar1 + 0x54) + 0x4c))();
  uStack_31c = 1;
  iStack_320 = 1;
  uStack_324 = 6;
  uStack_328 = 0;
  uStack_330 = 0x666;
  puStack_334 = local_4c;
  puStack_338 = local_30;
  puStack_33c = local_2d0;
  local_8._0_1_ = 5;
  uStack_340 = 0x767d53;
  FUN_009f8180();
  puStack_2e8 = (uint *)local_22c;
  local_8._0_1_ = 6;
  puStack_2ec = (uint *)0x767d65;
  FUN_00648af0();
  puStack_2e8 = (uint *)0x767d70;
  FUN_00648a60();
  if (0xf < local_ac) {
    puStack_2e8 = (uint *)local_c0[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ec = (uint *)&UNK_00767d85;
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_1c) {
    puStack_2e8 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ec = (uint *)&UNK_00767db1;
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
    puStack_2e8 = (uint *)local_4c[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ec = (uint *)&UNK_00767dcd;
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_8._0_1_ = 0xc;
  if (0xf < local_54) {
    puStack_2e8 = (uint *)local_68[0];
                    /* WARNING: Subroutine does not return */
    puStack_2ec = (uint *)&UNK_00767ded;
    FUN_00aae91b();
  }
  puStack_2e8 = (uint *)0xa;
  puStack_2ec = (uint *)0xe08ebc;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  puStack_2f0 = (undefined1 *)0x767e13;
  FUN_00409350();
  local_8._0_1_ = 0xd;
  puStack_2e8 = local_84;
  puStack_2ec = (uint *)0x767e28;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x368) + 0x40))();
  puStack_2ec = local_a4;
  puStack_2f0 = (undefined1 *)0x767e3a;
  puStack_2f8 = (uint *)(**(code **)(*(int *)(iVar1 + 0x54) + 0x4c))();
  puStack_2f0 = (undefined1 *)0xffffffff;
  local_8._0_1_ = 0xe;
  puStack_2f4 = (undefined *)0x0;
  local_170 = 0xf;
  local_174 = 0;
  local_184[0] = local_184[0] & 0xffffff00;
  iStack_2fc = 0x767e60;
  FUN_00408ed0();
  puStack_2f0 = local_168;
  local_8._0_1_ = 0xf;
  puStack_2f4 = (undefined *)0x767e76;
  FUN_00648af0();
  local_c4 = 1;
  local_8._0_1_ = 0x10;
  puStack_2f0 = (undefined1 *)0xffffffff;
  puStack_2f4 = (undefined *)0x0;
  puStack_2f8 = local_184;
  local_14 = (undefined1 *)(*(int *)(in_ECX + 4) + 0x98);
  iStack_2fc = 0x767e9e;
  FUN_00408ed0();
  puStack_2f0 = (undefined1 *)0x767eac;
  FUN_007589c0();
  *(undefined1 *)((int)local_14 + 0xc0) = local_c4;
  puStack_2f0 = (undefined1 *)0x767ec2;
  FUN_00648a60();
  if (0xf < local_170) {
    puStack_2f0 = (undefined1 *)local_184[0];
                    /* WARNING: Subroutine does not return */
    puStack_2f4 = &UNK_00767edb;
    FUN_00aae91b();
  }
  local_170 = 0xf;
  local_174 = 0;
  local_184[0] = local_184[0] & 0xffffff00;
  if (0xf < local_90) {
    puStack_2f0 = (undefined1 *)local_a4[0];
                    /* WARNING: Subroutine does not return */
    puStack_2f4 = &UNK_00767f0b;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xc;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_70) {
    puStack_2f0 = (undefined1 *)local_84[0];
                    /* WARNING: Subroutine does not return */
    puStack_2f4 = &UNK_00767f37;
    FUN_00aae91b();
  }
  puStack_2f0 = (undefined1 *)0x260;
  puStack_2f4 = (undefined *)0x767f44;
  iVar1 = FUN_00aae9af();
  local_8._0_1_ = 0x11;
  local_14 = (undefined1 *)iVar1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_88 = auStack_390;
    FUN_00648af0(auStack_390);
    iVar1 = FUN_009ae5f0(iVar1);
  }
  local_8 = CONCAT31(local_8._1_3_,0xc);
  puStack_2f0 = (undefined1 *)0x767f8b;
  iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
  *(undefined4 *)(iVar1 + 0x1c4) = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)(iVar2 + 0x28);
  puStack_2f0 = (undefined1 *)0xffffffff;
  *(undefined4 *)(iVar1 + 0x1cc) = *(undefined4 *)(iVar2 + 0x2c);
  puStack_2f4 = (undefined *)0x0;
  puStack_2f8 = (uint *)(iVar2 + 0x34);
  *(undefined4 *)(iVar1 + 0x1d0) = *(undefined4 *)(iVar2 + 0x30);
  iStack_2fc = 0x767fc2;
  FUN_00408ed0();
  puStack_2f4 = (undefined *)0x767fcd;
  puStack_2f0 = (undefined1 *)iVar1;
  (**(code **)(**(int **)(in_ECX + 4) + 0x48))();
  *(undefined1 *)(iVar1 + 0x1bc) = 0;
  puStack_2f4 = (undefined *)0x0;
  puStack_2f8 = (uint *)0x0;
  iStack_2fc = 0x767fe2;
  (**(code **)(**(int **)(iVar1 + 0x38) + 8))();
  *(undefined1 *)(DAT_012588e8 + 3000) = 1;
  DAT_012589ac = 1;
  iStack_2fc = 0x76800a;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x36c) + 0x18) + 0x38))();
  iStack_2fc = 0x768017;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  uStack_300 = 0x768021;
  iStack_2fc = in_ECX + 8;
  (**(code **)(*piVar3 + 8))();
  iVar1 = *(int *)(in_ECX + 4);
  uStack_300 = 0x768034;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + 0xc) + 0x30))();
  iVar1 = *(int *)(iVar1 + 0x1b4);
  if (*(int *)(iVar1 + 0x20) != 0) {
    uStack_300 = 0x76804e;
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x20) + 0x18) + 0x38))();
  }
  uStack_300 = 0x76805b;
  FUN_007580e0();
  uStack_300 = 0x768066;
  FUN_00648a60();
  ExceptionList = local_10;
  return;
}

