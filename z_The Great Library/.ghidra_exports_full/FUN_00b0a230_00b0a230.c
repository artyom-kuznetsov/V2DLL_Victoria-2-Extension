// FUN_00b0a230 @ 00b0a230 body=[[00b0a230, 00b0a2aa]]


void FUN_00b0a230(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39158;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfe0c;
  local_4 = 0;
  if (in_ECX[2] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[2],uVar1);
  }
  local_4 = 0xffffffff;
  *in_ECX = &PTR_LAB_00ddfe00;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

