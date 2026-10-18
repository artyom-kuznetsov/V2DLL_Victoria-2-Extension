// FUN_00493a20 @ 00493a20 body=[[00493a20, 00493aa4] [00493aa8, 00493ae7]]


void FUN_00493a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined1 *param_11,undefined4 param_12)

{
  undefined4 *unaff_ESI;
  undefined1 *local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_38 = 0;
  local_3c = &DAT_00ded94d;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_14 = (undefined1 *)&local_3c;
  local_8 = 0;
  local_3c = param_11;
  local_38 = param_12;
  FUN_006a7ed0(unaff_ESI,param_2,param_3,param_4,local_30,0,param_7,param_8,param_9,param_10);
  if (0xf < local_1c) {
    local_38 = local_30[0];
                    /* WARNING: Subroutine does not return */
    local_3c = &UNK_00493aa5;
    FUN_00aae91b();
  }
  unaff_ESI[0x22] = param_5;
  unaff_ESI[0x20] = param_1;
  *unaff_ESI = CFunctionMessage<CInGameIdler>::vftable;
  unaff_ESI[0x23] = param_6;
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x25] = 0;
  ExceptionList = local_10;
  return;
}

