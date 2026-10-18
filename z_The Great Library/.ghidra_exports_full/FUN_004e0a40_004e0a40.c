// FUN_004e0a40 @ 004e0a40 body=[[004e0a40, 004e0aa7]]


void FUN_004e0a40(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258a10 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(0x278);
    local_8 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_01258a10 = (undefined4 *)0x0;
    }
    else {
      FUN_00954a40(puVar1);
      *puVar1 = CNullPop::vftable;
      DAT_01258a10 = puVar1;
    }
  }
  ExceptionList = local_10;
  return;
}

