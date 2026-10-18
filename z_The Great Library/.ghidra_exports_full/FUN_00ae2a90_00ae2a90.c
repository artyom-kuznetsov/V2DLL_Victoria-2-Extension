// FUN_00ae2a90 @ 00ae2a90 body=[[00ae2a90, 00ae2b26]]


void FUN_00ae2a90(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b37a83;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddd954;
  local_4 = 1;
  FUN_00ae2350(1);
  if ((undefined4 *)in_ECX[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xb])(1,uVar1);
  }
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[7] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[7]);
  }
  local_4 = 0xffffffff;
  FUN_00b093a0();
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

