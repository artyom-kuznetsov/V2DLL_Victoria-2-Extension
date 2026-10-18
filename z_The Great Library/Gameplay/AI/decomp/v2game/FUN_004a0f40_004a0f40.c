// FUN_004a0f40 @ 004a0f40 body=[[004a0f40, 004a0f98]]


int FUN_004a0f40(int param_1)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2aa4) + in_EAX * 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x2aa4) + in_EDX * 4);
  uVar2 = *(int *)(iVar1 + 0x34) - *(int *)(iVar3 + 0x34);
  iVar3 = *(int *)(iVar1 + 0x38) - *(int *)(iVar3 + 0x38);
  iVar1 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  if (*(int *)(param_1 + 0x2abc) / 2 < iVar1) {
    uVar2 = *(int *)(param_1 + 0x2abc) - iVar1;
  }
  iVar1 = iVar3 * iVar3 + uVar2 * uVar2;
  return (int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4;
}

