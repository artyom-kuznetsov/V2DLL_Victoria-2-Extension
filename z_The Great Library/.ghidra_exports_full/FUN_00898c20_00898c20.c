// FUN_00898c20 @ 00898c20 body=[[00898c20, 00898cf8] [00898cfc, 00898e17] [00898e1b, 00898e31]]


void FUN_00898c20(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
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
    pcVar6 = (char *)(param_1 + 0x22c);
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    pcVar4 = pcVar6;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(pcVar6,(int)pcVar4 - (param_1 + 0x22d));
    local_c = 0;
    uVar5 = FUN_00973bd0(local_118);
    local_c = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x28) = uVar5;
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_118[0]);
    }
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    if (*(int *)(in_ECX + 0x28) == 0) {
      local_e8 = 0xf;
      local_ec = 0;
      local_fc[0] = local_fc[0] & 0xffffff00;
      FUN_00409350("effect.cpp",10);
      local_c = 1;
      uVar5 = FUN_004015b0(local_fc,0x13d9,0x10004);
      local_c._0_1_ = 2;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      uVar8 = 0;
      piVar7 = (int *)(iVar2 + 0x14);
      FUN_00987d50(uVar5,"Bad ideology ",0xd,0);
      uVar5 = FUN_00418e30(uVar5,pcVar6,extraout_ECX," in file ");
      uVar5 = FUN_00418e30(uVar5);
      if (0xf < *(uint *)(iVar2 + 0x28)) {
        piVar7 = (int *)*piVar7;
      }
      uVar5 = FUN_00418e30(uVar5,piVar7);
      uVar5 = FUN_00418e30(uVar5," line ",extraout_ECX_00,uVar8);
      uVar5 = FUN_00455470(uVar5);
      FUN_00401280(uVar5);
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_fc[0]);
      }
    }
  }
  else if (param_2 == 0x3be) {
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_e0);
    *(undefined4 *)(in_ECX + 0x20) = *puVar3;
    *(undefined4 *)(in_ECX + 0x24) = puVar3[1];
    ExceptionList = local_14;
    return;
  }
  ExceptionList = local_14;
  return;
}

