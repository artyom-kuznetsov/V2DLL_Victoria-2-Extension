// FUN_008fd920 @ 008fd920 body=[[008fd920, 008fd99e]]


int FUN_008fd920(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  int in_ECX;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300);
  }
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar3 * 4);
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x54) + 0x5c);
  uVar4 = (uint3)((uint)iVar1 >> 8);
  if (iVar2 == 3) {
    iVar3 = *(int *)(iVar3 + 0x850);
  }
  else {
    if (iVar2 != 2) goto LAB_008fd996;
    iVar3 = *(int *)(iVar3 + 0x860);
  }
  if (*(int *)(*(int *)(iVar3 + *(int *)(*(int *)(iVar1 + 0x54) + 0x50) * 4) + 0x50) ==
      *(int *)(iVar1 + 0x50) + -1) {
    return CONCAT31(uVar4,1);
  }
LAB_008fd996:
  return (uint)uVar4 << 8;
}

