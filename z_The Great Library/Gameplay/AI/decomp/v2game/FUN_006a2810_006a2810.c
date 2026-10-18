// FUN_006a2810 @ 006a2810 body=[[006a2810, 006a28f1]]


void FUN_006a2810(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006a2fd0(iVar1 * 8 + in_EAX,param_3,param_4);
    FUN_006a2fd0(iVar1 * 4 + param_1,param_3,param_4);
    FUN_006a2fd0(param_2,param_3,param_4);
    param_2 = param_2 + iVar1 * -4;
  }
  FUN_006a2fd0(param_2,param_3,param_4);
  return;
}

