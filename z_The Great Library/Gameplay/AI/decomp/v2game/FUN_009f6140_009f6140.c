// FUN_009f6140 @ 009f6140 body=[[009f6140, 009f61ed]]


undefined1 * FUN_009f6140(undefined1 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41859;
  local_10 = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  piVar1 = (int *)(**(code **)(*in_ECX + 0xd0))();
  iVar2 = piVar1[1] - *piVar1 >> 5;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  local_14 = iVar2;
  if (0 < iVar2) {
    do {
      FUN_00448aa0(*piVar1 + iVar3,0,0xffffffff);
      iVar3 = iVar3 + 0x20;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (iVar2 < piVar1[1] - *piVar1 >> 5) {
    FUN_00448740(&DAT_00dfce2c,3);
  }
  ExceptionList = local_10;
  return param_1;
}

