// FUN_0088c3f0 @ 0088c3f0 body=[[0088c3f0, 0088c4bd] [0088c4c1, 0088c66b] [0088c66f, 0088c800] [0088c804, 0088c81a]]


void FUN_0088c3f0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_EDI;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_224 [4];
  undefined4 local_214;
  uint local_210;
  uint local_208 [4];
  undefined4 local_1f8;
  uint local_1f4;
  uint local_1ec [4];
  undefined4 local_1dc;
  uint local_1d8;
  uint local_1d0 [4];
  undefined4 local_1c0;
  uint local_1bc;
  uint local_1b4 [4];
  undefined4 local_1a4;
  uint local_1a0;
  undefined **appuStack_120 [48];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58d0d;
  local_14 = ExceptionList;
  if (param_2 == 0x1a) {
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0[0] = local_1d0[0] & 0xffffff00;
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    local_c = 0;
    FUN_00408ed0(local_1d0,0,0xffffffff);
    uVar9 = local_1d0[0];
    uVar2 = local_1bc;
  }
  else {
    if (param_2 != 0x99) {
      if (param_2 != 0x762) {
        return;
      }
      local_210 = 0xf;
      local_214 = 0;
      local_224[0] = local_224[0] & 0xffffff00;
      pcVar3 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
      local_c = 4;
      iVar4 = FUN_005c3e00();
      iVar5 = FUN_005c4bd0(local_224);
      if (iVar5 == 0) {
        iVar5 = **(int **)(iVar4 + 0xc);
      }
      local_c = 0xffffffff;
      *(int *)(in_ECX + 0x3c) = iVar5;
      if (0xf < local_210) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_224[0]);
      }
      local_210 = 0xf;
      local_214 = 0;
      local_224[0] = local_224[0] & 0xffffff00;
      if (*(int *)(*(int *)(in_ECX + 0x3c) + 0x48) != 0) {
        ExceptionList = local_14;
        return;
      }
      local_1d8 = 0xf;
      local_1dc = 0;
      local_1ec[0] = local_1ec[0] & 0xffffff00;
      FUN_00409350("effect.cpp",10);
      local_c = 5;
      uVar6 = FUN_004015b0(local_1ec,0xb5f,0x10004);
      local_c._0_1_ = 6;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      uVar8 = 0;
      piVar7 = (int *)(iVar5 + 0x14);
      FUN_00987d50(uVar6,"unknown personality \'",0x15,0);
      uVar6 = FUN_00418e30(uVar6,unaff_EDI,extraout_ECX,"\' in file ");
      uVar6 = FUN_00418e30(uVar6);
      if (0xf < *(uint *)(iVar5 + 0x28)) {
        piVar7 = (int *)*piVar7;
      }
      uVar6 = FUN_00418e30(uVar6,piVar7);
      uVar6 = FUN_00418e30(uVar6," line ",uVar8,uVar8);
      uVar6 = FUN_00455470(uVar6);
      FUN_00401280(uVar6);
      local_c = CONCAT31(local_c._1_3_,5);
      FUN_00987ac0(appuStack_120);
      appuStack_120[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_120);
      uVar9 = local_1ec[0];
      if (local_1d8 < 0x10) {
        ExceptionList = local_14;
        return;
      }
      goto LAB_0088c7fc;
    }
    local_1f4 = 0xf;
    local_1f8 = 0;
    local_208[0] = local_208[0] & 0xffffff00;
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    local_c = 1;
    iVar4 = FUN_005c3e00();
    iVar5 = FUN_005c4bd0(local_208);
    if (iVar5 == 0) {
      iVar5 = **(int **)(iVar4 + 0x1c);
    }
    local_c = 0xffffffff;
    *(int *)(in_ECX + 0x40) = iVar5;
    if (0xf < local_1f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_208[0]);
    }
    local_1f4 = 0xf;
    local_1f8 = 0;
    local_208[0] = local_208[0] & 0xffffff00;
    if (*(int *)(*(int *)(in_ECX + 0x40) + 0x48) != 0) {
      ExceptionList = local_14;
      return;
    }
    local_1a0 = 0xf;
    local_1a4 = 0;
    local_1b4[0] = local_1b4[0] & 0xffffff00;
    FUN_00409350("effect.cpp",10);
    local_c = 2;
    uVar6 = FUN_004015b0(local_1b4,0xb5a,0x10004);
    local_c._0_1_ = 3;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    uVar8 = 0;
    piVar7 = (int *)(iVar5 + 0x14);
    FUN_00987d50(uVar6,"unknown background \'",0x14,0);
    uVar6 = FUN_00418e30(uVar6,unaff_EDI,extraout_ECX_00,"\' in file ");
    uVar6 = FUN_00418e30(uVar6);
    if (0xf < *(uint *)(iVar5 + 0x28)) {
      piVar7 = (int *)*piVar7;
    }
    uVar6 = FUN_00418e30(uVar6,piVar7);
    uVar6 = FUN_00418e30(uVar6," line ",uVar8,uVar8);
    uVar6 = FUN_00455470(uVar6);
    FUN_00401280(uVar6);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    uVar9 = local_1b4[0];
    uVar2 = local_1a0;
  }
  if (uVar2 < 0x10) {
    ExceptionList = local_14;
    return;
  }
LAB_0088c7fc:
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uVar9);
}

