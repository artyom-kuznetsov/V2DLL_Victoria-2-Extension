// FUN_00a306b0 @ 00a306b0 body=[[00a306b0, 00a3073b]]


void FUN_00a306b0(undefined4 param_1)

{
  int iVar1;
  
  if ((&param_1 < DAT_0132ce4c) && (DAT_0132ce48 <= &param_1)) {
    iVar1 = (int)&param_1 - (int)DAT_0132ce48;
    if (DAT_0132ce4c == DAT_0132ce50) {
      FUN_00a513f0();
    }
    if (DAT_0132ce4c != (undefined4 *)0x0) {
      *DAT_0132ce4c = DAT_0132ce48[iVar1 >> 2];
    }
    DAT_0132ce4c = DAT_0132ce4c + 1;
    return;
  }
  if (DAT_0132ce4c == DAT_0132ce50) {
    FUN_00a513f0();
  }
  if (DAT_0132ce4c != (undefined4 *)0x0) {
    *DAT_0132ce4c = param_1;
  }
  DAT_0132ce4c = DAT_0132ce4c + 1;
  return;
}

