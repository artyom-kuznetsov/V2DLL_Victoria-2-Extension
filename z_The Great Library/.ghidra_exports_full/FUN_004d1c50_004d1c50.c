// FUN_004d1c50 @ 004d1c50 body=[[004d1c50, 004d1cc4]]


void FUN_004d1c50(void)

{
  undefined4 *puVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  if (DAT_0125872c == (undefined4 *)0x0) {
    ExceptionList = &local_14;
    puVar1 = (undefined4 *)FUN_00aae9af(0x290);
    local_c = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_0125872c = (undefined4 *)0x0;
    }
    else {
      FUN_004cda50(puVar1);
      *puVar1 = CNullState::vftable;
      puVar1[0xc] = CNullState::vftable;
      DAT_0125872c = puVar1;
    }
  }
  ExceptionList = local_14;
  return;
}

