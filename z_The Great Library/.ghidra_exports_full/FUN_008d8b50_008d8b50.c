// FUN_008d8b50 @ 008d8b50 body=[[008d8b50, 008d8beb]]


uint FUN_008d8b50(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_c;
  
  uVar1 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if (*(char *)(uVar1 + 0xcf4) == '\0') {
    return uVar1 & 0xffffff00;
  }
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_c = *(int *)(in_ECX + 0x20);
    }
    else {
      local_c = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar2 >> 8),*(int *)(iVar2 + 0xcfc) == local_c);
}

