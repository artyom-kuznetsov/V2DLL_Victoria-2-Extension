// FUN_009f6290 @ 009f6290 body=[[009f6290, 009f631c]]


undefined1 * FUN_009f6290(undefined1 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41829;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  piVar1 = (int *)(**(code **)(*in_ECX + 0xd0))();
  if (param_2 < param_3) {
    iVar2 = param_2 << 5;
    param_2 = param_3 - param_2;
    do {
      FUN_00448aa0(*piVar1 + iVar2,0,0xffffffff);
      iVar2 = iVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = local_10;
  return param_1;
}

