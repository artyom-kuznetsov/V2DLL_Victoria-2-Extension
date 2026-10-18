// FUN_00559100 @ 00559100 body=[[00559100, 005591a0]]


void FUN_00559100(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0055a0a0(iVar1 * 0x10 + in_EAX,param_3);
    FUN_0055a0a0(iVar1 * 8 + param_1,param_3);
    FUN_0055a0a0(param_2,param_3);
    FUN_0055a0a0(param_2 + iVar1 * -8,param_3);
    return;
  }
  FUN_0055a0a0(param_2,param_3);
  return;
}

