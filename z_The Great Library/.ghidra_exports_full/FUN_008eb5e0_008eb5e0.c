// FUN_008eb5e0 @ 008eb5e0 body=[[008eb5e0, 008eb68f]]


undefined4 FUN_008eb5e0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008eb659;
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x30) * 4);
    iVar2 = *(int *)(iVar1 + 0xea0);
    iVar1 = *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c);
  }
  else {
    iVar1 = FUN_008a8dc0();
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 4) * 4);
    iVar2 = *(int *)(iVar1 + 0xea0);
    iVar1 = *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c);
  }
  iVar1 = iVar1 + iVar2;
LAB_008eb659:
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  iVar1 <= *(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0));
}

