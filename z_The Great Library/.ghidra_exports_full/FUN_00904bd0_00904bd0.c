// FUN_00904bd0 @ 00904bd0 body=[[00904bd0, 00904cd8] [00904cdb, 00904d22] [00904d26, 00904d3c]]


void FUN_00904bd0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  undefined4 *local_104;
  int local_100;
  undefined4 local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b58891;
  pvStack_14 = ExceptionList;
  local_104 = (undefined4 *)0x0;
  local_100 = 0;
  local_fc = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_0045be80(param_1,&local_104);
  puVar1 = local_104;
  if ((local_100 - (int)local_104) / 0x1c == 2) {
    puVar3 = local_104;
    if (0xf < (uint)local_104[5]) {
      puVar3 = (undefined4 *)*local_104;
    }
    uVar2 = FUN_00aaf0c5(puVar3);
    *(undefined4 *)(in_ECX + 0x1c) = uVar2;
    piVar4 = puVar1 + 7;
    if (0xf < (uint)puVar1[0xc]) {
      piVar4 = (int *)*piVar4;
    }
    uVar2 = FUN_00aaf0c5(piVar4);
    *(undefined4 *)(in_ECX + 0x20) = uVar2;
    *(undefined1 *)(in_ECX + 0x24) = 1;
  }
  else {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c._0_1_ = 1;
    uVar2 = FUN_004015b0(local_f4,0x276d,0x10004);
    local_c._0_1_ = 2;
    FUN_00987d50(uVar2,"values_contains has invalid amount of arguments.\n",0x31,0);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
  FUN_00413860();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar1);
}

