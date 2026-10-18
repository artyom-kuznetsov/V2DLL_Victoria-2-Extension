// FUN_004b8c00 @ 004b8c00 body=[[004b8c00, 004b8c7d]]


uint FUN_004b8c00(void)

{
  uint in_EAX;
  
  if (*(int *)(in_EAX + 0x16c) ==
      *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                       *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 300) * 4) +
                               0xbe4) * 4) + 0x16c)) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31((int3)((uint)*(int *)(in_EAX + 0xe8) >> 8),
                  *(int *)(in_EAX + 0xe8) !=
                  *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                   *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                    *(int *)(in_EAX + 300) * 4) + 0xbe4) * 4) + 0xe8
                          ));
}

