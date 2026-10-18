// FUN_004a8300 @ 004a8300 body=[[004a8300, 004a8323]]


undefined4 FUN_004a8300(void)

{
  int in_EAX;
  
  if ((*(int *)(in_EAX + 0x7d8) != 0) &&
     ((*(char *)(in_EAX + 0xcf5) != '\0' || (*(char *)(in_EAX + 0xcf4) != '\0')))) {
    return 1;
  }
  return 0;
}

