// FUN_00754690 @ 00754690 body=[[00754690, 00754929] [0075492d, 0075494c]]


void FUN_00754690(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint auStack_1f8 [4];
  undefined4 uStack_1e8;
  uint uStack_1e4;
  int iStack_1dc;
  undefined **ppuStack_1d8;
  undefined4 uStack_1d4;
  undefined1 uStack_1d0;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 uStack_1b4;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 uStack_198;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 uStack_17c;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 uStack_160;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int aiStack_120 [30];
  undefined **appuStack_a8 [37];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b59c2b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_007549a0(param_1);
  while( true ) {
    piVar5 = *(int **)(param_2 + 0x1c);
    if ((char)piVar5[0x44] == '\0') {
      iVar2 = (**(code **)(*piVar5 + 4))();
      piVar5[2] = iVar2;
      if (iVar2 == 0) {
        piVar5[3] = 0x13;
      }
      *(undefined1 *)(piVar5 + 0x44) = 1;
    }
    piVar5 = piVar5 + 3;
    piVar6 = aiStack_120;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    if (aiStack_120[0] == 0x13) break;
    FUN_009a1440(param_2);
    uStack_1d4 = 0x18d;
    ppuStack_1d8 = CBookmark::vftable;
    uStack_1bc = 0xf;
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    uStack_1a0 = 0xf;
    uStack_1a4 = 0;
    uStack_1b4 = 0;
    uStack_184 = 0xf;
    uStack_188 = 0;
    uStack_198 = 0;
    uStack_168 = 0xf;
    uStack_16c = 0;
    uStack_17c = 0;
    uStack_c = 3;
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = DAT_01259abc;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_c = 4;
    FUN_009a2a90(param_2);
    if (*(int *)(param_2 + 0xc) != 0) {
      uStack_1e4 = 0xf;
      uStack_1e8 = 0;
      auStack_1f8[0] = auStack_1f8[0] & 0xffffff00;
      FUN_00409350("bookmarks.cpp",0xd);
      uStack_c._0_1_ = 6;
      uVar4 = FUN_004015b0(auStack_1f8,0x94,0x10004);
      uStack_c._0_1_ = 7;
      FUN_00987d50(uVar4,"Failed to read bookmarkfile.",0x1c,0);
      FUN_00401280(uVar4);
      uStack_c = CONCAT31(uStack_c._1_3_,6);
      FUN_00987ac0(appuStack_a8);
      appuStack_a8[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_a8);
      if (uStack_1e4 < 0x10) {
        FUN_00753c40();
        ExceptionList = pvStack_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_1f8[0]);
    }
    iVar2 = param_1[1];
    iVar3 = FUN_00aae9af(0xc0);
    uStack_c = CONCAT31(uStack_c._1_3_,5);
    iStack_1dc = iVar3;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      FUN_0072abb0(iVar3,&ppuStack_1d8);
      *(int *)(iVar3 + 0xb4) = iVar2;
      *(undefined4 *)(iVar3 + 0xb8) = 0;
      *(undefined1 *)(iVar3 + 0xbc) = 0;
    }
    iVar1 = param_1[2];
    param_1[1] = iVar3;
    param_1[2] = iVar1 + 1;
    if (iVar1 == 0) {
      *param_1 = iVar3;
    }
    else {
      *(int *)(iVar2 + 0xb8) = iVar3;
    }
    uStack_c = 0xffffffff;
    FUN_00753c40();
  }
  ExceptionList = pvStack_14;
  return;
}

