// FUN_00697510 @ 00697510 body=[[00697510, 00697d8f] [00697d93, 00697e26] [00697e2a, 00697ef8] [00697efc, 00697f12]]


void FUN_00697510(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined1 auStack_2b4 [32];
  undefined4 uStack_294;
  uint uStack_290;
  undefined1 auStack_28c [24];
  undefined4 uStack_274;
  undefined1 auStack_270 [28];
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined1 *puStack_244;
  uint *puStack_240;
  undefined1 auStack_23c [20];
  undefined4 uStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 *puStack_214;
  uint *puStack_210;
  undefined1 *puStack_20c;
  undefined8 uStack_208;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [8];
  uint auStack_1b8 [4];
  undefined1 *puStack_1a8;
  uint uStack_1a4;
  undefined1 auStack_1a0 [20];
  int iStack_18c;
  undefined1 *puStack_188;
  uint auStack_15c [4];
  undefined4 uStack_14c;
  uint uStack_148;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b6f1a2;
  pvStack_4c = ExceptionList;
  local_1c8 = 0;
  uStack_208 = CONCAT44(0x69754a,(undefined4)uStack_208);
  ExceptionList = &pvStack_4c;
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0xd8) + 0x14))();
  if ((((float10)5.0 < fVar6) && (*(char *)(param_1 + 0xe0) == '\0')) &&
     (*(char *)(*(int *)(param_1 + 0xdc) + 0x34) == '\0')) {
    uStack_208 = CONCAT44(0x697586,(undefined4)uStack_208);
    (**(code **)(**(int **)(param_1 + 0xd8) + 8))();
    uStack_208 = 0x4014000000000000;
    puStack_20c = (undefined1 *)0x6975a6;
    local_1c8 = (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 0x38) + 0x24))();
    puStack_20c = (undefined1 *)0x24;
    puStack_210 = (uint *)0x6975b1;
    uStack_1c4 = FUN_00aae9af();
    pvStack_4c = (void *)0x0;
    if (uStack_1c4 == 0) {
      puStack_20c = (undefined1 *)0x0;
    }
    else {
      puStack_20c = (undefined1 *)0x6975d7;
      FUN_009885d0();
      puStack_210 = (uint *)auStack_1c0;
      pvStack_4c = (void *)CONCAT31(pvStack_4c._1_3_,1);
      puStack_214 = (undefined4 *)0x6975f4;
      puStack_20c = auStack_1a0;
      uStack_1a4 = FUN_009a8ee0();
      pvStack_4c = (void *)0x2;
      puStack_20c = (undefined1 *)0x697610;
      iVar4 = FUN_00475500();
      uStack_218 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
      puStack_214 = (undefined4 *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
      puStack_210 = (uint *)*(undefined8 *)(iVar4 + 0x74);
      puStack_20c = (undefined1 *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
      uStack_21c = 0x697638;
      FUN_009a9880();
      pvStack_4c = (void *)0x3;
      uStack_1d0 = 7;
      puStack_20c = (undefined1 *)0x697652;
      puStack_20c = (undefined1 *)FUN_009f23c0();
    }
    pvStack_4c = (void *)0x6;
    puStack_210 = (uint *)0x69766c;
    FUN_00696b10();
    if ((uStack_1d0 & 4) != 0) {
      uStack_1d0 = uStack_1d0 & 0xfffffffb;
      puStack_20c = (undefined1 *)0x697684;
      FUN_00408ad0();
    }
    pvStack_4c = (void *)0x4;
    if ((uStack_1d0 & 2) != 0) {
      uStack_1d0 = uStack_1d0 & 0xfffffffd;
      puStack_20c = auStack_1c0;
      puStack_210 = (uint *)0x6976a5;
      FUN_009a9740();
    }
    pvStack_4c = (void *)0xffffffff;
    if ((uStack_1d0 & 1) != 0) {
      uStack_1d0 = uStack_1d0 & 0xfffffffe;
      puStack_20c = (undefined1 *)0x6976c5;
      FUN_00408ad0();
    }
    if ((local_1c8 == 6) &&
       (puStack_20c = *(undefined1 **)(param_1 + 0xdc), *(int *)((int)puStack_20c + 0x2c) != 0xe)) {
      puStack_210 = (uint *)0x6976ed;
      (**(code **)(**(int **)(param_1 + 0xc0) + 0x48))();
      puStack_210 = (uint *)0x24;
      puStack_214 = (undefined4 *)0x6976f4;
      local_1c8 = FUN_00aae9af();
      uStack_50 = 7;
      if (local_1c8 == 0) {
        puStack_210 = (uint *)0x0;
      }
      else {
        puStack_210 = (uint *)0x69771e;
        FUN_009885d0();
        puStack_214 = &uStack_1c4;
        uStack_50 = CONCAT31(uStack_50._1_3_,8);
        uStack_218 = 0x697738;
        puStack_210 = &uStack_1a4;
        FUN_009a8ee0();
        uStack_50 = 9;
        puStack_210 = (uint *)0x697751;
        iVar4 = FUN_00475500();
        uStack_21c = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
        uStack_218 = (undefined4)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
        puStack_214 = (undefined4 *)*(undefined8 *)(iVar4 + 0x74);
        puStack_210 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
        uStack_220 = 0x697779;
        FUN_009a9880();
        uStack_50 = 10;
        uStack_1d4 = uStack_1d4 | 0x38;
        puStack_210 = (uint *)0x697790;
        puStack_210 = (uint *)FUN_009f23c0();
      }
      uStack_50 = 0xd;
      puStack_214 = (undefined4 *)0x6977a7;
      FUN_00696b10();
      if ((uStack_1d4 & 0x20) != 0) {
        uStack_1d4 = uStack_1d4 & 0xffffffdf;
        puStack_210 = (uint *)0x6977bf;
        FUN_00408ad0();
      }
      uStack_50 = 0xb;
      if ((uStack_1d4 & 0x10) != 0) {
        uStack_1d4 = uStack_1d4 & 0xffffffef;
        puStack_210 = &uStack_1c4;
        puStack_214 = (undefined4 *)0x6977e0;
        FUN_009a9740();
      }
      uStack_50 = 0xffffffff;
      if ((uStack_1d4 & 8) != 0) {
        puStack_210 = (uint *)0x697800;
        FUN_00408ad0();
      }
      puStack_210 = (uint *)0x0;
      puStack_214 = (undefined4 *)0x0;
      uStack_218 = 0x697814;
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 0x38) + 8))();
      if ((cVar3 == '\0') || (*(int *)(*(int *)(param_1 + 0xdc) + 0x2c) == 9)) {
        if (*(int *)(*(int *)(param_1 + 0xdc) + 0x2c) == 9) {
          puStack_20c = (undefined1 *)0x24;
          puStack_210 = (uint *)0x697a54;
          uStack_1c4 = FUN_00aae9af();
          pvStack_4c = (void *)0x18;
          if (uStack_1c4 == 0) {
            puStack_20c = (undefined1 *)0x0;
          }
          else {
            puStack_20c = (undefined1 *)0x697a7e;
            FUN_009885d0();
            puStack_210 = (uint *)auStack_1c0;
            pvStack_4c = (void *)CONCAT31(pvStack_4c._1_3_,0x19);
            puStack_214 = (undefined4 *)0x697a9b;
            puStack_20c = auStack_1a0;
            local_1c8 = FUN_009a8ee0();
            pvStack_4c = (void *)0x1a;
            puStack_20c = (undefined1 *)0x697ab7;
            iVar4 = FUN_00475500();
            uStack_218 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
            puStack_214 = (undefined4 *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
            puStack_210 = (uint *)*(undefined8 *)(iVar4 + 0x74);
            puStack_20c = (undefined1 *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
            uStack_21c = 0x697adf;
            FUN_009a9880();
            pvStack_4c = (void *)0x1b;
            uStack_1d0 = uStack_1d0 | 0xe00;
            puStack_20c = (undefined1 *)0x697af9;
            puStack_20c = (undefined1 *)FUN_009f23c0();
          }
          pvStack_4c = (void *)0x1e;
          puStack_210 = (uint *)0x697b10;
          FUN_00696b10();
          if ((uStack_1d0 & 0x800) != 0) {
            uStack_1d0 = uStack_1d0 & 0xfffff7ff;
            puStack_20c = (undefined1 *)0x697b2e;
            FUN_00408ad0();
          }
          pvStack_4c = (void *)0x1c;
          if ((uStack_1d0 & 0x400) != 0) {
            uStack_1d0 = uStack_1d0 & 0xfffffbff;
            puStack_20c = auStack_1c0;
            puStack_210 = (uint *)0x697b55;
            FUN_009a9740();
          }
          pvStack_4c = (void *)0xffffffff;
          if ((uStack_1d0 & 0x200) != 0) {
            puStack_20c = (undefined1 *)0x697b7b;
            FUN_00408ad0();
          }
          *(undefined1 *)(param_1 + 0xe0) = 1;
        }
        else {
          puStack_20c = (undefined1 *)0xbb8;
          puStack_210 = (uint *)0x697b96;
          (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 0x38) + 0xc))();
          puStack_210 = (uint *)0x260;
          puStack_214 = (undefined4 *)0x697ba0;
          local_1c8 = FUN_00aae9af();
          uStack_50 = 0x1f;
          if (local_1c8 == 0) {
            puStack_210 = (uint *)0x0;
          }
          else {
            puStack_210 = (uint *)0x697bca;
            FUN_009885d0();
            puStack_244 = auStack_23c;
            uStack_50 = CONCAT31(uStack_50._1_3_,0x20);
            uStack_248 = 0x697bec;
            puStack_240 = &uStack_1a4;
            FUN_009da390();
            puStack_240 = (uint *)0x0;
            puStack_244 = (undefined1 *)0x0;
            uStack_248 = 0;
            uStack_24c = 0x20;
            uStack_250 = 0x29a;
            uStack_254 = 2;
            puStack_1a8 = auStack_270;
            uStack_50 = 0x21;
            uStack_274 = 0x697c1c;
            FUN_009885d0();
            puStack_188 = auStack_28c;
            uStack_50._0_1_ = 0x22;
            uStack_290 = 0x697c3a;
            FUN_009885d0();
            uStack_50 = CONCAT31(uStack_50._1_3_,0x20);
            uStack_294 = 0x697c48;
            uStack_290 = local_1c8;
            puStack_210 = (uint *)FUN_009aeb90();
          }
          uStack_50 = 0x23;
          puStack_214 = (undefined4 *)0x697c65;
          (**(code **)(**(int **)(param_1 + 0xc0) + 0x48))();
          uStack_54 = 0xffffffff;
          if ((uStack_1d8 & 0x1000) != 0) {
            puStack_214 = (undefined4 *)0x697c8b;
            FUN_00408ad0();
          }
          puStack_214 = (undefined4 *)0x260;
          uStack_218 = 0x697c95;
          iVar4 = FUN_00aae9af();
          uStack_54 = 0x24;
          iStack_18c = iVar4;
          if (iVar4 == 0) {
            piVar5 = (int *)0x0;
          }
          else {
            FUN_00648af0(auStack_2b4);
            piVar5 = (int *)FUN_009ae5f0(iVar4);
          }
          uStack_54 = 0xffffffff;
          *(int **)(param_1 + 0xdc) = piVar5;
          puStack_214 = (undefined4 *)(param_1 + 0x30);
          uStack_218 = 0x697cf6;
          (**(code **)(*piVar5 + 4))();
          uStack_218 = 0x697d06;
          (**(code **)(**(int **)(param_1 + 0xc0) + 0x100))();
          puStack_20c = (undefined1 *)0x697d14;
          FUN_009b0ed0();
        }
      }
      else {
        puStack_20c = (undefined1 *)0x697831;
        FUN_009b07a0();
        puStack_20c = (undefined1 *)0x69783f;
        FUN_009885d0();
        puStack_20c = (undefined1 *)0x10002;
        puStack_210 = (uint *)0x19c;
        pvStack_4c = (void *)0xe;
        uStack_218 = 0x697863;
        puStack_214 = (undefined4 *)auStack_1a0;
        FUN_004015b0();
        pvStack_4c = (void *)CONCAT31(pvStack_4c._1_3_,0xf);
        puStack_20c = *(undefined1 **)(*(int *)(param_1 + 0xdc) + 0x6c);
        puStack_210 = (uint *)0x697884;
        puStack_210 = (uint *)FUN_00987d20();
        puStack_214 = (undefined4 *)0x69788a;
        puStack_214 = (undefined4 *)FUN_00447240();
        uStack_218 = 0x697890;
        FUN_00401280();
        uStack_54 = CONCAT31(uStack_54._1_3_,0xe);
        puStack_214 = (undefined4 *)0x6978a7;
        FUN_00401650();
        uStack_54 = 0xffffffff;
        puStack_214 = (undefined4 *)0x6978ba;
        FUN_00408ad0();
        puStack_214 = (undefined4 *)0x88;
        uStack_218 = 0x6978c4;
        iVar4 = FUN_00aae9af();
        uStack_54 = 0x10;
        if (iVar4 == 0) {
          puStack_214 = (undefined4 *)0x0;
        }
        else {
          uStack_21c = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x6c);
          uStack_220 = *(undefined4 *)(param_1 + 0x188);
          puStack_214 = (undefined4 *)param_1;
          uStack_218 = 1;
          uStack_228 = 0x6978f4;
          iStack_224 = iVar4;
          puStack_214 = (undefined4 *)FUN_0072c420();
        }
        uStack_54 = 0xffffffff;
        uStack_218 = 0x697910;
        (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 0x38) + 0x18))();
        puStack_20c = (undefined1 *)0x24;
        puStack_210 = (uint *)0x697917;
        uStack_1c4 = FUN_00aae9af();
        pvStack_4c = (void *)0x11;
        if (uStack_1c4 == 0) {
          puStack_20c = (undefined1 *)0x0;
        }
        else {
          puStack_20c = (undefined1 *)0x697941;
          FUN_009885d0();
          puStack_210 = (uint *)auStack_1c0;
          pvStack_4c = (void *)CONCAT31(pvStack_4c._1_3_,0x12);
          puStack_214 = (undefined4 *)0x69795b;
          puStack_20c = auStack_1a0;
          local_1c8 = FUN_009a8ee0();
          pvStack_4c = (void *)0x13;
          puStack_20c = (undefined1 *)0x697977;
          iVar4 = FUN_00475500();
          uStack_218 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
          puStack_214 = (undefined4 *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
          puStack_210 = (uint *)*(undefined8 *)(iVar4 + 0x74);
          puStack_20c = (undefined1 *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
          uStack_21c = 0x69799f;
          FUN_009a9880();
          pvStack_4c = (void *)0x14;
          uStack_1d0 = uStack_1d0 | 0x1c0;
          puStack_20c = (undefined1 *)0x6979b9;
          puStack_20c = (undefined1 *)FUN_009f23c0();
        }
        pvStack_4c = (void *)0x17;
        puStack_210 = (uint *)0x6979d3;
        FUN_00696b10();
        if ((uStack_1d0 & 0x100) != 0) {
          uStack_1d0 = uStack_1d0 & 0xfffffeff;
          puStack_20c = (undefined1 *)0x6979f1;
          FUN_00408ad0();
        }
        pvStack_4c = (void *)0x15;
        if ((uStack_1d0 & 0x80) != 0) {
          uStack_1d0 = uStack_1d0 & 0xffffff7f;
          puStack_20c = auStack_1c0;
          puStack_210 = (uint *)0x697a15;
          FUN_009a9740();
        }
        pvStack_4c = (void *)0xffffffff;
        if ((uStack_1d0 & 0x40) != 0) {
          puStack_20c = (undefined1 *)0x697a31;
          FUN_00408ad0();
        }
        *(undefined1 *)(param_1 + 0xe0) = 1;
      }
    }
    puStack_20c = (undefined1 *)0x697d23;
    (**(code **)(**(int **)(param_1 + 0xd8) + 4))();
  }
  if (*(char *)(*(int *)(param_1 + 0xdc) + 0x34) == '\0') {
    uStack_208 = 0xc00e0b0f8;
    uStack_1a4 = 0xf;
    puStack_1a8 = (undefined1 *)0x0;
    auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
    puStack_20c = (undefined1 *)0x697d51;
    FUN_00409350();
    uStack_44 = 0x25;
    uStack_208._4_4_ = auStack_1b8;
    uStack_208._0_4_ = 0x697d6b;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x34))();
    uStack_208 = CONCAT44(uStack_208._4_4_,0x697d74);
    (**(code **)(*piVar5 + 0x38))();
    uStack_44 = 0xffffffff;
    if (0xf < uStack_1a4) {
      uStack_208 = CONCAT44(auStack_1b8[0],&UNK_00697d90);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if ((*(int *)(param_1 + 0xcc) == 0) && (*(char *)(*(int *)(param_1 + 0xdc) + 0x34) != '\0')) {
    uStack_208 = 0xc00e0b0f8;
    uStack_1a4 = 0xf;
    puStack_1a8 = (undefined1 *)0x0;
    auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
    puStack_20c = (undefined1 *)0x697dc4;
    FUN_00409350();
    uStack_44 = 0x26;
    local_1c8 = local_1c8 | 0x2000;
    uStack_208._4_4_ = auStack_1b8;
    uStack_208._0_4_ = 0x697de6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x34))();
    uStack_208 = CONCAT44(uStack_208._4_4_,0x697df2);
    iVar4 = (**(code **)(*piVar5 + 0xb0))();
    uStack_1c4 = CONCAT13(1,(undefined3)uStack_1c4);
    if (iVar4 == 3) goto LAB_00697e01;
  }
  uStack_1c4 = uStack_1c4 & 0xffffff;
