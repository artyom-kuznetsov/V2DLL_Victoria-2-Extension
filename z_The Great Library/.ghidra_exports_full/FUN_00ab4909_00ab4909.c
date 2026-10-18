// FUN_00ab4909 @ 00ab4909 body=[[00ab4909, 00ab4935]]


undefined4 FUN_00ab4909(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    return 0x16;
  }
  *param_1 = DAT_00f20950;
  return 0;
}

