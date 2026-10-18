// FUN_00a7c430 @ 00a7c430 body=[[00a7c430, 00a7c4e3]]


int FUN_00a7c430(char *param_1)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d688;
  local_10 = ExceptionList;
  piVar1 = (int *)(in_ECX + 0x50);
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00a7d6b0(piVar1);
  local_8 = 0xffffffff;
  FUN_00a7c4f0();
  _strncpy((char *)(((*(int *)(in_ECX + 0x54) - *piVar1) / 0x60) * 0x60 + -0x60 + *piVar1),param_1,
           0x40);
  ExceptionList = local_10;
  return ((*(int *)(in_ECX + 0x54) - *piVar1) / 0x60) * 0x60 + -0x60 + *piVar1;
}

