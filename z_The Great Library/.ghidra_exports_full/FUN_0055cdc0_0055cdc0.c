// FUN_0055cdc0 @ 0055cdc0 body=[[0055cdc0, 0055ce4f]]


void FUN_0055cdc0(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3cf06;
  local_10 = ExceptionList;
  if (DAT_012587e4 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(0x424);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_012587e4 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      local_8 = 1;
      _eh_vector_constructor_iterator_(puVar1 + 5,0x10,0x40,FUN_00413490,FUN_00aa8540);
      puVar1[0x105] = 0;
      puVar1[0x106] = 0;
      puVar1[0x107] = 0;
      DAT_012587e4 = puVar1;
    }
  }
  ExceptionList = local_10;
  return;
}

