// FUN_00b265d0 @ 00b265d0 body=[[00b265d0, 00b26617]]


undefined4 FUN_00b265d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  longlong lVar2;
  
  lVar2 = FUN_00b2a250();
  if (lVar2 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  uVar1 = PHYSFS_swapSLE32(in_ECX);
  *param_1 = uVar1;
  return 1;
}

