// FUN_00b26620 @ 00b26620 body=[[00b26620, 00b26668]]


undefined4 FUN_00b26620(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined4 in_ECX;
  longlong lVar2;
  
  lVar2 = FUN_00b2a250();
  if (lVar2 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  uVar1 = PHYSFS_swapSLE16(in_ECX);
  *param_1 = uVar1;
  return 1;
}

