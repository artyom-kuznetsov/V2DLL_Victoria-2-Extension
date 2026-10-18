// FUN_005e1f90 @ 005e1f90 body=[[005e1f90, 005e2806] [005e280a, 005e2826] [005e282a, 005e284c] [005e2850, 005e286d]]


void FUN_005e1f90(void)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int in_ECX;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_1e0 [108];
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int *local_14c;
  undefined4 uStack_144;
  int *piStack_138;
  int local_134;
  undefined1 auStack_130 [28];
  uint auStack_114 [4];
  undefined4 uStack_104;
  uint uStack_100;
  uint auStack_f8 [4];
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined1 auStack_dc [28];
  uint auStack_c0 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined1 auStack_a4 [24];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [60];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar10 = DAT_01258a98;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9f2dd;
  local_14 = ExceptionList;
  iVar4 = DAT_01258a98;
  if (0x1268 < *(uint *)(in_ECX + 100)) {
    iVar4 = DAT_01258a94;
  }
  if (iVar4 == 0) {
    return;
  }
  uStack_168 = CONCAT44(0x5e1ff4,(undefined4)uStack_168);
  ExceptionList = &local_14;
  iVar4 = FUN_009c1d40();
  if (iVar4 == 0) {
    ExceptionList = local_14;
    return;
  }
  piVar1 = (int *)(iVar4 + -8);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_14;
    return;
  }
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (iVar10 != 0) {
      uStack_168 = CONCAT44(0x5e2048,(undefined4)uStack_168);
      local_14c = (int *)FUN_009c1d40();
      goto LAB_005e2056;
    }
  }
  else if (DAT_01258a94 != 0) {
    uStack_168 = CONCAT44(0x5e2031,(undefined4)uStack_168);
    local_14c = (int *)FUN_009c1d40();
    goto LAB_005e2056;
  }
  local_14c = (int *)0x0;
