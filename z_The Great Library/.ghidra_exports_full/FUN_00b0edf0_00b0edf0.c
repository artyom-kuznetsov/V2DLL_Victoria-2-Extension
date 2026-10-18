// FUN_00b0edf0 @ 00b0edf0 body=[[00b0edf0, 00b0ee8d]]


void FUN_00b0edf0(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b396a3;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de006c;
  local_4 = 1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  if (in_ECX[3] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[3],uVar1);
    in_ECX[3] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[3] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[3]);
  }
  local_4 = 0xffffffff;
  FUN_00b0ef30();
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

