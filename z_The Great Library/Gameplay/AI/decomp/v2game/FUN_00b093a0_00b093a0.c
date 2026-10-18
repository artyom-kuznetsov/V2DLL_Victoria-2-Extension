// FUN_00b093a0 @ 00b093a0 body=[[00b093a0, 00b09452]]


void FUN_00b093a0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_00b390d2;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfdd0;
  iVar1 = in_ECX[2];
  local_4 = 0;
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[1] + -4 + in_ECX[2] * 4);
    if (iVar1 != 0) {
      FUN_00b08610(uVar2);
      (*(code *)PTR__free_00f01b10)(iVar1);
    }
    if (in_ECX[2] != 0) {
      in_ECX[2] = in_ECX[2] + -1;
    }
    iVar1 = in_ECX[2];
  }
  iVar1 = in_ECX[6];
  if (iVar1 != 0) {
    FUN_00b09990();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  local_4 = 0xffffffff;
  if (in_ECX[1] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[1]);
  }
  ExceptionList = local_c;
  return;
}

