// FUN_009a8ba0 @ 009a8ba0 body=[[009a8ba0, 009a8bbb]]


void FUN_009a8ba0(void)

{
  int in_EAX;
  
  if ((*(char *)(in_EAX + 0xe4) == '\0') || (*(char *)(in_EAX + 0x142) != '\0')) {
    *(undefined4 *)(in_EAX + 0x6c) = 0;
    *(undefined4 *)(in_EAX + 0x10c) = 0;
  }
  return;
}

