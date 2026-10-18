// FUN_00b24b40 @ 00b24b40 body=[[00b24b40, 00b24b69]]


undefined4 FUN_00b24b40(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 != param_3) {
    uVar1 = FUN_00b23450(param_2 * 0x40 + param_1,param_3 * 0x40 + param_1);
    return uVar1;
  }
  return 0;
}