LAB_005e2056:
  *(int **)(in_ECX + 0x3c) = local_14c;
  uStack_144 = (undefined1 *)((uint)DAT_01258a66 << 0x18);
  puVar7 = uStack_144;
  uStack_144._3_1_ = DAT_01258a66;
  DAT_01258a66 = 1;
  if (local_14c != (int *)0x0) {
    uStack_168 = CONCAT44(local_14c,0x5e207a);
    cVar3 = FUN_00513f30();
    if (cVar3 != '\0') {
      local_134 = local_14c[0x1d];
      uStack_168 = CONCAT44(local_14c,0x5e208f);
      FUN_005cb230();
      if (*(int *)(iVar4 + 0x38) == 0) {
        *(undefined1 *)(iVar4 + 0xb4) = 1;
      }
      uStack_168 = CONCAT44(local_14c,0x5e20a4);
      FUN_005cb1d0();
      uStack_168 = CONCAT44(0x5e20b1,(undefined4)uStack_168);
      cVar3 = (**(code **)(**(int **)(iVar4 + 0xd0) + 0x20))();
      if ((cVar3 == '\0') &&
         (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0xbc) * 4) + 0x658) !=
          '\0')) {
        uStack_168 = CONCAT44(0x5e20e1,(undefined4)uStack_168);
        FUN_005d5b10();
      }
      uStack_144 = puVar7;
      if (*(int *)(iVar4 + 0xbc) == *(int *)(DAT_012588e8 + 0xb60)) {
        uStack_168 = CONCAT44(*(undefined4 *)
                               (*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0xbc) * 4),0x5e211a);
        puVar5 = (undefined4 *)FUN_005061e0();
        uStack_168 = CONCAT44(0x5e212a,(undefined4)uStack_168);
        FUN_009885d0();
        uStack_c = 0;
        uStack_168._4_4_ = auStack_dc;
        uStack_168._0_4_ = 0x5e2148;
        uStack_168._0_4_ = (**(code **)(*local_14c + 0x20))();
        uStack_170 = CONCAT44(auStack_130,auStack_8c);
        puStack_10._0_1_ = 1;
        uStack_174 = 0x5e2161;
        uVar6 = FUN_00424aa0();
        puStack_10._0_1_ = 2;
        iVar10 = puVar5[1];
        uStack_168._0_4_ = 0x44;
        uStack_170 = CONCAT44(0x5e217b,(undefined4)uStack_170);
        puVar7 = (undefined1 *)FUN_00aae9af();
        puStack_10._0_1_ = 3;
        uVar2 = puStack_10._0_1_;
        puStack_10._0_1_ = 3;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          puStack_10._0_1_ = uVar2;
        }
        else {
          uStack_168._0_4_ = 0xffffffff;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          uStack_170 = (ulonglong)uVar6;
          *puVar7 = 0;
          uStack_174 = 0x5e21b1;
          FUN_00408ed0();
          puStack_10._0_1_ = 4;
          uStack_168._0_4_ = 0xffffffff;
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          uStack_170 = (ulonglong)(uVar6 + 0x1c);
          puVar7[0x1c] = 0;
          uStack_174 = 0x5e21de;
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar10;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar9 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar10 + 0x3c) = puVar7;
        }
        uStack_168._0_4_ = 0x5e221b;
        FUN_00a39a80();
        uStack_168._0_4_ = 0x5e2227;
        FUN_00408ad0();
        puStack_10 = (undefined1 *)0xffffffff;
        uStack_168._0_4_ = 0x5e223b;
        FUN_00408ad0();
        uStack_168._0_4_ = 0x5e2249;
        FUN_009885d0();
        puStack_10 = (undefined1 *)0x5;
        uStack_168._0_4_ = 0x5e225f;
        uStack_168._0_4_ = (**(code **)(*piStack_138 + 0x20))();
        uStack_170 = CONCAT44(&local_134,auStack_8c);
        uStack_174 = 0x5e2270;
        uVar6 = FUN_00424aa0();
        puStack_10._0_1_ = 6;
        iVar10 = puVar5[1];
        uStack_168._0_4_ = 0x44;
        uStack_170 = CONCAT44(0x5e228a,(undefined4)uStack_170);
        uStack_144 = (undefined1 *)FUN_00aae9af();
        puStack_10._0_1_ = 7;
        uVar2 = puStack_10._0_1_;
        puStack_10._0_1_ = 7;
        if (uStack_144 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          puStack_10._0_1_ = uVar2;
        }
        else {
          uStack_168._0_4_ = 0xffffffff;
          *(undefined4 *)(uStack_144 + 0x14) = 0xf;
          *(undefined4 *)(uStack_144 + 0x10) = 0;
          uStack_170 = (ulonglong)uVar6;
          *uStack_144 = 0;
          uStack_174 = 0x5e22c0;
          FUN_00408ed0();
          uStack_168._0_4_ = 0xffffffff;
          puStack_10._0_1_ = 8;
          *(undefined4 *)(uStack_144 + 0x30) = 0xf;
          *(undefined4 *)(uStack_144 + 0x2c) = 0;
          uStack_170 = (ulonglong)(uVar6 + 0x1c);
          uStack_144[0x1c] = 0;
          uStack_174 = 0x5e22ed;
          FUN_00408ed0();
          *(int *)(uStack_144 + 0x38) = iVar10;
          *(undefined4 *)(uStack_144 + 0x3c) = 0;
          uStack_144[0x40] = 0;
          puVar7 = uStack_144;
        }
        iVar9 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar10 + 0x3c) = puVar7;
        }
        uStack_168._0_4_ = 0x5e232a;
        FUN_00a39a80();
        puStack_10 = (undefined1 *)0xffffffff;
        uStack_168._0_4_ = 0x5e233e;
        FUN_00408ad0();
        uStack_168._0_4_ = 0x5e234c;
        FUN_009885d0();
        puStack_10 = (undefined1 *)0x9;
        uStack_168 = CONCAT44(uStack_168._4_4_,0x5e2360);
        uVar8 = (**(code **)(*piVar1 + 0x20))();
        uStack_168 = CONCAT44(uVar8,&local_134);
        uStack_170 = CONCAT44(auStack_88,0x5e2371);
        iVar9 = FUN_00424aa0();
        uStack_c._0_1_ = 10;
        iVar10 = puVar5[1];
        uStack_168 = 0x44005e238b;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0xb;
        uVar2 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0xb;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar2;
        }
        else {
          uStack_168 = 0xffffffff00000000;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_170 = CONCAT44(iVar9,0x5e23c1);
          FUN_00408ed0();
          uStack_c._0_1_ = 0xc;
          uStack_168 = 0xffffffff00000000;
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_170 = CONCAT44(iVar9 + 0x1c,0x5e23ee);
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar10;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar9 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar10 + 0x3c) = puVar7;
        }
        uStack_168 = CONCAT44(0x5e242b,(undefined4)uStack_168);
        FUN_00a39a80();
        uStack_c = 0xffffffff;
        uStack_168 = CONCAT44(0x5e243f,(undefined4)uStack_168);
        FUN_00408ad0();
        uStack_168 = CONCAT44(0x5e2450,(undefined4)uStack_168);
        FUN_009885d0();
        uStack_c = 0xd;
        uStack_168 = CONCAT44(0x5e246c,(undefined4)uStack_168);
        FUN_009885d0();
        uStack_168 = CONCAT44(auStack_dc,auStack_130);
        uStack_c._0_1_ = 0xe;
        uStack_170 = CONCAT44(0x5e2486,(undefined4)uStack_170);
        FUN_009a8ee0();
        uStack_c._0_1_ = 0xf;
        uStack_168 = CONCAT44(0x5e2497,(undefined4)uStack_168);
        iVar10 = FUN_00475500();
        uStack_170 = *(undefined8 *)(iVar10 + 0x6c);
        uStack_168 = *(undefined8 *)(iVar10 + 0x74);
        uStack_174 = 0x5e24bf;
        uVar8 = FUN_009a9880();
        uStack_168 = CONCAT44(uVar8,auStack_a4);
        uStack_c._0_1_ = 0x10;
        uStack_170 = CONCAT44(auStack_50,0x5e24dd);
        iVar9 = FUN_00424aa0();
        uStack_c._0_1_ = 0x11;
        iVar10 = puVar5[1];
        uStack_168 = 0x44005e24f7;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x12;
        uVar2 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x12;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar2;
        }
        else {
          uStack_168 = 0xffffffff00000000;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_170 = CONCAT44(iVar9,0x5e252d);
          FUN_00408ed0();
          uStack_c._0_1_ = 0x13;
          uStack_168 = 0xffffffff00000000;
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_170 = CONCAT44(iVar9 + 0x1c,0x5e255a);
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar10;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar9 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar10 + 0x3c) = puVar7;
        }
        uStack_168 = CONCAT44(0x5e2597,(undefined4)uStack_168);
        FUN_00a39a80();
        uStack_168 = CONCAT44(0x5e25a3,(undefined4)uStack_168);
        FUN_00408ad0();
        uStack_c = CONCAT31(uStack_c._1_3_,0xe);
        uStack_168 = CONCAT44(auStack_130,0x5e25b5);
        FUN_009a9740();
        uStack_168 = CONCAT44(0x5e25c1,(undefined4)uStack_168);
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        uStack_168 = CONCAT44(0x5e25d8,(undefined4)uStack_168);
        FUN_00408ad0();
        uStack_168 = CONCAT44(0x5e25e9,(undefined4)uStack_168);
        FUN_009885d0();
        uStack_c = 0x14;
        uStack_168 = CONCAT44(0x5e2605,(undefined4)uStack_168);
        FUN_009885d0();
        uStack_c._0_1_ = 0x15;
        uVar16 = 0;
        uVar8 = *(undefined4 *)(iVar4 + 0xbc);
        uVar12 = *(undefined4 *)(iVar4 + 0xd4);
        uVar15 = 0x2d2d2d;
        uVar14 = *(undefined4 *)(iVar4 + 0xb8);
        uVar13 = 0;
        puVar7 = auStack_a4;
        FUN_006a4f40(puVar5,uVar12,puVar7,0,uVar14,uVar8,0x2d2d2d,0);
        uVar11 = FUN_006a55b0();
        FUN_006a7ed0(auStack_1e0,uVar11,puVar5,uVar12,puVar7,uVar13,uVar14,uVar8,uVar15,uVar16);
        uStack_c._0_1_ = 0x16;
        FUN_006a4f40();
        uVar8 = FUN_006a4f40();
        uStack_c = CONCAT31(uStack_c._1_3_,0x15);
        FUN_004e9540(uVar8);
        uStack_168 = CONCAT44(0x5e26be,(undefined4)uStack_168);
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        uStack_168 = CONCAT44(0x5e26d5,(undefined4)uStack_168);
        FUN_00408ad0();
      }
      iVar10 = local_134;
      DAT_01258a66 = uStack_144._3_1_;
      uStack_168 = CONCAT44(*(undefined4 *)(local_134 + 0xdc),0x5e26f5);
      FUN_005cb2c0();
      uStack_168 = CONCAT44(*(undefined4 *)(iVar4 + 0xd4),0x5e2703);
      FUN_005cb2c0();
      if (*(int *)(iVar4 + 0x38) == 1) {
        iVar9 = *(int *)(iVar10 + 0xb0);
        if (iVar9 < *(int *)(iVar4 + 0xa8)) {
          *(int *)(iVar4 + 0xa8) = iVar9;
        }
        uStack_168 = CONCAT44(DAT_012588e8 + 0xab4,0x5e2735);
        FUN_005b57a0();
      }
      uStack_168 = CONCAT44(iVar10,0x5e273d);
      FUN_005c68c0();
      uStack_168 = CONCAT44(piVar1,0x5e2743);
      FUN_005c68c0();
      uStack_168 = 0xded94d;
      uStack_ac = 0xf;
      uStack_b0 = 0;
      auStack_c0[0] = auStack_c0[0] & 0xffffff00;
      uStack_170 = CONCAT44(0x5e2770,(undefined4)uStack_170);
      FUN_00409350();
      uStack_c = 0x19;
      uStack_168 = 0xded94d;
      uStack_e4 = 0xf;
      uStack_e8 = 0;
      auStack_f8[0] = auStack_f8[0] & 0xffffff00;
      uStack_170 = CONCAT44(0x5e279d,(undefined4)uStack_170);
      FUN_00409350();
      uStack_c._0_1_ = 0x1a;
      uStack_168 = 0x1000e03368;
      uStack_100 = 0xf;
      uStack_104 = 0;
      auStack_114[0] = auStack_114[0] & 0xffffff00;
      uStack_170 = CONCAT44(0x5e27c6,(undefined4)uStack_170);
      FUN_00409350();
      uStack_c = CONCAT31(uStack_c._1_3_,0x1b);
      uStack_168 = ZEXT48(auStack_c0);
      uStack_170 = CONCAT44(auStack_f8,auStack_114);
      uStack_174 = 0x5e27f7;
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))();
      if (0xf < uStack_100) {
        uStack_168 = CONCAT44(auStack_114[0],&UNK_005e2807);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_100 = 0xf;
      uStack_104 = 0;
      auStack_114[0] = auStack_114[0] & 0xffffff00;
      if (0xf < uStack_e4) {
        uStack_168 = CONCAT44(auStack_f8[0],&UNK_005e2827);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_e4 = 0xf;
      uStack_e8 = 0;
      auStack_f8[0] = auStack_f8[0] & 0xffffff00;
      if (0xf < uStack_ac) {
        uStack_168 = CONCAT44(auStack_c0[0],&UNK_005e284d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  DAT_01258a66 = uStack_144._3_1_;
  ExceptionList = local_14;
  return;
}

