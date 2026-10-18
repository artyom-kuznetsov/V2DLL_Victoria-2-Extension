// FUN_008de770 @ 008de770 body=[[008de770, 008de7f5]]


uint FUN_008de770(int param_1)

{
  int *piVar1;
  uint uVar2;
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
  uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                            0xbe8) + local_8 * 4);
  piVar1 = (int *)(uVar2 + 0x28);
  if (*piVar1 != 0) {
    uVar2 = *(uint *)(uVar2 + 0xc);
    if (*(uint *)(*piVar1 + 0xc) != uVar2) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

