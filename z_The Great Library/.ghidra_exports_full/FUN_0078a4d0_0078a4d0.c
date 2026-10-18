// FUN_0078a4d0 @ 0078a4d0 body=[[0078a4d0, 0078a594] [0078a598, 0078a5f8] [0078a5fc, 0078a65d] [0078a661, 0078a6bd] [0078a6c1, 0078a722] [0078a726, 0078a790] [0078a794, 0078aac8] [0078aacc, 0078aade]]


void FUN_0078a4d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined8 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 uVar8;
  int in_ECX;
  code *pcVar9;
  float fVar10;
  uint in_stack_00000024;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined1 **ppuStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  uint *puStack_5c;
  uint *puStack_58;
  uint *puStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  uint uStack_48;
  uint local_34 [2];
  uint local_2c;
  uint uStack_28;
  uint local_24;
  uint uStack_20;
  undefined1 *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b43a88;
  local_10 = ExceptionList;
  local_8 = 0;
  uStack_48 = 0xffffffff;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x78) = param_1;
  puStack_4c = (uint *)0x0;
  puStack_50 = &param_4;
  *(undefined4 *)(in_ECX + 0x7c) = param_2;
  *(undefined4 *)(in_ECX + 0x80) = param_3;
  puStack_54 = (uint *)0x78a51f;
  FUN_00408ed0();
  uStack_48 = 0x78a527;
  piVar3 = (int *)FUN_00967f50();
  if (piVar3 == (int *)0x0) goto LAB_0078aaba;
  uStack_48 = *(undefined4 *)(piVar3[0xe] + 0x28);
  puStack_4c = (uint *)0x78a545;
  (**(code **)(**(int **)(in_ECX + 0xa8) + 0x48))();
  puStack_4c = local_34;
  puStack_50 = (uint *)0x78a552;
  uVar4 = (**(code **)(*piVar3 + 0x20))();
  puStack_50 = (uint *)0xffffffff;
  local_8._0_1_ = 1;
  local_14 = *(float *)(in_ECX + 0xac);
  puStack_54 = (uint *)0x0;
  puStack_5c = (uint *)0x78a571;
  puStack_58 = (uint *)uVar4;
  FUN_00408ed0();
  puStack_50 = (uint *)0x0;
  puStack_58 = (uint *)0x78a582;
  puStack_54 = (uint *)uVar4;
  FUN_00a5ecc0();
  local_8._0_1_ = 0;
  if (0xf < uStack_20) {
    puStack_50 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_54 = (uint *)&UNK_0078a595;
    FUN_00aae91b();
  }
  puStack_50 = (uint *)0x78a5a1;
  cVar2 = (**(code **)(*piVar3 + 0x24))();
  puStack_50 = local_34;
  if (cVar2 == '\0') {
    puStack_54 = (uint *)0x78a67b;
    uVar4 = (**(code **)(*piVar3 + 0x38))();
    puStack_54 = (uint *)0xffffffff;
    local_8._0_1_ = 4;
    local_14 = *(float *)(in_ECX + 0xb4);
    puStack_58 = (uint *)0x0;
    uStack_64._4_4_ = (undefined1 **)0x78a69a;
    puStack_5c = (uint *)uVar4;
    FUN_00408ed0();
    puStack_54 = (uint *)0x0;
    puStack_5c = (uint *)0x78a6ab;
    puStack_58 = (uint *)uVar4;
    FUN_00a5ecc0();
    local_8._0_1_ = 0;
    if (0xf < uStack_20) {
      puStack_54 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_58 = (uint *)&UNK_0078a6be;
      FUN_00aae91b();
    }
    puStack_54 = (uint *)0x0;
    puStack_58 = (uint *)&DAT_00ded94d;
    uStack_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_5c = (uint *)0x78a6e2;
    FUN_00409350();
    puStack_54 = (uint *)0xffffffff;
    local_8._0_1_ = 5;
    puStack_58 = (uint *)0x0;
    puStack_5c = local_34;
    uStack_64._4_4_ = (undefined1 **)0x78a6ff;
    FUN_00408ed0();
    puStack_54 = (uint *)0x0;
    puStack_58 = local_34;
    puStack_5c = (uint *)0x78a710;
    FUN_00a5ecc0();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < uStack_20) {
      puStack_54 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_58 = (uint *)&UNK_0078a723;
      FUN_00aae91b();
    }
    puStack_54 = (uint *)0x78a733;
    (**(code **)(**(int **)(in_ECX + 0xbc) + 0x34))();
    piVar7 = *(int **)(in_ECX + 0xb8);
  }
  else {
    puStack_54 = (uint *)0x78a5b6;
    uVar4 = (**(code **)(*piVar3 + 0x38))();
    puStack_54 = (uint *)0xffffffff;
    local_8._0_1_ = 2;
    local_14 = *(float *)(in_ECX + 0xb0);
    puStack_58 = (uint *)0x0;
    uStack_64._4_4_ = (undefined1 **)0x78a5d5;
    puStack_5c = (uint *)uVar4;
    FUN_00408ed0();
    puStack_54 = (uint *)0x0;
    puStack_5c = (uint *)0x78a5e6;
    puStack_58 = (uint *)uVar4;
    FUN_00a5ecc0();
    local_8._0_1_ = 0;
    if (0xf < uStack_20) {
      puStack_54 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_58 = (uint *)&UNK_0078a5f9;
      FUN_00aae91b();
    }
    puStack_54 = (uint *)0x0;
    puStack_58 = (uint *)&DAT_00ded94d;
    uStack_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_5c = (uint *)0x78a61d;
    FUN_00409350();
    puStack_54 = (uint *)0xffffffff;
    local_8._0_1_ = 3;
    puStack_58 = (uint *)0x0;
    puStack_5c = local_34;
    uStack_64._4_4_ = (undefined1 **)0x78a63a;
    FUN_00408ed0();
    puStack_54 = (uint *)0x0;
    puStack_58 = local_34;
    puStack_5c = (uint *)0x78a64b;
    FUN_00a5ecc0();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < uStack_20) {
      puStack_54 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_58 = (uint *)&UNK_0078a65e;
      FUN_00aae91b();
    }
    puStack_54 = (uint *)0x78a66e;
    (**(code **)(**(int **)(in_ECX + 0xb8) + 0x34))();
    piVar7 = *(int **)(in_ECX + 0xbc);
  }
  puStack_54 = (uint *)0x78a740;
  (**(code **)(*piVar7 + 0x38))();
  puStack_54 = local_34;
  puStack_58 = (uint *)0x78a74e;
  uVar4 = (**(code **)(*(int *)piVar3[0xe] + 0x18))();
  puStack_58 = (uint *)0xffffffff;
  local_8._0_1_ = 6;
  local_14 = *(float *)(in_ECX + 0xc0);
  puStack_5c = (uint *)0x0;
  uStack_64._0_4_ = 0x78a76d;
  uStack_64._4_4_ = (undefined1 **)uVar4;
  FUN_00408ed0();
  puStack_58 = (uint *)0x0;
  uStack_64._4_4_ = (undefined1 **)0x78a77e;
  puStack_5c = (uint *)uVar4;
  FUN_00a5ecc0();
  uVar1 = CONCAT44(uStack_64._4_4_,(int)uStack_64);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < uStack_20) {
    puStack_58 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_5c = (uint *)&UNK_0078a791;
    FUN_00aae91b();
  }
  uStack_64._0_4_ = piVar3[0xd];
  if ((int)uStack_64 + 0x189373U < 0x39580e) {
    iVar6 = ((int)uStack_64 * 1000) / 10000;
    uStack_64 = uVar1;
  }
  else {
    puStack_58 = (uint *)0x0;
    uStack_64._4_4_ = (undefined1 **)((int)uStack_64 >> 0x1f);
    puStack_5c = (uint *)0x3e8;
    uStack_68 = 0x78a7cf;
    uStack_64 = __allmul();
    puStack_58 = (uint *)0x0;
    puStack_5c = (uint *)0x2710;
    uStack_68 = 0x78a7dd;
    iVar6 = __alldiv();
  }
  puStack_58 = (uint *)0x43fa4001;
  puStack_5c = (uint *)0x78a7f2;
  FUN_00401000();
  puStack_58 = (uint *)0x78a7fa;
  iVar5 = FUN_00b31c00();
  puStack_58 = (uint *)((iVar5 + iVar6) / 1000 + 2);
  if (0xb < (int)puStack_58) {
    puStack_58 = (uint *)0xb;
  }
  if (piVar3[0xd] < 1000) {
    puStack_58 = (uint *)0x1;
  }
  puStack_5c = (uint *)0x78a836;
  (**(code **)(**(int **)(in_ECX + 0xc4) + 0x48))();
  if ((piVar3[0x1d] == 0) || (*(char *)(piVar3[0x1d] + 0x164) == '\0')) {
    iVar6 = piVar3[0x10];
  }
  else {
    iVar6 = 0;
  }
  local_14 = (float)iVar6 / 1000.0;
  puStack_5c = (uint *)0x0;
  uStack_64._4_4_ = &local_18;
  uStack_64._0_4_ = 0x78a877;
  piVar7 = (int *)(**(code **)(*piVar3 + 0x34))();
  fVar10 = (float)*piVar7 / 1000.0;
  if ((float)*piVar7 / 1000.0 < local_14) {
    fVar10 = local_14;
  }
  uStack_64._0_4_ = (int)((local_14 * 100.0) / fVar10);
  uStack_68 = 0x78a8d7;
  (**(code **)(**(int **)(in_ECX + 200) + 0x48))();
  local_14 = (float)piVar3[0xf] / 1000.0;
  uStack_68 = 0;
  ppuStack_6c = &local_18;
  iStack_70 = 0x78a903;
  piVar7 = (int *)(**(code **)(*piVar3 + 0x30))();
  fVar10 = (float)*piVar7 / 1000.0;
  if ((float)*piVar7 / 1000.0 < local_14) {
    fVar10 = local_14;
  }
  iStack_70 = (int)((local_14 * 100.0) / fVar10);
  uStack_74 = 0x78a966;
  (**(code **)(**(int **)(in_ECX + 0xcc) + 0x48))();
  iVar6 = piVar3[0xc];
  if (iVar6 == 0) {
    uStack_74 = 0x78aa9c;
    (**(code **)(**(int **)(in_ECX + 0xd0) + 0x104))();
    uStack_74 = 0;
    uStack_78 = 0x78aaab;
    (**(code **)(**(int **)(in_ECX + 0xa4) + 0x48))();
    pcVar9 = *(code **)(**(int **)(in_ECX + 0xa4) + 0x38);
  }
  else {
    uStack_74 = *(undefined4 *)(*(int *)(iVar6 + 0x68) + 0x38);
    uStack_78 = 0x78a985;
    (**(code **)(**(int **)(in_ECX + 0xa4) + 0x48))();
    uStack_78 = 0;
    uStack_80 = CONCAT44(iVar6,0x78a98d);
    iVar6 = FUN_00965870();
    uStack_78 = 0;
    uStack_80 = CONCAT44(0x78a99e,(undefined4)uStack_80);
    iVar5 = FUN_00965930();
    uStack_28 = DAT_00f092fc;
    local_24 = DAT_00f092fc;
    uVar8 = 1;
    if (iVar6 * 1000 < 1) {
      uStack_28 = DAT_00f17a20;
      local_24 = DAT_00f17a20;
LAB_0078a9e6:
      uVar8 = 0;
    }
    else if (iVar6 * 1000 < iVar5 * 1000) {
      local_24 = DAT_00f141cc;
      goto LAB_0078a9e6;
    }
    local_2c = DAT_00f092fc;
    uStack_88 = CONCAT44(uStack_28,DAT_00f092fc);
    uStack_80 = CONCAT44(DAT_00f092fc,local_24);
    local_18 = (undefined1 *)&ppuStack_90;
    uStack_8c = 0x18d;
    ppuStack_90 = CColor::vftable;
    uStack_78 = CONCAT31(uStack_78._1_3_,uVar8);
    uStack_20 = local_2c;
    (**(code **)(**(int **)(in_ECX + 0xa4) + 0x68))();
    iVar6 = FUN_00967f50();
    if (iVar6 != 0) {
      (**(code **)(**(int **)(in_ECX + 0xd0) + 0x108))();
      (**(code **)(**(int **)(in_ECX + 0xd0) + 0x34))();
      iVar6 = FUN_00967f50();
      (**(code **)(**(int **)(in_ECX + 0xd0) + 0x48))
                (*(undefined4 *)(*(int *)(iVar6 + 0x30) + 0x128));
      goto LAB_0078aaba;
    }
    pcVar9 = *(code **)(**(int **)(in_ECX + 0xd0) + 0x104);
  }
  (*pcVar9)();
LAB_0078aaba:
  if (0xf < in_stack_00000024) {
    uStack_48 = param_4;
                    /* WARNING: Subroutine does not return */
    puStack_4c = (uint *)&UNK_0078aac9;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

