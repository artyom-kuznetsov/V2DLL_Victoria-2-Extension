// FUN_004b8b90 @ 004b8b90 body=[[004b8b90, 004b8bff]]


uint FUN_004b8b90(void)

{
  uint in_EAX;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x16c) ==
      *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                       *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4) +
                               0xbe4) * 4) + 0x16c)) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31((int3)((uint)*(int *)(unaff_ESI + 0xe8) >> 8),
                  *(int *)(unaff_ESI + 0xe8) !=
                  *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                   *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                    *(int *)(in_EAX + 4) * 4) + 0xbe4) * 4) + 0xe8))
  ;
}

