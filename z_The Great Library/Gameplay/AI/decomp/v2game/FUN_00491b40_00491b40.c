// FUN_00491b40 @ 00491b40 body=[[00491b40, 00491b8c]]


undefined1 * FUN_00491b40(undefined1 *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x78);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (1 < iVar1) {
    FUN_00408ed0(in_ECX + 0x68,0,0xffffffff);
    return param_1;
  }
  FUN_00409350("TODO name the division construction",0x23);
  return param_1;
}

