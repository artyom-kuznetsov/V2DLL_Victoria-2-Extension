// FUN_00b26d00 @ 00b26d00 body=[[00b26d00, 00b26db4]]


bool FUN_00b26d00(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 local_8;
  
  iVar1 = FUN_00b2a1b0(param_1);
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    return false;
  }
  lVar4 = FUN_00b2a250(iVar1,&local_8,4,1);
  if (lVar4 != 1) {
    FUN_00b1f840(0);
    FUN_00b2a4f0(iVar1);
    return false;
  }
  iVar2 = PHYSFS_swapSLE32(local_8);
  bVar3 = iVar2 == 0x4034b50;
  if (!bVar3) {
    lVar4 = FUN_00b26a80(iVar1);
    if (lVar4 != -1) {
      FUN_00b2a4f0(iVar1);
      return true;
    }
    bVar3 = false;
  }
  FUN_00b2a4f0(iVar1);
  return bVar3;
}

