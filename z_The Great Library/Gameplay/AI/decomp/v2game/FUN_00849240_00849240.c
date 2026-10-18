// FUN_00849240 @ 00849240 body=[[00849240, 00849301]]


void FUN_00849240(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00849810(iVar1 * 0x10 + in_EAX,param_3,param_4);
    FUN_00849810(iVar1 * 8 + param_1,param_3,param_4);
    FUN_00849810(param_2,param_3,param_4);
    FUN_00849810(param_2 + iVar1 * -8,param_3,param_4);
    return;
  }
  FUN_00849810(param_2,param_3,param_4);
  return;
}

