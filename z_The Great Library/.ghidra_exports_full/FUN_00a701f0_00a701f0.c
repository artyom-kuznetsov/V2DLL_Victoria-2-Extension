// FUN_00a701f0 @ 00a701f0 body=[[00a701f0, 00a70222] [00a70226, 00a70246]]


undefined4 * FUN_00a701f0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_013f05f8;
  if (param_1 == DAT_013f05f8) {
    DAT_013f05f8 = param_1;
    return &DAT_013f05f8;
  }
  if (DAT_013f05f8 != 0) {
    if (DAT_01258b2f != '\0') {
      CoUninitialize();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_013f05f8 = param_1;
  return &DAT_013f05f8;
}

