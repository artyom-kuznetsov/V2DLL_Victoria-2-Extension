// FUN_00408a90 @ 00408a90 body=[[00408a90, 00408ac8]]


int FUN_00408a90(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x21d) != '\0') {
    return *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x218) * 4) + 0xd58;
  }
  return 0;
}

