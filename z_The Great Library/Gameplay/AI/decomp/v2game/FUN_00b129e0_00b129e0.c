// FUN_00b129e0 @ 00b129e0 body=[[00b129e0, 00b12a5b]]


void FUN_00b129e0(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39af8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de03d4;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[3],uVar1);
  }
  local_4 = 0xffffffff;
  FUN_00b0ef30();
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

