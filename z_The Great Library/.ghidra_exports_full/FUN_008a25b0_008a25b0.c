// FUN_008a25b0 @ 008a25b0 body=[[008a25b0, 008a27b8] [008a27bc, 008a295a] [008a295e, 008a2aec] [008a2af0, 008a2b3c] [008a2b40, 008a2c71] [008a2c75, 008a2c8b]]


void FUN_008a25b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  char *pcVar7;
  int *piVar8;
  uint local_3f8 [4];
  undefined4 local_3e8;
  uint local_3e4;
  uint local_3dc [4];
  undefined4 local_3cc;
  uint local_3c8;
  uint local_3c0 [4];
  undefined4 local_3b0;
  uint local_3ac;
  uint auStack_3a4 [4];
  undefined4 uStack_394;
  uint uStack_390;
  uint auStack_388 [4];
  undefined4 uStack_378;
  uint uStack_374;
  undefined1 auStack_36c [28];
  undefined1 local_350 [176];
  undefined **appuStack_2a0 [48];
  undefined **appuStack_1e0 [42];
  undefined **appuStack_138 [67];
  void *pvStack_2c;
  undefined1 uStack_24;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b970a4;
  local_14 = ExceptionList;
  if (param_2 < 0x293) {
    if (param_2 != 0x292) {
      if (param_2 == 0xd9) {
        pcVar7 = (char *)(param_1 + 0x22c);
        local_3e4 = 0xf;
        local_3e8 = 0;
        local_3f8[0] = local_3f8[0] & 0xffffff00;
        pcVar6 = pcVar7;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        ExceptionList = &local_14;
        FUN_00409350(pcVar7,(int)pcVar6 - (param_1 + 0x22d));
        local_c = 0;
        FUN_004ebcb0();
        uVar4 = FUN_005677b0(local_3f8);
        local_c = 0xffffffff;
        *(undefined4 *)(in_ECX + 0x20) = uVar4;
        if (local_3e4 < 0x10) {
          local_3e4 = 0xf;
          local_3e8 = 0;
          local_3f8[0] = local_3f8[0] & 0xffffff00;
          if (*(int *)(in_ECX + 0x20) != 0) {
            ExceptionList = local_14;
            return;
          }
          FUN_009885d0();
          local_c = 1;
          uVar4 = FUN_004015b0(local_350,0x17f7,0x10004);
          local_c = CONCAT31(local_c._1_3_,2);
          FUN_00987d50(uVar4,"Bad rebel type ",0xf,0);
          uVar4 = FUN_00418e30(uVar4,pcVar7,extraout_ECX," in file ");
          uVar4 = FUN_00418e30(uVar4);
          if (0xf < (uint)unaff_EDI[5]) {
            unaff_EDI = (undefined4 *)*unaff_EDI;
          }
          uVar4 = FUN_00418e30(uVar4,unaff_EDI);
          uVar4 = FUN_00418e30(uVar4," line ",extraout_ECX_00,unaff_ESI);
          uVar4 = FUN_00455470(uVar4);
          FUN_00401280(uVar4);
          uStack_24 = 1;
          FUN_00987ac0(appuStack_138);
          appuStack_138[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_138);
          FUN_00408ad0();
          ExceptionList = pvStack_2c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3f8[0]);
      }
      if (param_2 == 0x28c) {
        ExceptionList = &local_14;
        uVar4 = FUN_009885d0();
        local_c = 9;
        iVar5 = FUN_004a2f70(uVar4);
        if (iVar5 == 0) {
          uVar4 = FUN_00561180();
        }
        else {
          uVar4 = FUN_004a2f70(uVar4);
        }
        *(undefined4 *)(in_ECX + 0x24) = uVar4;
        local_c = 0xffffffff;
        FUN_00408ad0();
        cVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x18))();
        if (cVar3 != '\0') {
          ExceptionList = local_14;
          return;
        }
        FUN_009885d0();
        local_c = 10;
        FUN_004015b0(auStack_36c,0x180d,0x10004);
        local_c = CONCAT31(local_c._1_3_,0xb);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar4 = FUN_00987d20(param_1 + 0x22c,iVar5," in file ",iVar5," line ",iVar5,
                             *(undefined4 *)(iVar5 + 8));
        uVar4 = FUN_00418e30(uVar4);
        uVar4 = FUN_00418e30(uVar4);
        uVar4 = FUN_00989050(uVar4);
        uVar4 = FUN_00418e30(uVar4);
        uVar4 = FUN_00455470(uVar4);
        FUN_00401280(uVar4);
        local_14 = (void *)CONCAT31(local_14._1_3_,10);
        FUN_00401650();
        FUN_00408ad0();
        ExceptionList = pvStack_1c;
        return;
      }
