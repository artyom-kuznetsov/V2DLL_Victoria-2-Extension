// FUN_00b1f390 @ 00b1f390 body=[[00b1f390, 00b1f400]]


void FUN_00b1f390(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3a11b;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de0b20;
  local_4 = 0;
  (*(code *)PTR__free_00f01b10)(in_ECX[6],uVar1);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  local_4 = 0xffffffff;
  FUN_00b1a080();
  ExceptionList = local_c;
  return;
}

