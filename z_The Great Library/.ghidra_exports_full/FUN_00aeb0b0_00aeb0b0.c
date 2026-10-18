// FUN_00aeb0b0 @ 00aeb0b0 body=[[00aeb0b0, 00aeb13b]]


void FUN_00aeb0b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  uint uVar4;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b381b8;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  iVar1 = in_ECX[1];
  local_4 = 0;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar3, iVar1 != 0) {
    puVar2 = *(undefined4 **)(*in_ECX + -4 + in_ECX[1] * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1,uVar4);
    }
    if (in_ECX[1] != 0) {
      in_ECX[1] = in_ECX[1] + -1;
    }
    ppvVar3 = ExceptionList;
    iVar1 = in_ECX[1];
  }
  in_ECX[4] = 0;
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