LAB_008a2aa6:
      ExceptionList = &local_14;
      FUN_00876b30(param_1,param_2);
      ExceptionList = pvStack_1c;
      return;
    }
    local_3c8 = 0xf;
    local_3cc = 0;
    local_3dc[0] = local_3dc[0] & 0xffffff00;
    pcVar6 = (char *)(param_1 + 0x22c);
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar6 - (param_1 + 0x22d));
    local_c = 6;
    FUN_005662c0();
    iVar5 = FUN_005677b0(local_3dc);
    if (iVar5 == 0) {
      iVar5 = FUN_005676d0();
    }
    local_c = 0xffffffff;
    *(int *)(in_ECX + 0x28) = iVar5;
    if (0xf < local_3c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3dc[0]);
    }
    local_3c8 = 0xf;
    local_3cc = 0;
    local_3dc[0] = local_3dc[0] & 0xffffff00;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
    if (cVar3 != '\0') {
      ExceptionList = local_14;
      return;
    }
    uStack_374 = 0xf;
    uStack_378 = 0;
    auStack_388[0] = auStack_388[0] & 0xffffff00;
    FUN_00409350("effect.cpp",10);
    local_c = 7;
    uVar4 = FUN_004015b0(auStack_388,0x1806,0x10004);
    local_c._0_1_ = 8;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    piVar8 = (int *)(iVar5 + 0x14);
    FUN_00987d50(uVar4,"Bad ideology type ",0x12,0);
    uVar4 = FUN_00418e30(uVar4,unaff_EDI,extraout_ECX_01," in file ");
    uVar4 = FUN_00418e30(uVar4);
    if (0xf < *(uint *)(iVar5 + 0x28)) {
      piVar8 = (int *)*piVar8;
    }
    uVar4 = FUN_00418e30(uVar4,piVar8);
    uVar4 = FUN_00418e30(uVar4," line ",unaff_ESI,unaff_ESI);
    uVar4 = FUN_00455470(uVar4);
    FUN_00401280(uVar4);
    local_c = CONCAT31(local_c._1_3_,7);
    FUN_00987ac0(appuStack_2a0);
    appuStack_2a0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_2a0);
    uVar1 = auStack_388[0];
    uVar2 = uStack_374;
  }
  else {
    if (param_2 != 0x4c6) goto LAB_008a2aa6;
    local_3ac = 0xf;
    local_3b0 = 0;
    local_3c0[0] = local_3c0[0] & 0xffffff00;
    pcVar6 = (char *)(param_1 + 0x22c);
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar6 - (param_1 + 0x22d));
    local_c = 3;
    uVar4 = FUN_00973bd0(local_3c0);
    local_c = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x2c) = uVar4;
    if (0xf < local_3ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c0[0]);
    }
    local_3ac = 0xf;
    local_3b0 = 0;
    local_3c0[0] = local_3c0[0] & 0xffffff00;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x20))();
    if (cVar3 != '\0') {
      ExceptionList = local_14;
      return;
    }
    uStack_390 = 0xf;
    uStack_394 = 0;
    auStack_3a4[0] = auStack_3a4[0] & 0xffffff00;
    FUN_00409350("effect.cpp",10);
    local_c = 4;
    uVar4 = FUN_004015b0(auStack_3a4,0x17ff,0x10004);
    local_c._0_1_ = 5;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    piVar8 = (int *)(iVar5 + 0x14);
    FUN_00987d50(uVar4,"Bad ideology type ",0x12,0);
    uVar4 = FUN_00418e30(uVar4,unaff_EDI,extraout_ECX_02," in file ");
    uVar4 = FUN_00418e30(uVar4);
    if (0xf < *(uint *)(iVar5 + 0x28)) {
      piVar8 = (int *)*piVar8;
    }
    uVar4 = FUN_00418e30(uVar4,piVar8);
    uVar4 = FUN_00418e30(uVar4," line ",unaff_ESI,unaff_ESI);
    uVar4 = FUN_00455470(uVar4);
    FUN_00401280(uVar4);
    local_c = CONCAT31(local_c._1_3_,4);
    FUN_00987ac0(appuStack_1e0);
    appuStack_1e0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_1e0);
    uVar1 = auStack_3a4[0];
    uVar2 = uStack_390;
  }
  if (uVar2 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uVar1);
}

