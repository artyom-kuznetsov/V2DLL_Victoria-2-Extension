// FUN_00678580 @ 00678580 body=[[00678580, 006785c2]]


void FUN_00678580(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0068b610(DAT_012588e8);
  if (*(char *)(iVar1 + 0x28) != '\0') {
    FUN_00632b40(param_1,param_2);
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}

