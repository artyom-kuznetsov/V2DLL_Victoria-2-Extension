// FUN_00927e40 @ 00927e40 body=[[00927e40, 00927ebd]]


int FUN_00927e40(void)

{
  int iVar1;
  int iVar2;
  uint3 uVar4;
  int iVar3;
  int in_ECX;
  bool bVar5;
  
  iVar3 = *(int *)(DAT_012588e8 + 0xb0c);
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  iVar2 = FUN_00425a40();
  bVar5 = *(int *)(iVar2 + 4) == *(int *)(in_ECX + 0xc);
  uVar4 = (uint3)((uint)iVar2 >> 8);
  if (bVar5) {
    if (*(int *)(iVar1 + 0xa8) == iVar3) {
      return (uint)uVar4 << 8;
    }
  }
  else if (*(int *)(iVar1 + 0xac) == iVar3) {
    return (uint)uVar4 << 8;
  }
  iVar3 = FUN_00952850(0,1,bVar5);
  return iVar3;
}

