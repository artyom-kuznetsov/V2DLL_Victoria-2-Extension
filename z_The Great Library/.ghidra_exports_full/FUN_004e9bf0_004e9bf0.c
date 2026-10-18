// FUN_004e9bf0 @ 004e9bf0 body=[[004e9bf0, 004e9c80] [004e9c84, 004e9cbb]]


void FUN_004e9bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 *unaff_ESI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350();
  local_c = 0;
  FUN_006a7ed0(unaff_ESI,param_3,param_4,param_7,local_34,0,param_5,param_6,param_8,param_9);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  unaff_ESI[0x21] = param_2;
  unaff_ESI[0x20] = param_1;
  *unaff_ESI = CFunctionMessage<CMessageHandler>::vftable;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  ExceptionList = local_14;
  return;
}

