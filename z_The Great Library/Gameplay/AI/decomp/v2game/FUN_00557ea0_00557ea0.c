// FUN_00557ea0 @ 00557ea0 body=[[00557ea0, 00557f3f]]


void FUN_00557ea0(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00559770(iVar1 * 8 + in_EAX,param_3);
    FUN_00559770(iVar1 * 4 + param_1,param_3);
    FUN_00559770(param_2,param_3);
    FUN_00559770(param_2 + iVar1 * -4,param_3);
    return;
  }
  FUN_00559770(param_2,param_3);
  return;
}

