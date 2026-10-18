// FUN_00b25160 @ 00b25160 body=[[00b25160, 00b25193]]


undefined4 FUN_00b25160(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00b25010(param_2,&param_1);
  if ((iVar1 == 0) && (param_1 == 0)) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = 1;
  return 0;
}

