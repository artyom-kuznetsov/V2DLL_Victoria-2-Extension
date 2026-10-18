// FUN_0089f870 @ 0089f870 body=[[0089f870, 0089f9b5] [0089f9b9, 0089fb4c] [0089fb50, 0089fc6f] [0089fc73, 0089fc89]]


void FUN_0089f870(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *piVar6;
  uint local_218 [4];
  undefined4 local_208;
  uint local_204;
  uint local_1fc [4];
  undefined4 local_1ec;
  uint local_1e8;
  uint local_1e0 [4];
  undefined4 local_1d0;
  uint local_1cc;
  uint local_1c4 [5];
  uint uStack_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [128];
  undefined **appuStack_120 [48];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b684d2;
  local_14 = ExceptionList;
  if (param_2 < 0x3bf) {
    if (param_2 != 0x3be) {
      if (param_2 == 0x1d3) {
        ExceptionList = &local_14;
        puVar2 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_1a8);
        *(undefined4 *)(in_ECX + 0x30) = *puVar2;
        *(undefined4 *)(in_ECX + 0x34) = puVar2[1];
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0x344) {
        return;
      }
    }
    ExceptionList = &local_14;
    puVar2 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_1a0);
    *(undefined4 *)(in_ECX + 0x20) = *puVar2;
    *(undefined4 *)(in_ECX + 0x24) = puVar2[1];
    ExceptionList = local_14;
    return;
  }
  if (param_2 == 0x4c6) {
    local_1e8 = 0xf;
    local_1ec = 0;
    local_1fc[0] = local_1fc[0] & 0xffffff00;
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    local_c = 3;
    uVar5 = FUN_00973bd0(local_1fc);
    local_c = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x28) = uVar5;
    if (0xf < local_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1fc[0]);
    }
    local_1e8 = 0xf;
    local_1ec = 0;
    local_1fc[0] = local_1fc[0] & 0xffffff00;
    if (*(int *)(in_ECX + 0x28) != 0) {
      ExceptionList = local_14;
      return;
    }
    local_1cc = 0xf;
    local_1d0 = 0;
    local_1e0[0] = local_1e0[0] & 0xffffff00;
    FUN_00409350("effect.cpp",10);
    local_c = 4;
    uVar5 = FUN_004015b0(local_1e0,0x16ee,0x10004);
    local_c._0_1_ = 5;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    piVar6 = (int *)(iVar4 + 0x14);
    FUN_00987d50(uVar5,"bad ideology ",0xd,0);
    uVar5 = FUN_00418e30(uVar5,unaff_EDI,extraout_ECX_00," in file ");
    uVar5 = FUN_00418e30(uVar5);
    if (0xf < *(uint *)(iVar4 + 0x28)) {
      piVar6 = (int *)*piVar6;
    }
    uVar5 = FUN_00418e30(uVar5,piVar6);
    uVar5 = FUN_00418e30(uVar5," line ",unaff_ESI,unaff_ESI);
    uVar5 = FUN_00455470(uVar5);
    FUN_00401280(uVar5);
    local_c = CONCAT31(local_c._1_3_,4);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    local_1c4[0] = local_1e0[0];
    uStack_1b0 = local_1cc;
  }
  else {
    if (param_2 != 0x63b) {
      return;
    }
    local_204 = 0xf;
    local_208 = 0;
    local_218[0] = local_218[0] & 0xffffff00;
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    local_c = 0;
    iVar4 = FUN_00975ed0(local_218);
    if (iVar4 == 0) {
      iVar4 = FUN_00974850();
    }
    local_c = 0xffffffff;
    *(int *)(in_ECX + 0x2c) = iVar4;
    if (0xf < local_204) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_218[0]);
    }
    local_204 = 0xf;
    local_208 = 0;
    local_218[0] = local_218[0] & 0xffffff00;
    if ((*(int **)(in_ECX + 0x2c) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))(), cVar1 != '\0')) {
      ExceptionList = local_14;
      return;
    }
    FUN_009885d0();
    local_c = 1;
    uVar5 = FUN_004015b0(local_1c4,0x16e5,0x10004);
    local_c._0_1_ = 2;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    piVar6 = (int *)(iVar4 + 0x14);
    FUN_00987d50(uVar5,"Bad issue ",10,0);
    uVar5 = FUN_00418e30(uVar5,unaff_EDI,extraout_ECX," in file ");
    uVar5 = FUN_00418e30(uVar5);
    if (0xf < *(uint *)(iVar4 + 0x28)) {
      piVar6 = (int *)*piVar6;
    }
    uVar5 = FUN_00418e30(uVar5,piVar6);
    uVar5 = FUN_00418e30(uVar5," line ",unaff_ESI,unaff_ESI);
    uVar5 = FUN_00455470(uVar5);
    FUN_00401280(uVar5);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_120);
    appuStack_120[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_120);
  }
  if (uStack_1b0 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_1c4[0]);
}

