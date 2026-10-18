// FUN_00b0ebe0 @ 00b0ebe0 body=[[00b0ebe0, 00b0ec7e]]


undefined4 * FUN_00b0ebe0(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b39669;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)
           (*(code *)PTR_FUN_00f01b08)
                     (0x1c,0xcb,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe4);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00b0ef10(param_1);
    *puVar1 = &PTR_FUN_00de006c;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined2 *)(puVar1 + 6) = 0xcb;
  }
  uStack_4 = 0xffffffff;
  FUN_00b0ee90(in_ECX + 0xc);
  ExceptionList = local_c;
  return puVar1;
}

