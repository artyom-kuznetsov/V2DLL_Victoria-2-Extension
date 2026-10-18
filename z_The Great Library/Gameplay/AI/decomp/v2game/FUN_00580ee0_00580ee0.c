// FUN_00580ee0 @ 00580ee0 body=[[00580ee0, 00580f0a]]


undefined4 FUN_00580ee0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(iVar1 + 0x120) != *(char *)(in_ECX + 0x44));
}

