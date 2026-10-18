// FUN_004e0110 @ 004e0110 body=[[004e0110, 004e01cc]]


void FUN_004e0110(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (param_2 - in_EAX) / 0x160;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004e0530();
    FUN_004e0530(param_1 + iVar1 * -0x160,iVar1 * 0x160 + param_1,param_3);
    FUN_004e0530(param_2 + iVar1 * -0x2c0,param_2,param_3);
    FUN_004e0530(iVar1 * 0x160 + in_EAX,param_2 + iVar1 * -0x160,param_3);
    return;
  }
  FUN_004e0530();
  return;
}

