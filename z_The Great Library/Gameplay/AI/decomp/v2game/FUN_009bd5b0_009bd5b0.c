// FUN_009bd5b0 @ 009bd5b0 body=[[009bd5b0, 009bd801] [009bd805, 009bd851] [009bd855, 009bd88c]]


/* WARNING: Removing unreachable block (ram,0x009bd848) */

void FUN_009bd5b0(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  char *pcVar10;
  uint uStack_1d0;
  char *pcStack_1cc;
  uint auStack_1b4 [4];
  undefined4 uStack_1a4;
  uint uStack_1a0;
  undefined1 local_180 [8];
  undefined1 auStack_178 [8];
  undefined1 local_170 [252];
  undefined **appuStack_74 [19];
  void *pvStack_28;
  undefined4 uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b56dc7;
  pvStack_14 = ExceptionList;
  pcStack_1cc = local_180;
  uStack_1d0 = 0x9bd5e1;
  ExceptionList = &pvStack_14;
  FUN_0086bf50();
  pcStack_1cc = "\n\nTextures:\n";
  local_c = 0;
  uStack_1d0 = extraout_ECX;
  uVar1 = FUN_00418e30(local_170,
                       "Texture manager info:\n--------------------\n\nNumber of textures: ",
                       *(undefined4 *)(param_1 + 0x6b6d8),*(undefined4 *)(param_1 + 0x6b6d8));
  uVar1 = FUN_00455470(uVar1);
  FUN_00418e30(uVar1);
  puVar5 = (uint *)(param_1 + 0x1c);
  iVar6 = 10000;
  do {
    if (puVar5[4] != 0) {
      if (puVar5[-6] == 0) {
        uVar1 = FUN_00418e30(auStack_178," *** ERROR *** ");
        if (*puVar5 < 0x10) {
          puVar2 = puVar5 + -5;
        }
        else {
          puVar2 = (uint *)puVar5[-5];
        }
        uVar3 = FUN_00418e30(uVar1,puVar2);
        pcVar10 = ")  This texture wasn\'t loaded!\n";
        uVar7 = puVar5[4];
        puVar8 = &DAT_00dfbfa4;
        uVar9 = uVar7;
        uVar1 = extraout_ECX_01;
      }
      else {
        if (*puVar5 < 0x10) {
          puVar2 = puVar5 + -5;
        }
        else {
          puVar2 = (uint *)puVar5[-5];
        }
        uVar3 = FUN_00418e30(auStack_178,puVar2);
        pcVar10 = "]\n";
        uVar7 = puVar5[3];
        puVar8 = &DAT_00dfd420;
        uVar9 = uVar7;
        uVar1 = extraout_ECX_00;
        uVar3 = FUN_00418e30(uVar3,&DAT_00dfbfa4,puVar5[4],puVar5[4],uVar7,&DAT_00e3a270,uVar7,
                             puVar5[2],uVar7,&DAT_00dfd420,uVar7,uVar7,extraout_ECX_00,&DAT_00e3a26c
                            );
        uVar3 = FUN_00455470(uVar3);
        uVar3 = FUN_00418e30(uVar3);
        uVar3 = FUN_00455470(uVar3);
      }
      uVar1 = FUN_00418e30(uVar3,puVar8,uVar7,uVar9,uVar1,pcVar10);
      uVar1 = FUN_00455470(uVar1);
      FUN_00418e30(uVar1);
    }
    puVar5 = puVar5 + 0xb;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00418e30(auStack_178,&DAT_00dee2cc);
  uVar1 = FUN_00418e30(auStack_178,"Memory (not very accurate): ",extraout_ECX_02,
                       *(undefined4 *)(param_1 + 0x6b6dc));
  piVar4 = (int *)FUN_00455470(uVar1);
  FUN_00408be0(piVar4);
  uVar7 = 0;
  if (((*(uint *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
     (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
     iVar6 == -1)) {
    uVar7 = 4;
  }
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar7;
    if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    FUN_00401120(uVar7,0);
  }
  uStack_1d0 = uStack_1d0 & 0xffffff00;
  FUN_00409350("texturehandler.cpp",0x12);
  uStack_20._0_1_ = 1;
  FUN_0086c000();
  uStack_20._0_1_ = 2;
  uVar1 = FUN_004015b0(&uStack_1d0,0x242,0x302);
  uStack_20._0_1_ = 5;
  FUN_0054a180(uVar1,auStack_1b4);
  if (uStack_1a0 < 0x10) {
    uStack_1a0 = 0xf;
    uStack_1a4 = 0;
    auStack_1b4[0] = auStack_1b4[0] & 0xffffff00;
    uStack_20 = CONCAT31(uStack_20._1_3_,1);
    FUN_00987ac0(appuStack_74);
    appuStack_74[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_74);
    uStack_1d0 = uStack_1d0 & 0xffffff00;
    uStack_20 = 0xffffffff;
    FUN_0086ac30();
    ExceptionList = pvStack_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(auStack_1b4[0]);
}

