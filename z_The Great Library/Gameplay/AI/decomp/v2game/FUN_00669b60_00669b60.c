// FUN_00669b60 @ 00669b60 body=[[00669b60, 0066a02d]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00669b60(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *in_ECX;
  int unaff_EBX;
  float *pfVar5;
  ulonglong uVar6;
  float fStack_124;
  float fStack_120;
  int local_11c;
  int *piStack_118;
  undefined1 auStack_114 [4];
  uint local_110;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f4;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_d8;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined1 auStack_98 [28];
  undefined1 auStack_7c [96];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b7f42c;
  pvStack_14 = ExceptionList;
  local_110 = 0;
  ExceptionList = &pvStack_14;
  if ((DAT_013f2f14 & 1) == 0) {
    DAT_013f2f14 = DAT_013f2f14 | 1;
    _DAT_013f2ecc = 0xf;
    _DAT_013f2ec8 = 0;
    DAT_013f2eb8 = 0;
    _DAT_013f2ee8 = 0xf;
    _DAT_013f2ee4 = 0;
    DAT_013f2ed4 = 0;
    _DAT_013f2f04 = 0xf;
    _DAT_013f2f00 = 0;
    DAT_013f2ef0 = 0;
    _DAT_013f2f0c = 0;
    DAT_013f2f10 = 1;
    ExceptionList = &pvStack_14;
    _atexit((_func_4879 *)&LAB_00c815a0);
  }
  iVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
  fStack_124 = *(float *)(iVar1 + 4);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4c))(auStack_114);
  fStack_124 = (float)*piVar2;
  fStack_120 = (float)unaff_EBX;
  uStack_fc = 0xf;
  uStack_100 = 0;
  local_110 = local_110 & 0xffffff00;
  uStack_e0 = 0xf;
  uStack_e4 = 0;
  uStack_f4 = 0;
  uStack_c4 = 0xf;
  iStack_c8 = 0;
  uStack_d8 = 0;
  uStack_bc = 0;
  uStack_b8 = 1;
  pvStack_14._0_1_ = 0;
  pvStack_14._1_3_ = 0;
  if (DAT_00f09544 == '\0') {
    FUN_00408ed0();
    FUN_00408ed0();
    FUN_00408ed0();
    _DAT_013f2f0c = uStack_bc;
    DAT_013f2f10 = uStack_b8;
  }
  else {
    piVar2 = *(int **)(in_ECX[0x15] + 0x98);
    in_ECX[0x58] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      pvStack_14 = (void *)0x5;
      uVar6 = ZEXT48(&uStack_ac);
      pfVar5 = &fStack_124;
      uVar4 = (**(code **)(*in_ECX + 0x38))();
      piVar2 = (int *)FUN_006451c0(uVar4,pfVar5,uVar6);
      piStack_118 = piVar2;
      if (piVar2 == (int *)0x0) {
        uStack_b8 = 0;
        (**(code **)(*(int *)in_ECX[0x65c] + 0x60))();
        uStack_bc = 0xffd3ffc4;
        FUN_00409350(&DAT_00ded94d,0);
      }
      else {
        local_11c = (**(code **)(*in_ECX + 0x38))();
        if (*(int *)(local_11c + 0x20cc) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_007f15e0();
        }
        *(int *)(local_11c + 0x3a1c) = iVar1;
        (**(code **)(*piVar2 + 0xc))(auStack_7c,*(undefined4 *)(iVar1 + 0xc));
        pvStack_1c._0_1_ = 6;
        FUN_004115d0();
        pvStack_1c = (void *)CONCAT31(pvStack_1c._1_3_,5);
        FUN_00459820();
        uStack_c0 = 0;
        (**(code **)(*(int *)in_ECX[0x65c] + 0x60))();
        uStack_bc = 0xffd3ffce;
        FUN_004115d0();
        _DAT_013f0888 = (int *)0x0;
        _DAT_013f088c = piStack_118;
      }
      pvStack_14._0_1_ = 0;
      FUN_009a63f0();
    }
    else {
      (**(code **)(*in_ECX + 0x198))(auStack_7c,piVar2);
      pvStack_14._0_1_ = 1;
      FUN_004115d0();
      pvStack_14._0_1_ = 0;
      FUN_00459820();
      if (iStack_c8 == 0) {
        pcVar3 = (char *)(**(code **)(*piVar2 + 0x9c))();
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          if ((DAT_013f2f14 & 2) == 0) {
            DAT_013f2f14 = DAT_013f2f14 | 2;
            pvStack_14._0_1_ = 2;
            FUN_009885d0();
            pvStack_14._0_1_ = 3;
            FUN_009a8ee0(&uStack_ac,auStack_98);
            pvStack_14._0_1_ = 4;
            iVar1 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
            pvStack_14._0_1_ = 3;
            FUN_009a9740();
            FUN_00408ad0();
            _atexit((_func_4879 *)&LAB_00c81570);
            pvStack_14._0_1_ = 0;
          }
          FUN_00448aa0();
          FUN_00989030();
        }
      }
      _DAT_013f088c = (int *)0x0;
      _DAT_013f0888 = piVar2;
      FUN_00408ed0();
      FUN_00408ed0();
      FUN_00408ed0();
      _DAT_013f2f0c = uStack_bc;
      DAT_013f2f10 = uStack_b8;
    }
  }
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = pvStack_1c;
  return param_1;
}

