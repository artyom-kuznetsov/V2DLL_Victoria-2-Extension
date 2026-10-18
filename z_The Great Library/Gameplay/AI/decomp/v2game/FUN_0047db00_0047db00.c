// FUN_0047db00 @ 0047db00 body=[[0047db00, 0047dba0]]


undefined4 * FUN_0047db00(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4044b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CGoodsPool::vftable;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  local_8 = 0;
  FID_conflict__memcpy(param_1 + 2,(void *)(param_2 + 8),DAT_012587f4);
  iVar4 = *(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48) >> 3;
  FUN_0043a880();
  iVar3 = 1;
  if (1 < iVar4) {
    do {
      iVar1 = *(int *)(param_2 + 0x48);
      iVar2 = param_1[0x12];
      *(undefined4 *)(iVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  ExceptionList = local_10;
  return param_1;
}

