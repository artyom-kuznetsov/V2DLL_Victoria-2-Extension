// FUN_005372c0 @ 005372c0 body=[[005372c0, 0053744c] [00537450, 0053746c] [00537470, 0053748e] [00537492, 00537577] [0053757b, 0053759e] [005375a2, 0053769d] [005376a1, 005376c4] [005376c8, 00537799] [0053779d, 005377b7] [005377bb, 005377f8]]


void FUN_005372c0(int param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_140;
  code *pcStack_13c;
  undefined1 auStack_138 [112];
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  uint *puStack_c0;
  uint *local_bc;
  undefined1 local_ac [56];
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  undefined1 *local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9c59a;
  local_10 = ExceptionList;
  local_bc = (uint *)0x5372f8;
  ExceptionList = &local_10;
  FUN_0068dd70();
  local_3c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  if ((*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) &&
     (*(int *)(DAT_012588e8 + 0xb60) != *(int *)(param_3 + 4))) {
    local_3c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    local_bc = *(uint **)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    puStack_c0 = (uint *)0x537344;
    puVar2 = (undefined4 *)FUN_005061e0();
    local_bc = (uint *)0x11;
    puStack_c0 = (uint *)0xdfdcc0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_c4 = (undefined1 *)0x537363;
    FUN_00409350();
    local_8 = 0;
    local_bc = (uint *)0x9;
    puStack_c0 = (uint *)0xdf2728;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    puStack_c4 = (undefined1 *)0x53737e;
    FUN_00409350();
    local_8._0_1_ = 1;
    local_bc = (uint *)0x537387;
    FUN_006a4f40();
    local_bc = local_34;
    puStack_c0 = local_74;
    puStack_c4 = (undefined1 *)0x537394;
    local_bc = (uint *)FUN_00424ce0();
    puStack_c0 = local_58;
    puStack_c4 = local_ac;
    local_8._0_1_ = 2;
    uStack_c8 = 0x5373a9;
    iVar3 = FUN_00424aa0();
    local_8._0_1_ = 3;
    local_18 = puVar2[1];
    local_bc = (uint *)0x44;
    puStack_c0 = (uint *)0x5373bd;
    puVar4 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 4;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 4;
    local_38 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
      local_8._0_1_ = uVar1;
    }
    else {
      local_bc = (uint *)0xffffffff;
      puStack_c0 = (uint *)0x0;
      *(undefined4 *)(puVar4 + 0x14) = 0xf;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *puVar4 = 0;
      uStack_c8 = 0x5373e7;
      puStack_c4 = (undefined1 *)iVar3;
      FUN_00408ed0();
      local_8._0_1_ = 5;
      local_bc = (uint *)0xffffffff;
      puStack_c0 = (uint *)0x0;
      puStack_c4 = (undefined1 *)(iVar3 + 0x1c);
      *(undefined4 *)(puVar4 + 0x30) = 0xf;
      *(undefined4 *)(puVar4 + 0x2c) = 0;
      puVar4[0x1c] = 0;
      uStack_c8 = 0x537409;
      FUN_00408ed0();
      *(int *)(puVar4 + 0x38) = local_18;
      *(undefined4 *)(puVar4 + 0x3c) = 0;
      puVar4[0x40] = 0;
    }
    iVar3 = puVar2[2];
    puVar2[1] = puVar4;
    puVar2[2] = iVar3 + 1;
    if (iVar3 == 0) {
      *puVar2 = puVar4;
    }
    else {
      *(undefined1 **)(local_18 + 0x3c) = puVar4;
    }
    local_bc = (uint *)0x53743e;
    FUN_00a39a80();
    if (0xf < local_60) {
      local_bc = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_0053744d;
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_44) {
      local_bc = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_0053746d;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_20) {
      local_bc = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_0053748f;
      FUN_00aae91b();
    }
    local_bc = (uint *)0x6;
    puStack_c0 = (uint *)0xdfe490;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_c4 = (undefined1 *)0x5374aa;
    FUN_00409350();
    local_8 = 6;
    local_bc = local_74;
    puStack_c0 = (uint *)0x5374bf;
    local_bc = (uint *)(**(code **)(*param_2 + 0x18))();
    puStack_c0 = local_34;
    puStack_c4 = local_ac;
    local_8._0_1_ = 7;
    uStack_c8 = 0x5374d4;
    iVar3 = FUN_00424aa0();
    local_8._0_1_ = 8;
    local_18 = puVar2[1];
    local_bc = (uint *)0x44;
    puStack_c0 = (uint *)0x5374e8;
    puVar4 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 9;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 9;
    local_38 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
      local_8._0_1_ = uVar1;
    }
    else {
      local_bc = (uint *)0xffffffff;
      puStack_c0 = (uint *)0x0;
      *(undefined4 *)(puVar4 + 0x14) = 0xf;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *puVar4 = 0;
      uStack_c8 = 0x537512;
      puStack_c4 = (undefined1 *)iVar3;
      FUN_00408ed0();
      local_8._0_1_ = 10;
      local_bc = (uint *)0xffffffff;
      puStack_c0 = (uint *)0x0;
      puStack_c4 = (undefined1 *)(iVar3 + 0x1c);
      *(undefined4 *)(puVar4 + 0x30) = 0xf;
      *(undefined4 *)(puVar4 + 0x2c) = 0;
      puVar4[0x1c] = 0;
      uStack_c8 = 0x537534;
      FUN_00408ed0();
      *(int *)(puVar4 + 0x38) = local_18;
      *(undefined4 *)(puVar4 + 0x3c) = 0;
      puVar4[0x40] = 0;
    }
    iVar3 = puVar2[2];
    puVar2[1] = puVar4;
    puVar2[2] = iVar3 + 1;
    if (iVar3 == 0) {
      *puVar2 = puVar4;
    }
    else {
      *(undefined1 **)(local_18 + 0x3c) = puVar4;
    }
    local_bc = (uint *)0x537569;
    FUN_00a39a80();
    if (0xf < local_60) {
      local_bc = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_00537578;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_20) {
      local_bc = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_0053759f;
      FUN_00aae91b();
    }
    local_bc = (uint *)0x5;
    puStack_c0 = (uint *)0xdfe680;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_c4 = (undefined1 *)0x5375ba;
    FUN_00409350();
    local_8 = 0xb;
    local_bc = (uint *)0x5375e5;
    local_bc = (uint *)FUN_0055dd40();
    puStack_c0 = local_34;
    puStack_c4 = local_ac;
    local_8._0_1_ = 0xc;
    uStack_c8 = 0x5375fa;
    iVar3 = FUN_00424aa0();
    local_8._0_1_ = 0xd;
    local_18 = puVar2[1];
    local_bc = (uint *)0x44;
    puStack_c0 = (uint *)0x53760e;
    puVar4 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0xe;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 0xe;
    local_38 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
      local_8._0_1_ = uVar1;
    }
    else {
      local_bc = (uint *)0xffffffff;
      puStack_c0 = (uint *)0x0;
      *(undefined4 *)(puVar4 + 0x14) = 0xf;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *puVar4 = 0;
      uStack_c8 = 0x537638;
      puStack_c4 = (undefined1 *)iVar3;
      FUN_00408ed0();
      local_8._0_1_ = 0xf;
      local_bc = (uint *)0xffffffff;
      puStack_c0 = (uint *)0x0;
      puStack_c4 = (undefined1 *)(iVar3 + 0x1c);
      *(undefined4 *)(puVar4 + 0x30) = 0xf;
      *(undefined4 *)(puVar4 + 0x2c) = 0;
      puVar4[0x1c] = 0;
      uStack_c8 = 0x53765a;
      FUN_00408ed0();
      *(int *)(puVar4 + 0x38) = local_18;
      *(undefined4 *)(puVar4 + 0x3c) = 0;
      puVar4[0x40] = 0;
    }
    iVar3 = puVar2[2];
    puVar2[1] = puVar4;
    puVar2[2] = iVar3 + 1;
    if (iVar3 == 0) {
      *puVar2 = puVar4;
    }
    else {
      *(undefined1 **)(local_18 + 0x3c) = puVar4;
    }
    local_bc = (uint *)0x53768f;
    FUN_00a39a80();
    if (0xf < local_60) {
      local_bc = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_0053769e;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_20) {
      local_bc = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_005376c5;
      FUN_00aae91b();
    }
    local_bc = (uint *)0x0;
    puStack_c0 = (uint *)&DAT_00ded94d;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_c4 = (undefined1 *)0x5376df;
    FUN_00409350();
    local_8 = 0x10;
    local_bc = (uint *)0xb;
    puStack_c0 = (uint *)0xdff21c;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    puStack_c4 = (undefined1 *)0x5376fe;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    local_38 = (undefined1 *)&uStack_140;
    uStack_140 = 0;
    pcStack_13c = (code *)0x0;
    uVar6 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)param_2[2] * 4);
    uVar12 = *(undefined4 *)(DAT_012588e8 + 0xb60);
    uVar11 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    uVar10 = *(undefined4 *)(DAT_012588e8 + 0xb60);
    uVar9 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    uVar8 = 0;
    puVar7 = local_34;
    FUN_006a4f40(puVar2,uVar6,puVar7,0,uVar9,uVar10,uVar11,uVar12);
    uVar5 = FUN_006a55b0();
    FUN_006a7ed0(auStack_138,uVar5,puVar2,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    pcStack_13c = FUN_006a5730;
    local_8._0_1_ = 0x12;
    uStack_140 = 0x537777;
    uStack_140 = FUN_006a4f40();
    uVar6 = FUN_006a4f40();
    local_8 = CONCAT31(local_8._1_3_,0x11);
    FUN_004e9540(uVar6);
    if (0xf < local_44) {
      local_bc = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_0053779a;
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_20) {
      local_bc = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_c0 = (uint *)&UNK_005377b8;
      FUN_00aae91b();
    }
  }
  for (local_bc = *(uint **)(param_1 + 0x149c);
      (local_bc != (undefined4 *)0x0 && ((int *)*local_bc != param_2));
      local_bc = (uint *)local_bc[2]) {
  }
  puStack_c0 = (uint *)0x5377e6;
  FUN_005f2ae0();
  ExceptionList = local_10;
  return;
}

