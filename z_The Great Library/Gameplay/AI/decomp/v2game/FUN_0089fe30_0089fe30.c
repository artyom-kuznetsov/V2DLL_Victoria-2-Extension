// FUN_0089fe30 @ 0089fe30 body=[[0089fe30, 0089feb7] [0089febb, 0089ff8d] [0089ff91, 0089ffc0] [0089ffc4, 0089ffdf] [0089ffe3, 008a0034] [008a0038, 008a0101] [008a0105, 008a0134] [008a0138, 008a0153] [008a0157, 008a025a] [008a025e, 008a029e] [008a02a2, 008a02c6] [008a02ca, 008a02e4] [008a02e8, 008a03e8] [008a03ec, 008a0410] [008a0414, 008a0432] [008a0436, 008a058f] [008a0593, 008a05b1] [008a05b5, 008a05d1] [008a05d5, 008a05f4] [008a05f8, 008a0612] [008a0616, 008a06d9] [008a06dd, 008a071f] [008a0723, 008a0767] [008a076b, 008a07ac] [008a07b0, 008a0833] [008a0837, 008a0965] [008a0969, 008a098d] [008a0991, 008a09b0] [008a09b4, 008a09ca] [008a09ce, 008a09e8] [008a09ec, 008a0aa7] [008a0aab, 008a0b68] [008a0b6c, 008a0b9c] [008a0ba0, 008a0bb4]]


undefined4 FUN_0089fe30(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  float10 fVar6;
  uint in_stack_00000020;
  undefined8 uVar7;
  undefined1 local_108 [20];
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  undefined1 local_bc [20];
  uint local_a8 [2];
  undefined1 local_a0 [4];
  int local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  int local_70;
  int iStack_6c;
  uint local_68 [2];
  undefined1 local_60 [8];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68477;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  cVar2 = (**(code **)(**(int **)((int)param_2 + 0x14) + 0x20))();
  if (cVar2 != '\0') {
    FUN_0089fc90();
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("MILITANCY_EFFECT",0x10);
    local_8._0_1_ = 0x2a;
    FUN_009a8ee0(local_108,local_4c);
    local_8._0_1_ = 0x2c;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4 = local_f4 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0x2d;
    if (iStack_6c < 1) {
      if (iStack_6c < 0) {
        FUN_00409350(&DAT_00df8518,2);
      }
      else if ((-1 < iStack_6c) && ((0 < iStack_6c || (local_70 != 0)))) goto LAB_008a089b;
    }
    else {
LAB_008a089b:
      FUN_004012f0();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("VALUE",5);
    local_8._0_1_ = 0x2e;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0x2f;
    param_2 = (undefined4 *)
              (float)((float10)CONCAT44(iStack_6c,local_70) * (float10)3.0517578125e-05);
    fVar6 = (float10)FUN_0040b340();
    param_2 = (undefined4 *)(float)fVar6;
    FUN_00988d00(local_68,2);
    local_8._0_1_ = 0x30;
    FUN_00988f20();
    local_8._0_1_ = 0x31;
    FUN_00988f20();
    local_8._0_1_ = 0x32;
    FUN_009a9980();
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x2d;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 0x2d;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (iStack_6c < 0) {
      local_8._0_1_ = uVar1;
      FUN_009885d0();
      local_8 = 0x35;
      local_14 = 0x80;
      FUN_009a8ee0(local_60,local_8c);
      local_8 = 0x36;
      local_14 = 0x180;
    }
    else {
      FUN_009885d0();
      local_8 = CONCAT31(local_8._1_3_,0x33);
      local_14 = 0x20;
      FUN_009a8ee0(local_a0,local_30);
      local_8 = 0x34;
      local_14 = 0x60;
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("DIRECTION",9);
    local_8 = 0x37;
    FUN_009a9a90();
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0x35;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if ((local_14 & 0x100) != 0) {
      local_14 = local_14 & 0xfffffeff;
      FUN_009a9740();
    }
    if ((local_14 & 0x80) != 0) {
      local_14 = local_14 & 0xffffff7f;
      FUN_00408ad0();
    }
    local_8 = 0x33;
    if ((local_14 & 0x40) != 0) {
      local_14 = local_14 & 0xffffffbf;
      FUN_009a9740();
    }
    local_8 = 0x2d;
    if ((local_14 & 0x20) != 0) {
      local_14 = local_14 & 0xffffffdf;
      FUN_00408ad0();
    }
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_14 = local_14 | 0x10;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4 = local_f4 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_009a9740();
    goto joined_r0x008a0b92;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("SCAL_MILITANCY_EFFECT",0x15);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_bc,local_4c);
  local_8._0_1_ = 4;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_6c = *(int *)(in_ECX + 0x24);
  local_70 = *(int *)(in_ECX + 0x20);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if ((*(int **)(in_ECX + 0x28) == (int *)0x0) ||
     (cVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x20))(), uVar1 = (undefined1)local_8,
     cVar2 == '\0')) {
    local_8._0_1_ = uVar1;
    if ((*(int **)(in_ECX + 0x2c) != (int *)0x0) &&
       (cVar2 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))(), cVar2 != '\0')) {
      FUN_009885d0();
      local_8._0_1_ = 0xb;
      FUN_009885d0();
      local_8._0_1_ = 0xc;
      param_2 = (undefined4 *)FUN_009a8ee0(local_a0,local_68);
      local_8._0_1_ = 0xd;
      iVar3 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
      local_8._0_1_ = 0xe;
      FUN_009a9980();
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      local_8._0_1_ = 0xc;
      FUN_009a9740();
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 4;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_009885d0();
      local_8._0_1_ = 0xf;
      (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))();
      local_8._0_1_ = 0x10;
      goto LAB_008a0014;
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("SME_ARE",7);
    local_8._0_1_ = 0x11;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350(&DAT_00e2a5d0,4);
    local_8._0_1_ = 0x12;
    FUN_009a8ee0(local_a0,local_30);
    local_8._0_1_ = 0x13;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0x14;
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x15;
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      param_2 = (undefined4 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x14;
    FUN_009e6810(local_68,&param_2);
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_8._0_1_ = 0x16;
    FUN_009adb70();
    if (local_9c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("SME_UNEMPLOYMENT",0x10);
    local_8._0_1_ = 0x17;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350(&DAT_00e2a5d8,3);
    local_8._0_1_ = 0x18;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_a0,local_30);
    local_8._0_1_ = 0x19;
    puVar5 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x1a;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = local_bc;
      *puVar5 = &PTR_FUN_00e38ecc;
      puVar5[7] = 0xf;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      param_2 = puVar5;
      FUN_00408ed0();
      *puVar5 = &PTR_FUN_00e38f08;
      puVar5[9] = *puVar4;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      local_8._0_1_ = 0x1c;
      FUN_009a97b0();
    }
    local_8._0_1_ = 0x19;
    param_2 = puVar5;
    FUN_009e6810(local_68,&param_2);
    local_8._0_1_ = 0x1d;
    FUN_009adb70();
    if (local_9c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("SME_SUPPORT",0xb);
    local_8._0_1_ = 5;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350(&DAT_00e2a5d0,4);
    local_8._0_1_ = 6;
    param_2 = (undefined4 *)FUN_009a8ee0(local_a0,local_30);
    local_8._0_1_ = 7;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 8;
    FUN_009a9980();
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_8._0_1_ = 6;
    FUN_009a9740();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e2a5d8,3);
    local_8._0_1_ = 9;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
    local_8._0_1_ = 10;
