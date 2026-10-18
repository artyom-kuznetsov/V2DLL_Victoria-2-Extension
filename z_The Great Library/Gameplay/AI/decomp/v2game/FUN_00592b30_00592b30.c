// FUN_00592b30 @ 00592b30 body=[[00592b30, 00592bde] [00592be2, 00592cf6] [00592d11, 00592db5]]


void FUN_00592b30(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  char *pcVar6;
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
  if (param_2 == 0x2f0) {
    ExceptionList = &local_14;
    puVar5 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_e0,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 8) = *puVar5;
    *(undefined4 *)(in_ECX + 0xc) = puVar5[1];
  }
  else {
    if (param_2 == 0x307) {
      pcVar2 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x352) {
      ExceptionList = &local_14;
      uVar4 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x3c) = uVar4;
      ExceptionList = local_14;
      return;
    }
    pcVar6 = (char *)(param_1 + 0x24);
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    pcVar2 = pcVar6;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(pcVar6,(int)pcVar2 - (param_1 + 0x25));
    local_c = 0;
    FUN_005c1a10();
    piVar3 = (int *)FUN_005c2ad0(local_118);
    local_c = 0xffffffff;
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_118[0]);
    }
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x24))();
      if (cVar1 != '\0') {
        uVar4 = FUN_00aaf0c5(param_1 + 0x22c);
        *(undefined4 *)(*(int *)(in_ECX + 0x2c) + piVar3[9] * 4) = uVar4;
        ExceptionList = local_14;
        return;
      }
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc[0] = local_fc[0] & 0xffffff00;
    FUN_00409350("battleresult.cpp",0x10);
    local_c = 1;
    uVar4 = FUN_004015b0(local_fc,0x4b,0x10004);
    local_c._0_1_ = 2;
    FUN_00987d50(uVar4,"Unknown statement ",0x12,0);
    uVar4 = FUN_00418e30(uVar4,pcVar6,extraout_ECX," in battleresult.");
    uVar4 = FUN_00418e30(uVar4);
    FUN_00401280(uVar4);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_fc[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

