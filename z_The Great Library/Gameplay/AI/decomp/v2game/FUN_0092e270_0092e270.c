// FUN_0092e270 @ 0092e270 body=[[0092e270, 0092e28c]]


uint FUN_0092e270(void)

{
  uint in_EAX;
  int in_EDX;
  
  if (*(int *)(in_EDX + 0x34) != 0) {
    return in_EAX & 0xffffff00;
  }
  return (uint)(*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(in_EDX + 0x6c));
}

