// FUN_009017a0 @ 009017a0 body=[[009017a0, 009017d3]]


undefined4 FUN_009017a0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  bool bVar3;
  
  bVar3 = false;
  iVar2 = 0;
  if (((*(int *)(param_1 + 0x14) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x274), iVar2 = 0, iVar1 != 0)) &&
     (iVar2 = *(int *)(iVar1 + 0xc), iVar2 != 0)) {
    bVar3 = *(int *)(*(int *)(iVar2 + 0x54) + 0x5c) == 2;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),bVar3 == (bool)*(char *)(in_ECX + 0x1c));
}