LAB_00697e01:
  uStack_44 = 0xffffffff;
  if (((local_1c8 & 0x2000) != 0) && (0xf < uStack_1a4)) {
    uStack_208 = CONCAT44(auStack_1b8[0],&UNK_00697e27);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (uStack_1c4._3_1_ == '\0') {
    if (*(int *)(param_1 + 0xcc) == 0) {
      ExceptionList = pvStack_4c;
      return;
    }
    uStack_208 = 0xc00e0b0f8;
    uStack_148 = 0xf;
    uStack_14c = 0;
    auStack_15c[0] = auStack_15c[0] & 0xffffff00;
    puStack_20c = (undefined1 *)0x697eb5;
    FUN_00409350();
    uStack_44 = 0x28;
    uStack_208._4_4_ = auStack_15c;
    uStack_208._0_4_ = 0x697ed4;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x34))();
    uStack_208 = CONCAT44(uStack_208._4_4_,3);
    puStack_20c = (undefined1 *)0x697ee2;
    (**(code **)(*piVar5 + 0xb4))();
    uVar1 = auStack_15c[0];
    uVar2 = uStack_148;
  }
  else {
    uStack_208 = 0xc00e0b0f8;
    uStack_1a4 = 0xf;
    puStack_1a8 = (undefined1 *)0x0;
    auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
    puStack_20c = (undefined1 *)0x697e4e;
    FUN_00409350();
    uStack_44 = 0x27;
    uStack_208._4_4_ = auStack_1b8;
    uStack_208._0_4_ = 0x697e6a;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x34))();
    uStack_208 = ZEXT48(uStack_208._4_4_) << 0x20;
    puStack_20c = (undefined1 *)0x697e77;
    (**(code **)(*piVar5 + 0xb4))();
    uVar1 = auStack_1b8[0];
    uVar2 = uStack_1a4;
  }
  if (uVar2 < 0x10) {
    ExceptionList = pvStack_4c;
    return;
  }
  uStack_208 = CONCAT44(uVar1,&UNK_00697ef9);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

