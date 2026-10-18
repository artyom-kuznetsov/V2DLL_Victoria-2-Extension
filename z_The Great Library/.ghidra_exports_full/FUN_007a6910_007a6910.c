// FUN_007a6910 @ 007a6910 body=[[007a6910, 007a6a13] [007a6a17, 007a6a59] [007a6a5f, 007a6a7a] [007a6a7e, 007a6aa9] [007a6aad, 007a6cb0] [007a6cb4, 007a6cf6] [007a6cfc, 007a6d17] [007a6d1b, 007a6d4a] [007a6d53, 007a6e25] [007a6e29, 007a6e5d] [007a6e61, 007a6e90] [007a6e99, 007a739f]]


void FUN_007a6910(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  bool bVar3;
  float10 fVar4;
  undefined1 auStack_24c [88];
  undefined4 uStack_1f4;
  undefined1 *puStack_1f0;
  uint *puStack_1ec;
  uint *puStack_1e8;
  uint *puStack_1e4;
  undefined4 uStack_1e0;
  undefined1 auStack_1dc [32];
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  uint local_194 [3];
  undefined4 uStack_188;
  uint local_184;
  uint local_180;
  undefined1 auStack_17c [4];
  int local_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  uint local_164 [4];
  uint local_154;
  uint local_150;
  uint uStack_14c;
  uint local_148 [3];
  undefined4 uStack_13c;
  uint uStack_138;
  uint uStack_134;
  int iStack_130;
  int local_12c;
  undefined1 *puStack_128;
  undefined1 local_124 [28];
  undefined1 local_108 [76];
  undefined1 local_bc [164];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8928c;
  pvStack_14 = ExceptionList;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x3a8) + 0x4c);
  if (iVar1 == 1) {
    local_1b0 = 0xf00e178b0;
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = local_164[0] & 0xffffff00;
    local_1b8 = CONCAT44(0x7a696f,(undefined4)local_1b8);
    ExceptionList = &pvStack_14;
    FUN_00409350();
    local_c = 0;
    local_1b0 = 0x1100e178d8;
    local_180 = 0xf;
    local_184 = 0;
    local_194[0] = local_194[0] & 0xffffff00;
    local_1b8 = CONCAT44(0x7a6993,(undefined4)local_1b8);
    FUN_00409350();
    local_1b0 = CONCAT44(local_194,&local_178);
    local_c._0_1_ = 1;
    local_1b8 = CONCAT44(0x7a69aa,(undefined4)local_1b8);
    FUN_009a8ee0();
    local_c._0_1_ = 2;
    local_1b0 = CONCAT44(0x7a69b9,(undefined1 *)local_1b0);
    iVar1 = FUN_00475500();
    local_1b8 = *(undefined8 *)(iVar1 + 0x6c);
    local_1b0 = *(undefined8 *)(iVar1 + 0x74);
    uStack_1bc = 0x7a69dc;
    FUN_009a9880();
    local_c = CONCAT31(local_c._1_3_,3);
    local_1b0._4_4_ = local_164;
    local_1b0._0_4_ = (undefined1 *)0x7a69f8;
    (**(code **)(**(int **)(in_ECX + 0x394) + 0x38))();
    local_1b0._0_4_ = (undefined1 *)0x7a69ff;
    FUN_009e7500();
    if (0xf < uStack_138) {
      local_1b0 = CONCAT44(local_1b0._4_4_,uStack_14c);
      local_1b8 = CONCAT44(&UNK_007a6a14,(undefined4)local_1b8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_138 = 0xf;
    uStack_13c = 0;
    uStack_14c = uStack_14c & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
    local_1b0._0_4_ = (undefined1 *)0x7a6a3d;
    FUN_009adb70();
    if (local_178 != 0) {
      local_1b0._0_4_ = (undefined1 *)0x7a6a50;
      FUN_009e6a80();
      local_1b0 = CONCAT44(local_1b0._4_4_,local_178);
      local_1b8 = CONCAT44(&UNK_007a6a5a,(undefined4)local_1b8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_178 = 0;
    iStack_174 = 0;
    uStack_170 = 0;
    if (0xf < local_184) {
      local_1b0 = ZEXT48(local_1b0._4_4_) << 0x20;
      local_1b8 = CONCAT44(&UNK_007a6a7b,(undefined4)local_1b8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    local_184 = 0xf;
    uStack_188 = 0;
    if (0xf < local_154) {
      local_1b0 = CONCAT44(local_1b0._4_4_,uStack_168);
      local_1b8 = CONCAT44(&UNK_007a6aaa,(undefined4)local_1b8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1b0._0_4_ = (undefined1 *)0x7a6abe;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x394) + 0x18) + 0x38))();
    local_1b0._0_4_ = (undefined1 *)0x7a6acf;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x390) + 0x18) + 0x38))();
    local_1b0._0_4_ = (undefined1 *)0x7a6ae0;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x398) + 0x18) + 0x34))();
    local_1b0._0_4_ = (undefined1 *)0x7a6ae7;
    FUN_007a8a10();
    local_1b0._0_4_ = (undefined1 *)0xffffffff;
    local_1b8 = (ulonglong)(*(int *)(in_ECX + 0x3a8) + 0x58);
    uStack_1bc = 0x7a6b02;
    FUN_00408ed0();
    local_1b0._0_4_ = (undefined1 *)0xffffffff;
    local_1b8 = (ulonglong)(*(int *)(in_ECX + 0x3a8) + 0x74);
    uStack_1bc = 0x7a6b1b;
    FUN_00408ed0();
    iVar1 = *(int *)(in_ECX + 0x3a8);
    local_1b0._0_4_ = (undefined1 *)0x7a6b29;
    FUN_00475500();
    local_1b0._0_4_ = (undefined1 *)0xffffffff;
    local_1b8 = (ulonglong)(iVar1 + 0x58);
    uStack_1bc = 0x7a6b39;
    FUN_00408ed0();
    if (*(undefined4 **)(in_ECX + 0x3c0) != (undefined4 *)0x0) {
      local_1b0._0_4_ = (undefined1 *)0x1;
      local_1b8 = CONCAT44(0x7a6b4b,(undefined4)local_1b8);
      (**(code **)**(undefined4 **)(in_ECX + 0x3c0))();
    }
    local_1b0._0_4_ = (undefined1 *)0x38;
    local_1b8 = CONCAT44(0x7a6b52,(undefined4)local_1b8);
    iStack_130 = FUN_00aae9af();
    puStack_10 = (undefined1 *)0x5;
    if (iStack_130 == 0) {
      uVar2 = 0;
    }
    else {
      local_1b0._0_4_ = (undefined1 *)0x0;
      local_1b8 = CONCAT44(in_ECX,iStack_130);
      uStack_1bc = 0x7a6b71;
      uVar2 = FUN_007a4d90();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    *(undefined4 *)(in_ECX + 0x3c0) = uVar2;
    local_1b0._0_4_ = (undefined1 *)0x7a6b93;
    fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x3d0) + 0x14))();
    *(double *)(in_ECX + 0x3c8) = (double)fVar4;
    local_1b0._0_4_ = (undefined1 *)0x7a6ba6;
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x100))();
    local_1b0._0_4_ = (undefined1 *)0xffffffff;
    local_1b8 = (ulonglong)(in_ECX + 0x3f8);
    uStack_1bc = 0x7a6bbc;
    FUN_00408ed0();
    local_1b0 = CONCAT44(local_1b0._4_4_,0x7a6bc9);
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x100))();
    local_1b0 = 0xffffffff00000000;
    local_1b8 = CONCAT44(in_ECX + 0x3dc,0x7a6bd9);
    FUN_00408ed0();
  }
  else if (iVar1 == 2) {
    local_1b0 = 0xf00e178b0;
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = (uint)local_164[0]._1_3_ << 8;
    local_1b8 = CONCAT44(0x7a6c08,(undefined4)local_1b8);
    ExceptionList = &pvStack_14;
    FUN_00409350();
    local_c = 6;
    local_1b0 = 0xd00e178ec;
    local_180 = 0xf;
    local_184 = 0;
    local_194[0] = local_194[0] & 0xffffff00;
    local_1b8 = CONCAT44(0x7a6c30,(undefined4)local_1b8);
    FUN_00409350();
    local_1b0 = CONCAT44(local_194,&local_178);
    local_c._0_1_ = 7;
    local_1b8 = CONCAT44(0x7a6c47,(undefined4)local_1b8);
    FUN_009a8ee0();
    local_c._0_1_ = 8;
    local_1b0 = CONCAT44(0x7a6c56,(undefined1 *)local_1b0);
    iVar1 = FUN_00475500();
    local_1b8 = *(undefined8 *)(iVar1 + 0x6c);
    local_1b0 = *(undefined8 *)(iVar1 + 0x74);
    uStack_1bc = 0x7a6c79;
    FUN_009a9880();
    local_c._0_1_ = 9;
    local_1b0 = CONCAT44(local_164,0x7a6c95);
    (**(code **)(**(int **)(in_ECX + 0x394) + 0x38))();
    local_1b0 = CONCAT44(0x7a6c9c,(undefined1 *)local_1b0);
    FUN_009e7500();
    if (0xf < uStack_134) {
      local_1b0 = CONCAT44(local_148[0],&UNK_007a6cb1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_134 = 0xf;
    uStack_138 = 0;
    local_148[0] = local_148[0] & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,10);
    local_1b0 = CONCAT44(0x7a6cda,(undefined1 *)local_1b0);
    FUN_009adb70();
    if (iStack_174 != 0) {
      local_1b0 = CONCAT44(0x7a6ced,(undefined1 *)local_1b0);
      FUN_009e6a80();
      local_1b0 = CONCAT44(iStack_174,&UNK_007a6cf7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    if (0xf < local_180) {
      local_1b0 = CONCAT44(local_194[0],&UNK_007a6d18);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    local_180 = 0xf;
    local_184 = 0;
    local_194[0] = local_194[0] & 0xffffff00;
    if (0xf < local_150) {
      local_1b0 = CONCAT44(local_164[0],&UNK_007a6d4b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (iVar1 == 3) {
    local_1b0 = 0xf00e178b0;
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = (uint)local_164[0]._1_3_ << 8;
    local_1b8 = CONCAT44(0x7a6d7d,(undefined4)local_1b8);
    ExceptionList = &pvStack_14;
    FUN_00409350();
    local_c = 0xb;
    local_1b0 = 0xd00e178fc;
    local_180 = 0xf;
    local_184 = 0;
    local_194[0] = local_194[0] & 0xffffff00;
    local_1b8 = CONCAT44(0x7a6da5,(undefined4)local_1b8);
    FUN_00409350();
    local_1b0 = CONCAT44(local_194,&local_178);
    local_c._0_1_ = 0xc;
    local_1b8 = CONCAT44(0x7a6dbc,(undefined4)local_1b8);
    FUN_009a8ee0();
    local_c._0_1_ = 0xd;
    local_1b0 = CONCAT44(0x7a6dcb,(undefined1 *)local_1b0);
    iVar1 = FUN_00475500();
    local_1b8 = *(undefined8 *)(iVar1 + 0x6c);
    local_1b0 = *(undefined8 *)(iVar1 + 0x74);
    uStack_1bc = 0x7a6dee;
    FUN_009a9880();
    local_c._0_1_ = 0xe;
    local_1b0 = CONCAT44(local_164,0x7a6e0a);
    (**(code **)(**(int **)(in_ECX + 0x394) + 0x38))();
    local_1b0 = CONCAT44(0x7a6e11,(undefined1 *)local_1b0);
    FUN_009e7500();
    if (0xf < uStack_134) {
      local_1b0 = CONCAT44(local_148[0],&UNK_007a6e26);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_134 = 0xf;
    uStack_138 = 0;
    local_148[0] = local_148[0] & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0xc);
    local_1b0 = CONCAT44(&local_178,0x7a6e4e);
    FUN_009a9740();
    if (0xf < local_180) {
      local_1b0 = CONCAT44(local_194[0],&UNK_007a6e5e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    local_180 = 0xf;
    local_184 = 0;
    local_194[0] = local_194[0] & 0xffffff00;
    if (0xf < local_150) {
      local_1b0 = CONCAT44(local_164[0],&UNK_007a6e91);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (iVar1 == 4) {
    local_1b0 = 0x260007a6eac;
    ExceptionList = &pvStack_14;
    local_12c = FUN_00aae9af();
    local_c = 0xf;
    bVar3 = local_12c == 0;
    if (bVar3) {
      uVar2 = 0;
    }
    else {
      local_1b0 = CONCAT44(0x7a6ed5,(undefined1 *)local_1b0);
      FUN_009885d0();
      local_c = CONCAT31(local_c._1_3_,0x10);
      local_1b0 = CONCAT44(0x7a6ef3,(undefined1 *)local_1b0);
      FUN_009885d0();
      local_c = 0x11;
      local_1b0 = CONCAT44(0x7a6f14,(undefined1 *)local_1b0);
      FUN_009885d0();
      local_c = 0x12;
      local_1b0 = 0x7a6f36;
      (**(code **)(**(int **)(in_ECX + 0x10) + 0x100))();
      puStack_128 = auStack_1dc;
      uStack_1e0 = 0x7a6f4a;
      FUN_00648c30();
      uStack_1e0 = 1;
      puStack_1e4 = local_194;
      puStack_1e8 = local_164;
      puStack_1ec = local_148;
      puStack_1f0 = local_bc;
      uStack_1f4 = 0x7a6f6e;
      FUN_009f8290();
      puStack_128 = auStack_24c;
      local_c = 0x13;
      FUN_00648af0(auStack_24c);
      uVar2 = FUN_009ae5f0(local_12c);
    }
    *(undefined4 *)(in_ECX + 0x3a0) = uVar2;
    if (!bVar3) {
      local_1b0 = CONCAT44(0x7a6fc6,(undefined1 *)local_1b0);
      FUN_00648a60();
      local_1b0 = CONCAT44(0x7a6fdb,(undefined1 *)local_1b0);
      FUN_00408ad0();
      local_1b0 = CONCAT44(0x7a6ff0,(undefined1 *)local_1b0);
      FUN_00408ad0();
    }
    local_c = 0xffffffff;
    if (!bVar3) {
      local_1b0 = CONCAT44(0x7a700b,(undefined1 *)local_1b0);
      FUN_00408ad0();
    }
    *(undefined1 *)(*(int *)(in_ECX + 0x3a0) + 0x1bc) = 0;
    uVar2 = *(undefined4 *)(in_ECX + 0x3a0);
    local_1b0 = CONCAT44(0x7a702b,(undefined1 *)local_1b0);
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x100))();
    *(undefined4 *)(iVar1 + 0x130) = uVar2;
    *(undefined1 *)(in_ECX + 0x3c4) = 1;
    local_1b0 = CONCAT44(0x7a7046,(undefined1 *)local_1b0);
    FUN_009885d0();
    local_c = 0x18;
    local_1b0 = CONCAT44(0x7a705f,(undefined1 *)local_1b0);
    uVar2 = FUN_009885d0();
    local_1b0 = CONCAT44(uVar2,&local_178);
    local_c._0_1_ = 0x19;
    local_1b8 = CONCAT44(0x7a7072,(undefined4)local_1b8);
    FUN_009a8ee0();
    local_c._0_1_ = 0x1a;
    local_1b0 = CONCAT44(0x7a7081,(undefined1 *)local_1b0);
    iVar1 = FUN_00475500();
    local_1b8 = *(undefined8 *)(iVar1 + 0x6c);
    local_1b0 = *(undefined8 *)(iVar1 + 0x74);
    uStack_1bc = 0x7a70a4;
    FUN_009a9880();
    local_c = CONCAT31(local_c._1_3_,0x1b);
    local_1b0._4_4_ = local_148;
    local_1b0._0_4_ = (undefined1 *)0x7a70c0;
    (**(code **)(**(int **)(in_ECX + 0x394) + 0x38))();
    local_1b0._0_4_ = (undefined1 *)0x7a70c7;
    FUN_009e7500();
    local_1b0._0_4_ = (undefined1 *)0x7a70d0;
    FUN_00408ad0();
    local_1b0._0_4_ = auStack_17c;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x19);
    local_1b8 = CONCAT44(0x7a70e2,(undefined4)local_1b8);
    FUN_009a9740();
    local_1b0._0_4_ = (undefined1 *)0x7a70eb;
    FUN_00408ad0();
    puStack_10 = (undefined1 *)0xffffffff;
    local_1b0._0_4_ = (undefined1 *)0x7a70fe;
    FUN_00408ad0();
    local_1b0._0_4_ = (undefined1 *)0x7a710f;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x394) + 0x18) + 0x38))();
    local_1b0._0_4_ = (undefined1 *)0x7a7120;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x390) + 0x18) + 0x38))();
    local_1b0 = CONCAT44(local_1b0._4_4_,0x7a7131);
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x398) + 0x18) + 0x34))();
    local_1b0 = CONCAT44(0x7a7138,(undefined1 *)local_1b0);
    FUN_007a8a10();
    local_1b0 = 0x400e17918;
    local_1b8 = CONCAT44(0x7a714a,(undefined4)local_1b8);
    FUN_00409350();
    local_1b0 = 0x400e17918;
    local_1b8 = CONCAT44(0x7a715c,(undefined4)local_1b8);
    FUN_00409350();
    if (*(undefined4 **)(in_ECX + 0x3c0) != (undefined4 *)0x0) {
      local_1b0 = 0x1007a716e;
      (**(code **)**(undefined4 **)(in_ECX + 0x3c0))();
    }
    local_1b0 = 0x38007a7175;
    puStack_128 = (undefined1 *)FUN_00aae9af();
    local_c = 0x1c;
    if (puStack_128 == (undefined1 *)0x0) {
      local_c = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x3c0) = 0;
    }
    else {
      local_1b0 = CONCAT44(1,in_ECX);
      local_1b8 = CONCAT44(puStack_128,0x7a7197);
      uVar2 = FUN_007a4d90();
      local_c = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x3c0) = uVar2;
    }
  }
  else {
    if (iVar1 == 5) {
      local_1b0 = CONCAT44(0x7a71d4,(undefined1 *)local_1b0);
      ExceptionList = &pvStack_14;
      FUN_009885d0();
      local_c = 0x1d;
      local_1b0 = CONCAT44(0x7a71ed,(undefined1 *)local_1b0);
      uVar2 = FUN_009885d0();
      local_1b0 = CONCAT44(uVar2,&local_178);
      local_c._0_1_ = 0x1e;
      local_1b8 = CONCAT44(0x7a7200,(undefined4)local_1b8);
      FUN_009a8ee0();
      local_c._0_1_ = 0x1f;
      local_1b0 = CONCAT44(0x7a720f,(undefined1 *)local_1b0);
      iVar1 = FUN_00475500();
      local_1b8 = *(undefined8 *)(iVar1 + 0x6c);
      local_1b0 = *(undefined8 *)(iVar1 + 0x74);
      uStack_1bc = 0x7a7232;
      FUN_009a9880();
      local_c._0_1_ = 0x20;
      local_1b0 = CONCAT44(local_148,0x7a724e);
      (**(code **)(**(int **)(in_ECX + 0x394) + 0x38))();
      local_1b0 = CONCAT44(0x7a7255,(undefined1 *)local_1b0);
      FUN_009e7500();
      local_1b0 = CONCAT44(0x7a725e,(undefined1 *)local_1b0);
      FUN_00408ad0();
      local_c = CONCAT31(local_c._1_3_,0x1e);
      local_1b0 = CONCAT44(&local_178,0x7a7270);
      FUN_009a9740();
      local_1b0 = CONCAT44(0x7a7279,(undefined1 *)local_1b0);
      FUN_00408ad0();
    }
    else {
      ExceptionList = &pvStack_14;
      if (iVar1 != 6) goto LAB_007a736d;
      local_1b0 = CONCAT44(0x7a729c,(undefined1 *)local_1b0);
      ExceptionList = &pvStack_14;
      FUN_009885d0();
      local_c = 0x21;
      local_1b0 = CONCAT44(0x7a72b8,(undefined1 *)local_1b0);
      uVar2 = FUN_009885d0();
      local_1b0 = CONCAT44(uVar2,local_108);
      local_c._0_1_ = 0x22;
      local_1b8 = CONCAT44(0x7a72ce,(undefined4)local_1b8);
      FUN_009a8ee0();
      local_c._0_1_ = 0x23;
      local_1b0 = CONCAT44(0x7a72dd,(undefined1 *)local_1b0);
      iVar1 = FUN_00475500();
      local_1b8 = *(undefined8 *)(iVar1 + 0x6c);
      local_1b0 = *(undefined8 *)(iVar1 + 0x74);
      uStack_1bc = 0x7a7303;
      FUN_009a9880();
      local_c._0_1_ = 0x24;
      local_1b0 = CONCAT44(local_124,0x7a7322);
      (**(code **)(**(int **)(in_ECX + 0x394) + 0x38))();
      local_1b0 = CONCAT44(0x7a7329,(undefined1 *)local_1b0);
      FUN_009e7500();
      local_1b0 = CONCAT44(0x7a7335,(undefined1 *)local_1b0);
      FUN_00408ad0();
      local_c = CONCAT31(local_c._1_3_,0x22);
      local_1b0 = CONCAT44(local_108,0x7a734a);
      FUN_009a9740();
      local_1b0 = CONCAT44(0x7a7356,(undefined1 *)local_1b0);
      FUN_00408ad0();
    }
    local_c = 0xffffffff;
    local_1b0 = CONCAT44(0x7a736d,(undefined1 *)local_1b0);
    FUN_00408ad0();
  }
LAB_007a736d:
  local_1b0 = CONCAT44(0x7a737c,(undefined1 *)local_1b0);
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x100))();
  local_1b0 = 0x7a738b;
  (**(code **)(**(int **)(iVar1 + 0xe4) + 0x10))();
  ExceptionList = pvStack_18;
  return;
}

