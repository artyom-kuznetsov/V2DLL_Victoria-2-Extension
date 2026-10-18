// FUN_00881260 @ 00881260 body=[[00881260, 0088135a] [0088135e, 0088144b]]


void FUN_00881260(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  char *pcVar4;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  int local_dc;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b589ef;
  local_14 = ExceptionList;
  if (param_2 == 0x1a) {
    pcVar4 = (char *)(param_1 + 0x22c);
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(pcVar4,(int)pcVar3 - (param_1 + 0x22d));
    local_c = 0;
    if (DAT_0125a69c == 0) {
      local_dc = FUN_00aae9af(0xc4);
      local_c._0_1_ = 1;
      if (local_dc == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_008b0060();
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_0044ec00(uVar2);
    }
    uVar2 = FUN_005661b0(local_114);
    local_c = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x24) = uVar2;
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_114[0]);
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    if (*(int *)(in_ECX + 0x24) == 0) {
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      FUN_00409350("effect.cpp",10);
      local_c = 2;
      uVar2 = FUN_004015b0(local_f8,0x44f,0x10004);
      local_c._0_1_ = 3;
      FUN_00987d50(uVar2,"Unknown modifier-type \'",0x17,0);
      uVar2 = FUN_00418e30(uVar2,pcVar4,extraout_ECX,&DAT_00e29cc8);
      uVar2 = FUN_00418e30(uVar2);
      FUN_00401280(uVar2);
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f8[0]);
      }
    }
  }
  else if (param_2 == 0x6c) {
    ExceptionList = &local_14;
    uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x20) = uVar2;
  }
  ExceptionList = local_14;
  return;
}

