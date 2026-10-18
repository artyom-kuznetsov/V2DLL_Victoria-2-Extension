// FUN_00b1b480 @ 00b1b480 body=[[00b1b480, 00b1b4e9]]


void FUN_00b1b480(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39f7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4],DAT_00ef259c ^ (uint)&stack0xffffffec);
  }
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

