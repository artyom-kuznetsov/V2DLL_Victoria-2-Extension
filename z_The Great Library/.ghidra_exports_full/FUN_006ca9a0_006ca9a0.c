// FUN_006ca9a0 @ 006ca9a0 body=[[006ca9a0, 006caa48]]


void FUN_006ca9a0(void)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_c;
  
  if (*(int *)(in_ECX + 0x10) != 0) {
    uVar1 = *(int *)(in_ECX + 0x10) + -1 + *(int *)(in_ECX + 0xc);
    local_c = uVar1 >> 2;
    if (*(uint *)(in_ECX + 8) <= local_c) {
      local_c = local_c - *(int *)(in_ECX + 8);
    }
    FUN_006cb250(in_ECX + 0x14,*(int *)(*(int *)(in_ECX + 4) + local_c * 4) + (uVar1 % 4) * 4);
    iVar2 = *(int *)(in_ECX + 0x10) + -1;
    *(int *)(in_ECX + 0x10) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0xc) = 0;
    }
  }
  return;
}

