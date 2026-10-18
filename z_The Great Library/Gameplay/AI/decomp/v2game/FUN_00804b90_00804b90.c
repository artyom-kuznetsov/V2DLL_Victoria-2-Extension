// FUN_00804b90 @ 00804b90 body=[[00804b90, 00804bac] [00804bb0, 00804bc1] [00804bc5, 00804bde]]


undefined1 FUN_00804b90(int *param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_00641ef0(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    param_1 = param_1 + 1;
  } while (param_1 != param_2);
  return param_3;
}

