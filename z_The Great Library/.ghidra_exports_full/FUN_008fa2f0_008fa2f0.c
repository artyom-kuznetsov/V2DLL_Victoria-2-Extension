// FUN_008fa2f0 @ 008fa2f0 body=[[008fa2f0, 008fa360]]


uint FUN_008fa2f0(int param_1)

{
  int in_ECX;
  undefined4 local_8;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_8 = *(uint *)(in_ECX + 0x20);
    }
    else {
      local_8 = *(uint *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    local_8 = *(uint *)(*(int *)(DAT_012587e4 + 4) + local_8 * 4);
    if (*(int *)(param_1 + 0xc) == *(int *)(local_8 + 0x142c)) {
      return CONCAT31((int3)(local_8 >> 8),1);
    }
  }
  return local_8 & 0xffffff00;
}

