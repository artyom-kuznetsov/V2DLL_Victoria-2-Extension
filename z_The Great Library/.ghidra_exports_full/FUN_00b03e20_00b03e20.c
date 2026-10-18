// FUN_00b03e20 @ 00b03e20 body=[[00b03e20, 00b03ea5]]


void FUN_00b03e20(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b38d93;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfa74;
  local_4 = 1;
  FUN_00b015d0(uVar1);
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[0x11] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x11]);
  }
  local_4 = 0xffffffff;
  FUN_00b07410();
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

