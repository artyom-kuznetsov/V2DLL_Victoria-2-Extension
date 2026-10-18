// FUN_00adcab0 @ 00adcab0 body=[[00adcab0, 00adcb30]]


void FUN_00adcab0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b377b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  if (*(int *)(in_ECX + 0x30) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x30),DAT_00ef259c ^ (uint)&stack0xffffffec);
  }
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x1c));
  }
  local_4 = 0xffffffff;
  if (*(int *)(in_ECX + 0xc) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0xc));
  }
  ExceptionList = local_c;
  return;
}

