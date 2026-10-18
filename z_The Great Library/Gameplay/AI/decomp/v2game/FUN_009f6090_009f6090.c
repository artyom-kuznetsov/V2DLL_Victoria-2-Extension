// FUN_009f6090 @ 009f6090 body=[[009f6090, 009f6133]]


undefined1 * FUN_009f6090(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41829;
  local_10 = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  piVar1 = (int *)(**(code **)(*in_ECX + 0xd0))();
  iVar2 = *piVar1;
  if (0 < (int)(piVar1[1] - iVar2 & 0xffffffe0U)) {
    iVar3 = 0;
    do {
      FUN_00448aa0(iVar2 + iVar3,0,0xffffffff);
      iVar2 = *piVar1;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar4 < piVar1[1] - iVar2 >> 5);
    ExceptionList = local_10;
    return param_1;
  }
  ExceptionList = local_10;
  return param_1;
}

