// FUN_00a17030 @ 00a17030 body=[[00a17030, 00a17077] [00a17080, 00a1710b] [00a1710f, 00a1723b] [00a1723f, 00a17317] [00a1731b, 00a1741c] [00a17420, 00a1742d] [00a17431, 00a1744d] [00a17457, 00a1747d] [00a17484, 00a1749c] [00a174a0, 00a174ae] [00a174b2, 00a174d5] [00a174d9, 00a174ed]]


uint FUN_00a17030(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_stack_00000020;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined1 *puStack_1a8;
  undefined4 uStack_1a4;
  uint *puStack_1a0;
  uint *puStack_19c;
  int *piStack_198;
  undefined ***pppuStack_194;
  undefined **local_108 [18];
  undefined4 local_c0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  int local_20;
  uint local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b54dc3;
  local_10 = ExceptionList;
  local_1c = 0;
  local_8 = 0;
  pppuStack_194 = (undefined ***)0xa17067;
  ExceptionList = &local_10;
  uVar2 = FUN_00416db0();
  if ((char)uVar2 == '\0') {
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return uVar2 & 0xffffff00;
    }
    pppuStack_194 = (undefined ***)param_3;
                    /* WARNING: Subroutine does not return */
    piStack_198 = (int *)&UNK_00a174d6;
    FUN_00aae91b();
  }
  for (piVar6 = *(int **)(param_1 + 8); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
    if ((undefined4 *)*piVar6 == param_2) goto LAB_00a174a0;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  pppuStack_194 = (undefined ***)0x10;
  piStack_198 = (int *)0xa1709c;
  puVar3 = (undefined4 *)FUN_00aae9af();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = iVar4;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0xc) = puVar3;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 8) = puVar3;
  }
  else {
    *(undefined4 **)(iVar4 + 8) = puVar3;
  }
  pppuStack_194 = (undefined ***)0xb;
  piStack_198 = (int *)0xe3f068;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_19c = (uint *)0xa170ea;
  FUN_00409350();
  pppuStack_194 = (undefined ***)local_50;
  local_8._0_1_ = 1;
  piStack_198 = (int *)0xa170f7;
  local_20 = FUN_009c1bd0();
  local_8._0_1_ = 0;
  if (0xf < local_3c) {
    pppuStack_194 = (undefined ***)local_50[0];
                    /* WARNING: Subroutine does not return */
    piStack_198 = (int *)&UNK_00a1710c;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  piVar6 = *(int **)(param_1 + 8);
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
    pppuStack_194 = (undefined ***)0x78;
    piStack_198 = (int *)0xa17127;
    local_18 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 2;
    if (local_18 == (undefined1 *)0x0) {
      pppuStack_194 = (undefined ***)0x0;
    }
    else {
      pppuStack_194 = (undefined ***)(uint)*(ushort *)(*piVar6 + 0x40);
      piStack_198 = *(int **)(*piVar6 + 0x3c);
      puStack_19c = (uint *)(param_1 + 0x18);
      puStack_1a0 = param_2;
      uStack_1a4 = 1;
      uStack_1ac = 0xa17153;
      puStack_1a8 = local_18;
      pppuStack_194 = (undefined ***)FUN_00a040d0();
    }
    local_8._0_1_ = 0;
    piStack_198 = (int *)0xa17168;
    (**(code **)(**(int **)(local_20 + 0x38) + 0x18))();
  }
  local_60 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  local_58 = 0;
  local_8._0_1_ = 3;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  pppuStack_194 = (undefined ***)*(int *)(param_1 + 8);
  while (pppuStack_194 != (undefined ***)0x0) {
    iVar4 = *(int *)((int)pppuStack_194 + 8);
    piStack_198 = (int *)0xa1719d;
    FUN_0057aab0();
    pppuStack_194 = (undefined ***)iVar4;
  }
  local_8._0_1_ = 4;
  for (iVar4 = local_30; iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    pppuStack_194 = (undefined ***)0xa171ba;
    FUN_00a840b0();
  }
  pppuStack_194 = (undefined ***)0x0;
  piStack_198 = (int *)&DAT_00ded94d;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  puStack_19c = (uint *)0xa171ec;
  FUN_00409350();
  local_8._0_1_ = 5;
  pppuStack_194 = (undefined ***)0xffffffff;
  piStack_198 = (int *)0x0;
  puStack_19c = local_a4;
  local_84 = DAT_00f0d858;
  local_88 = 0;
  local_80 = DAT_00f0d85c;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  puStack_1a0 = (uint *)0xa17223;
  FUN_00408ed0();
  local_8._0_1_ = 7;
  if (0xf < local_90) {
    pppuStack_194 = (undefined ***)local_a4[0];
                    /* WARNING: Subroutine does not return */
    piStack_198 = (int *)&UNK_00a1723c;
    FUN_00aae91b();
  }
  pppuStack_194 = (undefined ***)0x94;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  piStack_198 = (int *)0xa1725b;
  iVar4 = FUN_00aae9af();
  local_8._0_1_ = 8;
  if (iVar4 == 0) {
    pppuStack_194 = (undefined ***)0x0;
  }
  else {
    local_18 = (undefined1 *)&uStack_1b8;
    uStack_1b8 = local_88;
    uStack_1b4 = local_84;
    uStack_1b0 = local_80;
    piStack_198 = (int *)0xf;
    puStack_19c = (uint *)0x0;
    uStack_1ac = uStack_1ac & 0xffffff00;
    FUN_00408ed0(local_7c,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,9);
    uVar5 = FUN_00a17000(param_1);
    local_1c = 1;
    local_8 = 0xb;
    pppuStack_194 =
         (undefined ***)
         FUN_00a02600(iVar4,uVar5,param_2[0xf],*(undefined2 *)(param_2 + 0x10),&local_60);
  }
  local_8 = 0xc;
  piStack_198 = (int *)0xa172f6;
  (**(code **)(**(int **)(local_20 + 0x38) + 0x18))();
  local_8 = 7;
  if (((local_1c & 1) != 0) && (0xf < local_ac)) {
    piStack_198 = (int *)local_c0;
                    /* WARNING: Subroutine does not return */
    puStack_19c = (uint *)&UNK_00a17318;
    FUN_00aae91b();
  }
  piStack_198 = (int *)0x15;
  puStack_19c = (uint *)0xe3f088;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_1a0 = (uint *)0xa17333;
  FUN_00409350();
  piStack_198 = (int *)0x4;
  puStack_1a0 = local_50;
  puStack_19c = (uint *)0x33;
  local_8._0_1_ = 0xd;
  uStack_1a4 = 0xa1734a;
  FUN_004015b0();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  piStack_198 = (int *)0xa1735d;
  puStack_19c = (uint *)FUN_00987d20();
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  puStack_1a0 = (uint *)0xa17373;
  piStack_198 = param_2;
  uStack_1a4 = FUN_00418e30();
  puStack_1a0 = (uint *)0xe3f074;
  puVar3 = (undefined4 *)(param_1 + 0x18);
  puStack_1a8 = (undefined1 *)0xa17381;
  puStack_19c = (uint *)FUN_00418e30();
  if (0xf < *(uint *)(param_1 + 0x2c)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  puStack_1a0 = (undefined4 *)0xa17392;
  piStack_198 = puVar3;
  piVar6 = (int *)FUN_00418e30();
  puStack_19c = (uint *)0xa1739d;
  piStack_198 = piVar6;
  FUN_00408be0();
  uVar2 = 0;
  if ((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) {
    pppuStack_194 = (undefined ***)0xa173b8;
    iVar4 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))();
    if (iVar4 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    piStack_198 = (int *)(*(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar2);
    if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
      piStack_198 = (int *)((uint)piStack_198 | 4);
    }
    pppuStack_194 = (undefined ***)0x0;
    puStack_19c = (uint *)0xa173e1;
    FUN_00401120();
  }
  pppuStack_194 = local_108;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  piStack_198 = (int *)0xa173f1;
  FUN_00987ac0();
  pppuStack_194 = local_108;
  local_108[0] = std::ios_base::vftable;
  piStack_198 = (int *)0xa17407;
  FUN_00aad52d();
  if (0xf < local_3c) {
    pppuStack_194 = (undefined ***)local_50[0];
                    /* WARNING: Subroutine does not return */
    piStack_198 = (int *)&UNK_00a1741d;
    FUN_00aae91b();
  }
  if (0xf < local_68) {
    pppuStack_194 = (undefined ***)local_7c[0];
                    /* WARNING: Subroutine does not return */
    piStack_198 = (int *)&UNK_00a1742e;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  if (local_30 != 0) {
    pppuStack_194 = (undefined ***)local_30;
                    /* WARNING: Subroutine does not return */
    piStack_198 = (int *)&UNK_00a1744e;
    FUN_00aae91b();
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  piVar6 = (int *)0x0;
  puVar3 = local_60;
  if (local_60 != (undefined4 *)0x0) {
    while( true ) {
      if (puVar3 == local_5c) {
        pppuStack_194 = (undefined ***)local_60;
                    /* WARNING: Subroutine does not return */
        piStack_198 = (int *)&UNK_00a1749d;
        FUN_00aae91b();
      }
      if (0xf < (uint)puVar3[5]) break;
      puVar3[5] = 0xf;
      puVar3[4] = 0;
      *(undefined1 *)puVar3 = 0;
      puVar3 = puVar3 + 7;
    }
    pppuStack_194 = (undefined ***)*puVar3;
                    /* WARNING: Subroutine does not return */
    piStack_198 = (int *)&UNK_00a1747e;
    FUN_00aae91b();
  }
LAB_00a174a0:
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)piVar6 >> 8),1);
  }
  pppuStack_194 = (undefined ***)param_3;
                    /* WARNING: Subroutine does not return */
  piStack_198 = (int *)&UNK_00a174af;
  FUN_00aae91b();
}