LAB_008a0014:
    FUN_009a9980();
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
  }
  if (0xf < local_1c) {
    local_8._0_1_ = 4;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  local_8._0_1_ = 0x1e;
  if (iStack_6c < 1) {
    if (iStack_6c < 0) {
      uVar7 = 0x200df8518;
      goto LAB_008a048b;
    }
    if ((-1 < iStack_6c) && ((0 < iStack_6c || (local_70 != 0)))) goto LAB_008a0484;
  }
  else {
LAB_008a0484:
    uVar7 = 0x200df8510;
LAB_008a048b:
    FUN_00409350(uVar7);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("VALUE",5);
  local_8._0_1_ = 0x1f;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 0x20;
  param_2 = (undefined4 *)(float)((float10)CONCAT44(iStack_6c,local_70) * (float10)3.0517578125e-05)
  ;
  fVar6 = (float10)FUN_0040b340();
  param_2 = (undefined4 *)(float)fVar6;
  FUN_00988d00(local_a8,2);
  local_8._0_1_ = 0x21;
  FUN_00988f20();
  local_8._0_1_ = 0x22;
  FUN_00988f20();
  local_8._0_1_ = 0x23;
  param_2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x24;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    param_2 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x23;
  FUN_009e6810(local_68,&param_2);
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x1e;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0x1e;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (iStack_6c < 0) {
    local_8._0_1_ = uVar1;
    FUN_009885d0();
    local_8 = 0x27;
    local_14 = 4;
    FUN_009a8ee0(local_a0,local_30);
    local_8 = 0x28;
    local_14 = 0xc;
  }
  else {
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x25);
    local_14 = 1;
    FUN_009a8ee0(local_60,local_8c);
    local_8 = 0x26;
    local_14 = 3;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("DIRECTION",9);
  local_8 = 0x29;
  FUN_009a9a90();
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0x27;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    FUN_009a9740();
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
  }
  local_8 = 0x25;
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    FUN_009a9740();
  }
  local_8 = 0x1e;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_14 = local_14 | 0x10;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_009a9740();
joined_r0x008a0b92:
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

