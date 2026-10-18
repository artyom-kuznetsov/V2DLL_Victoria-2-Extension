// FUN_00898650 @ 00898650 body=[[00898650, 00898755] [00898759, 00898885] [00898889, 0089889f]]


void FUN_00898650(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  undefined1 local_e0 [128];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b689e1;
  local_14 = ExceptionList;
  if (param_2 == 0x344) {
    pcVar1 = (char *)(param_1 + 0x22c);
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    pcVar4 = pcVar1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(pcVar1,(int)pcVar4 - (param_1 + 0x22d));
    local_c = 0;
    iVar5 = FUN_00975ed0(local_118);
    if (iVar5 == 0) {
      iVar5 = FUN_00974850();
    }
    local_c = 0xffffffff;
    *(int *)(in_ECX + 0x28) = iVar5;
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_118[0]);
    }
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    if ((*(int **)(in_ECX + 0x28) != (int *)0x0) &&
       (cVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(), cVar2 != '\0')) {
      ExceptionList = local_14;
      return;
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc[0] = local_fc[0] & 0xffffff00;
    FUN_00409350("effect.cpp",10);
    local_c = 1;
    uVar6 = FUN_004015b0(local_fc,0x13a7,0x10004);
    local_c._0_1_ = 2;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    uVar9 = 0;
    piVar7 = (int *)(iVar5 + 0x14);
    FUN_00987d50(uVar6,"Bad issue ",10,0);
    uVar6 = FUN_00418e30(uVar6,pcVar1,extraout_ECX," in file ");
    uVar6 = FUN_00418e30(uVar6);
    if (0xf < *(uint *)(iVar5 + 0x28)) {
      piVar7 = (int *)*piVar7;
    }
    uVar6 = FUN_00418e30(uVar6,piVar7);
    uVar6 = FUN_00418e30(uVar6," line ",extraout_ECX_00,uVar9);
    uVar6 = FUN_00455470(uVar6);
    FUN_00401280(uVar6);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_fc[0]);
    }
  }
  else if (param_2 == 0x3be) {
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_e0);
    lVar8 = __allmul(*puVar3,puVar3[1],0x320000,0);
    *(longlong *)(in_ECX + 0x20) = lVar8 >> 0xf;
    ExceptionList = local_14;
    return;
  }
  ExceptionList = local_14;
  return;
}

