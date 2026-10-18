// FUN_004b8b00 @ 004b8b00 body=[[004b8b00, 004b8b83]]


uint FUN_004b8b00(void)

{
  uint uVar1;
  int in_ECX;
  int in_EDX;
  
  while( true ) {
    for (; (*(char *)(*(int *)(in_EDX + 0x5c) + 0x2a) != '\0' && (*(int *)(in_EDX + 0x158) != 0));
        in_EDX = *(int *)(*(int *)(DAT_0125870c + 0x2238) +
                         *(int *)(*(int *)(in_EDX + 0x5c) + 0xdc) * 4)) {
    }
    if ((*(char *)(*(int *)(in_ECX + 0x5c) + 0x2a) == '\0') || (*(int *)(in_ECX + 0x158) == 0))
    break;
    in_ECX = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(*(int *)(in_ECX + 0x5c) + 0xdc) * 4
                     );
  }
  uVar1 = *(uint *)(in_EDX + 0x5c);
  if ((*(char *)(uVar1 + 0x2a) == '\0') &&
     (uVar1 = *(uint *)(in_ECX + 0x5c), *(char *)(uVar1 + 0x2a) == '\0')) {
    return CONCAT31((int3)((uint)*(undefined4 *)(in_ECX + 0x164) >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

