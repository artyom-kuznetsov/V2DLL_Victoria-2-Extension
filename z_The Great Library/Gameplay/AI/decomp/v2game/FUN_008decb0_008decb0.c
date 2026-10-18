// FUN_008decb0 @ 008decb0 body=[[008decb0, 008decdc] [008dece0, 008ded3f]]


uint FUN_008decb0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int in_ECX;
  int local_c;
  
  uVar1 = *(uint *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  puVar2 = *(uint **)(uVar1 + 0xec);
  do {
    if (puVar2 == (uint *)0x0) {
      return uVar1 & 0xffffff00;
    }
    uVar1 = *puVar2;
    puVar2 = (uint *)puVar2[2];
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
  } while (*(int *)(uVar1 + 0xc4) != local_c);
  return CONCAT31((int3)(uVar1 >> 8),1);
}

