// FUN_008d9800 @ 008d9800 body=[[008d9800, 008d9887]]


uint FUN_008d9800(int param_1)

{
  uint uVar1;
  int in_ECX;
  undefined4 local_c;
  
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
  uVar1 = *(uint *)(*(int *)(DAT_012587e4 + 4) + local_c * 4);
  if ((*(char *)(uVar1 + 0xcf5) == '\0') && (*(char *)(uVar1 + 0xcf4) == '\0')) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)*(int *)(uVar1 + 0xcfc) >> 8),
                  *(int *)(uVar1 + 0xcfc) == *(int *)(param_1 + 0xc));
}

