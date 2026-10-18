// FUN_008cde00 @ 008cde00 body=[[008cde00, 008cdecd] [008cded1, 008cdf9a] [008cdf9e, 008cdfb3]]


void FUN_008cde00(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
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
  pcVar2 = &stack0x00000008;
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  local_c = 0;
  if (DAT_0125a69c == 0) {
    local_dc = FUN_00aae9af(0xc4);
    local_c._0_1_ = 1;
    if (local_dc == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_008b0060();
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_0044ec00(uVar3);
  }
  uVar3 = FUN_005661b0(local_114);
  local_c = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1c) = uVar3;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_114[0]);
  }
  if (*(int *)(in_ECX + 0x1c) == 0) {
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c = 2;
    uVar3 = FUN_004015b0(local_f8,0xb63,0x10004);
    local_c._0_1_ = 3;
    FUN_00987d50(uVar3,"Unknown modifier \'",0x12,0);
    uVar3 = FUN_00418e30(uVar3,&stack0x00000008,extraout_ECX,
                         "\' referred to in has_province_modifier trigger.");
    uVar3 = FUN_00418e30(uVar3);
    FUN_00401280(uVar3);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

