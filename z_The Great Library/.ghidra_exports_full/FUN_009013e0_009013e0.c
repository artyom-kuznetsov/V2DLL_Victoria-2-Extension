// FUN_009013e0 @ 009013e0 body=[[009013e0, 00901414]]


undefined4 FUN_009013e0(int param_1)

{
  int iVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4);
    bVar2 = 0 < *(int *)(*(int *)(iVar1 + 0x188) + 0x68);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),bVar2 == (bool)*(char *)(in_ECX + 0x1c));
}

