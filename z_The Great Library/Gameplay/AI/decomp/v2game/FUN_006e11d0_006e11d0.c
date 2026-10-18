// FUN_006e11d0 @ 006e11d0 body=[[006e11d0, 006e12a1]]


void FUN_006e11d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = (in_EAX - in_ECX) / 0x30;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_006e1960();
    FUN_006e1960(param_1 + iVar1 * -0x30,param_1,iVar1 * 0x30 + param_1,param_2,param_3);
    iVar2 = in_EAX + iVar1 * -0x30;
    FUN_006e1960(in_EAX + iVar1 * -0x60,iVar2);
    FUN_006e1960(iVar1 * 0x30 + in_ECX,param_1,iVar2,param_2,param_3);
    return;
  }
  FUN_006e1960();
  return;
}

