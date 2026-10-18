// FUN_0092ce20 @ 0092ce20 body=[[0092ce20, 0092ce88]]


undefined4 FUN_0092ce20(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4);
  if (*(char *)(iVar1 + 0x67c) != '\0') {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  iVar1 = (*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x398) / 1000) * 0x2238 +
          *(int *)(in_ECX + 0x18);
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < *(int *)(DAT_012588e8 + 0xb0c));
}

