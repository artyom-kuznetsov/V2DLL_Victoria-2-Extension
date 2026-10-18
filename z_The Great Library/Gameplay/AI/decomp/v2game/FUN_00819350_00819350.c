// FUN_00819350 @ 00819350 body=[[00819350, 008193db]]


void FUN_00819350(undefined4 param_1)

{
  int iVar1;
  
  if ((&param_1 < DAT_01268cc8) && (DAT_01268cc4 <= &param_1)) {
    iVar1 = (int)&param_1 - (int)DAT_01268cc4;
    if (DAT_01268cc8 == DAT_01268ccc) {
      FUN_00a513f0();
    }
    if (DAT_01268cc8 != (undefined4 *)0x0) {
      *DAT_01268cc8 = DAT_01268cc4[iVar1 >> 2];
    }
    DAT_01268cc8 = DAT_01268cc8 + 1;
    return;
  }
  if (DAT_01268cc8 == DAT_01268ccc) {
    FUN_00a513f0();
  }
  if (DAT_01268cc8 != (undefined4 *)0x0) {
    *DAT_01268cc8 = param_1;
  }
  DAT_01268cc8 = DAT_01268cc8 + 1;
  return;
}

