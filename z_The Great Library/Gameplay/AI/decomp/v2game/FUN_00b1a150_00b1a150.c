// FUN_00b1a150 @ 00b1a150 body=[[00b1a150, 00b1a1d8]]


void FUN_00b1a150(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b372c8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de07e0;
  local_4 = 0;
  if ((FILE *)in_ECX[4] != (FILE *)0x0) {
    _fclose((FILE *)in_ECX[4]);
    in_ECX[4] = 0;
  }
  FUN_00b13650(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_LAB_00ddcc20;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

