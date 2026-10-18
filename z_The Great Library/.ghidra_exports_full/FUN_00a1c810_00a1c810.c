// FUN_00a1c810 @ 00a1c810 body=[[00a1c810, 00a1c892]]


undefined4 FUN_00a1c810(void)

{
  undefined4 *_Memory;
  int unaff_EDI;
  undefined4 local_8;
  
  local_8 = 0;
  if (unaff_EDI == 0) {
    return 0xffffff9a;
  }
  _Memory = *(undefined4 **)(unaff_EDI + 0x7c);
  if (_Memory == (undefined4 *)0x0) {
    return 0xffffff9a;
  }
  if ((_Memory[0x17] == 0) && (_Memory[0x14] != _Memory[0x15])) {
    local_8 = 0xffffff97;
  }
  if ((void *)*_Memory != (void *)0x0) {
    _free((void *)*_Memory);
    *_Memory = 0;
  }
  *_Memory = 0;
  if (_Memory[0x10] != 0) {
    FUN_00a1b4b0();
  }
  _Memory[0x10] = 0;
  _free(_Memory);
  *(undefined4 *)(unaff_EDI + 0x7c) = 0;
  return local_8;
}

