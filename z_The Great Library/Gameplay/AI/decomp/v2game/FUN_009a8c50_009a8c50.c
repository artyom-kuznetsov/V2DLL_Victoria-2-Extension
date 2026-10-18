// FUN_009a8c50 @ 009a8c50 body=[[009a8c50, 009a8c66]]


void FUN_009a8c50(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x142) == '\0') {
    *(undefined1 *)(in_EAX + 0x142) = 1;
    FUN_009a8550(in_EAX);
  }
  return;
}

