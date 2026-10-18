// FUN_008ddda0 @ 008ddda0 body=[[008ddda0, 008dde07]]


undefined4 FUN_008ddda0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_8;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_8 = *(int *)(in_ECX + 0x20);
    }
    else {
      local_8 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xbe8);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(*(int *)(iVar1 + local_8 * 4) + 0x60) != '\0');
}

