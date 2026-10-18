// FUN_004e6d70 @ 004e6d70 body=[[004e6d70, 004e6e40]]


uint FUN_004e6d70(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 300) * 4);
  if (*(int *)(uVar2 + 0xbe4) != *(int *)(in_EAX + 0x58)) {
    uVar2 = FUN_004e1a50();
    if ((char)uVar2 != '\0') {
      uVar1 = *(uint *)(in_EAX + 0x14c);
      uVar2 = *(uint *)(in_EAX + 0x148);
      if (uVar2 != uVar1) {
        do {
          if (*(int *)(uVar2 + 4) == *(int *)(in_ECX + 0x48)) break;
          uVar2 = uVar2 + 8;
        } while (uVar2 != uVar1);
        if ((uVar2 != uVar1) &&
           ((((uVar2 = *(uint *)(*(int *)(in_ECX + 0x30) + 0xfc), uVar2 == 0 &&
              (*(int *)(*(int *)(in_EAX + 0x1f0) + *(int *)(*(int *)(in_ECX + 0x4c) + 8) * 4) != 0))
             || (((uVar2 == 1 || (uVar2 == 2)) &&
                 (*(int *)(*(int *)(in_EAX + 500) + *(int *)(*(int *)(in_ECX + 0x4c) + 8) * 4) != 0)
                 ))) ||
            ((((uVar2 == 3 &&
               (*(int *)(*(int *)(in_EAX + 0x1ec) + *(int *)(*(int *)(in_ECX + 0x50) + 8) * 4) != 0)
               ) || (uVar2 == 7)) || (uVar2 == 4)))))) {
          return CONCAT31((int3)(uVar2 >> 8),1);
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}

