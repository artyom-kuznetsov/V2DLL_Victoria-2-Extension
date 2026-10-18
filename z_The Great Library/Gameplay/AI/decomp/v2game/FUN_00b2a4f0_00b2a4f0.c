// FUN_00b2a4f0 @ 00b2a4f0 body=[[00b2a4f0, 00b2a528]]


undefined4 FUN_00b2a4f0(undefined4 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = CloseHandle((HANDLE)*param_1);
  if (BVar1 == 0) {
    uVar2 = FUN_00b29110();
    FUN_00b1f840(uVar2);
    return 0;
  }
  (*DAT_013f3ab0)(param_1);
  return 1;
}

