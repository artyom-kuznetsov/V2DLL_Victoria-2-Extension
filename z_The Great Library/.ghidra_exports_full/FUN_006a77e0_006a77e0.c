// FUN_006a77e0 @ 006a77e0 body=[[006a77e0, 006a7aac] [006a7ab0, 006a7ac8] [006a7acc, 006a7ae2]]


void FUN_006a77e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ****ppppuVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 unaff_EDI;
  int *piVar7;
  undefined4 uVar8;
  undefined1 auStack_15c [8];
  undefined4 uStack_154;
  undefined4 ***pppuStack_14c;
  undefined4 uStack_148;
  uint uStack_140;
  undefined1 auStack_13c [4];
  uint uStack_138;
  int aiStack_120 [24];
  undefined **appuStack_c0 [37];
  void *pvStack_2c;
  undefined1 uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b59caf;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009a1440(param_1);
  if (*(int *)(param_1 + 0x20) == 0x94e) {
    while( true ) {
      piVar5 = *(int **)(param_1 + 0x1c);
      if ((char)piVar5[0x44] == '\0') {
        iVar2 = (**(code **)(*piVar5 + 4))();
        piVar5[2] = iVar2;
        if (iVar2 == 0) {
          piVar5[3] = 0x13;
        }
        *(undefined1 *)(piVar5 + 0x44) = 1;
      }
      piVar5 = piVar5 + 3;
      piVar7 = aiStack_120;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      FUN_009a1440(param_1);
      (**(code **)(*in_ECX + 0x10))(param_1,*(undefined4 *)(param_1 + 0x20));
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  FUN_009a1440(param_1);
  if (*(int *)(param_1 + 0x20) == 0x94f) {
    uStack_140 = FUN_00aae9af(0x3c);
    uStack_c = 0;
    if (uStack_140 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_006a73c0(in_ECX + 5);
    }
    uStack_c = 0xffffffff;
    in_ECX[0xe] = iVar2;
    while( true ) {
      piVar5 = *(int **)(param_1 + 0x1c);
      if ((char)piVar5[0x44] == '\0') {
        iVar2 = (**(code **)(*piVar5 + 4))();
        piVar5[2] = iVar2;
        if (iVar2 == 0) {
          piVar5[3] = 0x13;
        }
        *(undefined1 *)(piVar5 + 0x44) = 1;
      }
      piVar5 = piVar5 + 3;
      piVar7 = aiStack_120;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      FUN_009a1440(param_1);
      (**(code **)(*(int *)in_ECX[0xe] + 0x10))(param_1,*(undefined4 *)(param_1 + 0x20));
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_009a1320(auStack_13c);
    uStack_c = 1;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    puVar6 = (undefined4 *)(iVar2 + 0x14);
    uStack_148 = 0xf;
    pppuStack_14c = (undefined4 ****)0x0;
    auStack_15c[0] = 0;
    FUN_00409350("messagetype.cpp",0xf);
    uStack_c._0_1_ = 2;
    uVar3 = FUN_004015b0(auStack_15c,0x58,0x1000);
    uStack_c = CONCAT31(uStack_c._1_3_,3);
    uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 8);
    if (0xf < *(uint *)(iVar2 + 0x28)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    uVar8 = 0;
    FUN_00987d50(uVar3,"Error: \"",8,0);
    ppppuVar4 = (undefined4 ****)pppuStack_14c;
    if (uStack_138 < 0x10) {
      ppppuVar4 = &pppuStack_14c;
    }
    uVar3 = FUN_00418e30(uVar3,ppppuVar4);
    uVar3 = FUN_00418e30(uVar3,"\" in file: \"",unaff_EDI,puVar6,unaff_EDI,"\" near line: ",
                         unaff_EDI,unaff_EDI);
    uVar3 = FUN_00418e30(uVar3);
    uVar3 = FUN_00418e30(uVar3);
    uVar3 = FUN_00455470(uVar3);
    FUN_00401280(uVar3);
    uStack_24 = 2;
    FUN_00987ac0(appuStack_c0);
    appuStack_c0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_c0);
    if (uVar1 < 0x10) {
      FUN_009a2420(param_1 + 4);
      if (uStack_140 < 0x10) {
        ExceptionList = pvStack_2c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_154);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar8);
  }
  (**(code **)(*in_ECX + 0x14))();
  ExceptionList = pvStack_14;
  return;
}

