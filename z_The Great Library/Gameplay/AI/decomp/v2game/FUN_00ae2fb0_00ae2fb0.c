// FUN_00ae2fb0 @ 00ae2fb0 body=[[00ae2fb0, 00ae3017]]


void FUN_00ae2fb0(ushort param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (param_1 == 0) {
    *(undefined2 *)(in_ECX + 1) = 0;
    if (*in_ECX != 0) {
      (*(code *)PTR__free_00f01b10)(*in_ECX);
    }
    *in_ECX = 0;
    return;
  }
  if (*in_ECX != 0) {
    iVar1 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX,(uint)param_1 * 2);
    *in_ECX = iVar1;
    return;
  }
  iVar1 = (*(code *)PTR_FUN_00f01b08)((uint)param_1 * 2,0x10,4,2,0,0xffffffff);
  *in_ECX = iVar1;
  return;
}

