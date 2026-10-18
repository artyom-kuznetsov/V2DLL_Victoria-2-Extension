// FUN_009261c0 @ 009261c0 body=[[009261c0, 0092640c] [00926410, 00926431] [00926435, 00926450] [00926454, 0092646f] [00926473, 00926489]]


void FUN_009261c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int in_ECX;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b84d89;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar5 = FUN_00aae9af();
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0092cb70();
  }
  iVar5 = *(int *)(in_ECX + 0x14);
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(in_ECX + 0x18);
  iVar3 = *(int *)(in_ECX + 0xc);
  piVar6[2] = *(int *)(in_ECX + 8);
  piVar6[4] = iVar1;
  piVar6[3] = iVar3;
  piVar6[5] = iVar5;
  piVar6[6] = iVar2;
  iVar5 = *(int *)(in_ECX + 0x2c);
  piVar6[10] = *(int *)(in_ECX + 0x28);
  piVar6[0xb] = iVar5;
  (**(code **)(*piVar6 + 0x28))();
  iVar1 = DAT_012588e8;
  iVar5 = *(int *)(DAT_012588e8 + 0xa88);
  puVar7 = (undefined4 *)(DAT_012588e8 + 0xa84);
  puVar8 = (undefined4 *)FUN_00aae9af();
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = piVar6;
    puVar8[1] = iVar5;
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
  }
  iVar2 = *(int *)(iVar1 + 0xa8c);
  *(undefined4 **)(iVar1 + 0xa88) = puVar8;
  *(int *)(iVar1 + 0xa8c) = iVar2 + 1;
  if (iVar2 == 0) {
    *puVar7 = puVar8;
  }
  else {
    *(undefined4 **)(iVar5 + 8) = puVar8;
  }
  *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                             0xbe8) + *(int *)(in_ECX + 0x14) * 4) + 0x30) = piVar6;
  uStack_74 = 0xf;
  uStack_78 = 0;
  auStack_88[0] = auStack_88[0] & 0xffffff00;
  FUN_00409350();
  uStack_c = 0;
  uVar9 = FUN_00988bb0(auStack_6c,1);
  uStack_c._0_1_ = 1;
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  FUN_00408ed0(auStack_88);
  uStack_c._0_1_ = 2;
  uStack_20 = 0xf;
  uStack_24 = 0;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  FUN_00408ed0(uVar9);
  uStack_c._0_1_ = 3;
  iVar5 = param_1[1];
  puVar10 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 4;
  uVar4 = (undefined1)uStack_c;
  uStack_c._0_1_ = 4;
  if (puVar10 == (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
    uStack_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar10 + 0x14) = 0xf;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *puVar10 = 0;
    FUN_00408ed0(auStack_50);
    uStack_c._0_1_ = 5;
    *(undefined4 *)(puVar10 + 0x30) = 0xf;
    *(undefined4 *)(puVar10 + 0x2c) = 0;
    puVar10[0x1c] = 0;
    FUN_00408ed0(auStack_34);
    *(int *)(puVar10 + 0x38) = iVar5;
    *(undefined4 *)(puVar10 + 0x3c) = 0;
    puVar10[0x40] = 0;
  }
  iVar1 = param_1[2];
  param_1[1] = puVar10;
  param_1[2] = iVar1 + 1;
  if (iVar1 == 0) {
    *param_1 = puVar10;
  }
  else {
    *(undefined1 **)(iVar5 + 0x3c) = puVar10;
  }
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_20 = 0xf;
  uStack_24 = 0;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_58 = 0xf;
  uStack_5c = 0;
  auStack_6c[0] = auStack_6c[0] & 0xffffff00;
  if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_14;
  return;
}

