// FUN_00a748d0 @ 00a748d0 body=[[00a748d0, 00a74991]]


undefined4 * FUN_00a748d0(undefined4 *param_1)

{
  int *piVar1;
  SOCKET SVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a653;
  local_10 = ExceptionList;
  uVar4 = 0;
  ExceptionList = &local_10;
  param_1[1] = 0x662;
  param_1[2] = 0;
  piVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_00e43548;
  *piVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_8 = 1;
  SVar2 = socket(2,1,0);
  param_1[3] = SVar2;
  FUN_00a76990();
  iVar3 = param_1[5] - *piVar1 >> 0x1f;
  if ((param_1[5] - *piVar1) / 0x24 + iVar3 != iVar3) {
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + *piVar1) = 0xffffffff;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x24;
    } while (uVar4 < (uint)((param_1[5] - *piVar1) / 0x24));
    ExceptionList = local_10;
    return param_1;
  }
  ExceptionList = local_10;
  return param_1;
}

