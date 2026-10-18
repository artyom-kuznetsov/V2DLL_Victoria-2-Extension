// FUN_004d6880 @ 004d6880 body=[[004d6880, 004d691d]]


void FUN_004d6880(int param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = in_EAX - in_ECX >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004d6c00();
    FUN_004d6c00(param_1 + iVar1 * -8,param_1,iVar1 * 8 + param_1,param_2);
    iVar2 = in_EAX + iVar1 * -8;
    FUN_004d6c00(in_EAX + iVar1 * -0x10,iVar2);
    FUN_004d6c00(iVar1 * 8 + in_ECX,param_1,iVar2,param_2);
    return;
  }
  FUN_004d6c00();
  return;
}

