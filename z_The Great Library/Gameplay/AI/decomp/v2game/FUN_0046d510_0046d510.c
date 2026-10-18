// FUN_0046d510 @ 0046d510 body=[[0046d510, 0046d658] [0046d65c, 0046d6bc] [0046d6c0, 0046d722] [0046d726, 0046d99d] [0046d9a1, 0046d9b7]]


void FUN_0046d510(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 uVar5;
  uint unaff_EDI;
  undefined1 *puVar6;
  uint uStack_178;
  uint uStack_174;
  undefined4 uStack_170;
  int *piStack_16c;
  uint uStack_168;
  int iStack_164;
  int iStack_160;
  undefined4 local_154;
  uint uStack_150;
  undefined1 auStack_14c [12];
  undefined4 uStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined1 auStack_134 [12];
  undefined4 uStack_128;
  uint auStack_124 [7];
  undefined1 auStack_108 [148];
  undefined **appuStack_74 [19];
  void *pvStack_28;
  uint uStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b62848;
  pvStack_14 = ExceptionList;
  uVar5 = 0;
  local_154 = 0;
  ExceptionList = &pvStack_14;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  if (piVar2 == (int *)0x0) {
    iStack_164 = 0xf;
    uStack_168 = 0;
    uStack_178 = uStack_178 & 0xffffff00;
    FUN_00409350("news_interface.cpp",0x12);
    puStack_10 = (undefined1 *)0x0;
    uVar5 = FUN_004015b0(&uStack_178,0x3d,0x10004);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
    FUN_00987d50(uVar5,
                 "CNewsInterface::BuildArticleInSubWindow() - Failed to build article - No sub window found with name "
                 ,100,0);
    if (0xf < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    uVar5 = FUN_00418e30(uVar5,in_ECX);
    FUN_00401280(uVar5);
    uStack_20 = uStack_20 & 0xffffff00;
    FUN_00987ac0(appuStack_74);
    appuStack_74[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_74);
  }
  else {
    uStack_138 = 0xf;
    uStack_13c = 0;
    auStack_14c[0] = 0;
    FUN_00409350("image",5);
    puStack_10 = (undefined1 *)0x2;
    puVar6 = auStack_14c;
    iStack_160 = (**(code **)(*piVar2 + 0x44))();
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_13c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_150);
    }
    uStack_13c = 0xf;
    uStack_140 = 0;
    uStack_150 = uStack_150 & 0xffffff00;
    auStack_124[1] = 0xf;
    auStack_124[0] = 0;
    auStack_134[0] = 0;
    FUN_00409350("title",5);
    pvStack_14 = (void *)0x3;
    uVar3 = (**(code **)(*piVar2 + 0x3c))(auStack_134);
    uStack_18 = 0xffffffff;
    if (0xf < auStack_124[0]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_138);
    }
    auStack_124[0] = 0xf;
    uStack_128 = 0;
    uStack_138 = uStack_138 & 0xffffff00;
    piStack_16c = (int *)0xf;
    uStack_170 = 0;
    FUN_00409350(&DAT_00dfac10,4);
    uStack_18 = 4;
    iVar4 = (**(code **)(*piVar2 + 0x3c))(&stack0xfffffe80);
    uStack_20 = 0xffffffff;
    if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar3);
    }
    uStack_174 = 0xf;
    uStack_178 = 0;
    if ((puVar6 != (undefined1 *)0x0) && (iVar4 != 0)) {
      FUN_00408ed0(param_2 + 0x1c,0,0xffffffff);
      FUN_00a5ecc0(param_2 + 0x1c,1);
      FUN_00408ed0(param_2 + 0x38,0,0xffffffff);
      FUN_00a5ecc0(param_2 + 0x38,1);
      piVar2 = piStack_16c;
      if (piStack_16c == (int *)0x0) {
        ExceptionList = pvStack_28;
        return;
      }
      if (*(int *)(param_2 + 0x10) == 0) {
        ExceptionList = pvStack_28;
        return;
      }
      FUN_00988fa0(param_2);
      uStack_20 = 7;
      cVar1 = FUN_00991930();
      if (cVar1 != '\0') {
        iStack_164 = piVar2[0x31];
        iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
        iStack_160 = FUN_00aae9af(0x1ac);
        uStack_20._0_1_ = 8;
        if (iStack_160 != 0) {
          FUN_009885d0();
          uStack_20 = CONCAT31(uStack_20._1_3_,9);
          uStack_168 = 1;
          uVar5 = FUN_005c2ad0(auStack_108);
          uVar5 = FUN_009c4b50(iStack_160,
                               CONCAT22((short)*(undefined4 *)(iVar4 + 0x6b9c0),
                                        (short)*(undefined4 *)(iVar4 + 0x6b9bc)),auStack_124,uVar5,
                               iVar4);
        }
        uStack_20 = 7;
        if ((uStack_168 & 1) != 0) {
          FUN_00408ad0();
        }
        piVar2 = piStack_16c;
        (**(code **)(*piStack_16c + 0xe0))(uVar5);
        (**(code **)(*piVar2 + 0xfc))(uStack_168);
        (**(code **)(*piVar2 + 0x34))();
      }
      FUN_00408ad0();
      ExceptionList = pvStack_28;
      return;
    }
    uStack_174 = 0xf;
    uStack_178 = 0;
    unaff_EDI = uVar3 & 0xffffff00;
    FUN_00409350("news_interface.cpp",0x12);
    uStack_20 = 5;
    uVar5 = FUN_004015b0(&stack0xfffffe78,0x46,0x10004);
    uStack_20._0_1_ = 6;
    FUN_00987d50(uVar5,
                 "CNewsInterface::BuildArticleInSubWindow() - Failed to build article - Missing required components: title or desc"
                 ,0x70,0);
    FUN_00401280(uVar5);
    uStack_20 = CONCAT31(uStack_20._1_3_,5);
    FUN_00987ac0(appuStack_74);
    appuStack_74[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_74);
  }
  if (uStack_174 < 0x10) {
    ExceptionList = pvStack_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(unaff_EDI);
}

