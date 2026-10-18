// FUN_008f4c50 @ 008f4c50 body=[[008f4c50, 008f4c83]]


undefined4 FUN_008f4c50(int param_1)

{
  int iVar1;
  int in_ECX;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4);
    cVar2 = *(char *)(*(int *)(iVar1 + 0x188) + 0x27c);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),cVar2 == *(char *)(in_ECX + 0x1c));
}

