// FUN_006e1570 @ 006e1570 body=[[006e1570, 006e1630]]


void FUN_006e1570(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006e1b80(iVar1 * 8 + in_EAX,param_3,param_4);
    FUN_006e1b80(iVar1 * 4 + param_1,param_3,param_4);
    FUN_006e1b80(param_2,param_3,param_4);
    FUN_006e1b80(param_2 + iVar1 * -4,param_3,param_4);
    return;
  }
  FUN_006e1b80(param_2,param_3,param_4);
  return;
}

