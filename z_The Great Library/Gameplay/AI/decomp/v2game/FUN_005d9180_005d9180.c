// FUN_005d9180 @ 005d9180 body=[[005d9180, 005d91c5]]


bool FUN_005d9180(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_EAX + 0xc4) == *(int *)(in_ECX + 4)) {
    return true;
  }
  return *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(in_EAX + 0xc4) * 4) + 0xbe8) +
                          *(int *)(in_ECX + 4) * 4) + 0x20) != 0;
}

