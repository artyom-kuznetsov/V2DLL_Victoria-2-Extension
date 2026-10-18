// FUN_0093df30 @ 0093df30 body=[[0093df30, 0093dfb4] [0093dfb8, 0093dfee]]


void FUN_0093df30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined1 *param_10,undefined4 param_11)

{
  undefined4 *unaff_ESI;
  undefined1 *local_40;
  uint local_3c;
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
  local_3c = 0;
  local_40 = &DAT_00ded94d;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_14 = (undefined1 *)&local_40;
  local_8 = 0;
  local_40 = param_10;
  local_3c = param_11;
  FUN_006a7ed0(unaff_ESI,param_3,param_4,param_5,local_30,0,param_6,param_7,param_8,param_9);
  if (0xf < local_1c) {
    local_3c = local_30[0];
                    /* WARNING: Subroutine does not return */
    local_40 = &UNK_0093dfb5;
    FUN_00aae91b();
  }
  unaff_ESI[0x21] = param_2;
  unaff_ESI[0x20] = param_1;
  *unaff_ESI = CFunctionMessage<CWar>::vftable;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  ExceptionList = local_10;
  return;
}

