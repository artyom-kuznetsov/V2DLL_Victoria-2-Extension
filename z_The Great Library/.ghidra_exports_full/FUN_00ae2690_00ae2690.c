// FUN_00ae2690 @ 00ae2690 body=[[00ae2690, 00ae2711]]


void FUN_00ae2690(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b37a03;
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
  ExceptionList = local_c;
  return;
}

