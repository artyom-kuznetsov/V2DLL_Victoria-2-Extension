// FUN_00aed7c0 @ 00aed7c0 body=[[00aed7c0, 00aed830]]


void FUN_00aed7c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3826b;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00dddaa0;
  local_4 = 0;
  if (in_ECX[5] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[5],uVar1);
  }
  local_4 = 0xffffffff;
  if (in_ECX[1] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[1]);
  }
  ExceptionList = local_c;
  return;
}

