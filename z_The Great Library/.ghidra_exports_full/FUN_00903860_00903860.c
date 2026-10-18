// FUN_00903860 @ 00903860 body=[[00903860, 00903958] [0090395e, 0090397c] [00903980, 00903996]]


void FUN_00903860(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
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
  
  puStack_10 = &LAB_00b589b1;
  pvStack_14 = ExceptionList;
  local_104 = (undefined4 *)0x0;
  local_100 = 0;
  local_fc = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_005e5a20(param_1,&local_104);
  puVar1 = local_104;
  if ((local_100 - (int)local_104 & 0xfffffffcU) == 0xc) {
    *(undefined4 *)(in_ECX + 0x1c) = *local_104;
    *(undefined4 *)(in_ECX + 0x20) = local_104[1];
    *(undefined4 *)(in_ECX + 0x24) = local_104[2];
    *(undefined1 *)(in_ECX + 0x28) = 1;
  }
  else {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c._0_1_ = 1;
    uVar2 = FUN_004015b0(local_f4,0x2613,0x10004);
    local_c._0_1_ = 2;
    FUN_00987d50(uVar2,"values_greater has invalid amount of arguments.\n",0x30,0);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar1);
  }
  ExceptionList = pvStack_14;
  return;
}

