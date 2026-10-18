// FUN_00b2a4b0 @ 00b2a4b0 body=[[00b2a4b0, 00b2a4e1]]


undefined4 FUN_00b2a4b0(undefined4 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  if (param_1[1] == 0) {
    BVar1 = FlushFileBuffers((HANDLE)*param_1);
    if (BVar1 == 0) {
      uVar2 = FUN_00b29110();
      FUN_00b1f840(uVar2);
      return 0;
    }
  }
  return 1;
}

