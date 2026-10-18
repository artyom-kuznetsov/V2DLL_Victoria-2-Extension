// FUN_00b26a20 @ 00b26a20 body=[[00b26a20, 00b26a7c]]


undefined4 FUN_00b26a20(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00b2a4f0(param_1[1]);
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    return 0;
  }
  if (*(short *)(*param_1 + 0x14) != 0) {
    FUN_00b2eff0(param_1 + 5);
  }
  if (param_1[4] != 0) {
    (*DAT_013f3ab0)(param_1[4]);
  }
  (*DAT_013f3ab0)(param_1);
  return 1;
}

