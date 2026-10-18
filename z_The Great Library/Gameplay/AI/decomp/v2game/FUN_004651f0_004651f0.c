// FUN_004651f0 @ 004651f0 body=[[004651f0, 00465238] [0046523c, 0046526c]]


/* WARNING: Removing unreachable block (ram,0x00465233) */

void FUN_004651f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d528;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004669e0();
  local_8 = 0xffffffff;
  FUN_00466630(param_2,param_3);
  ExceptionList = local_10;
  return;
}

