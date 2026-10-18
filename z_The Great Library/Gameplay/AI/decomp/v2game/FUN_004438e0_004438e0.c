// FUN_004438e0 @ 004438e0 body=[[004438e0, 00443917] [0044391b, 00443969]]


void FUN_004438e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a526;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMapIconManager<5>::vftable;
  local_8 = 0;
  if (param_1[0x2e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2e]);
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x15,0x10,5,FUN_00aa8540);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(param_1 + 1,0x10,5,FUN_00aa8540);
  ExceptionList = local_10;
  return;
}

