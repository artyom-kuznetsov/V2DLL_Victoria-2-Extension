// FUN_00b0e440 @ 00b0e440 body=[[00b0e440, 00b0e4e3]]


void FUN_00b0e440(void)

{
  uint uVar1;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b39553;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_4 = 1;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4],uVar1);
    in_ECX[4] = 0;
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4]);
  }
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

