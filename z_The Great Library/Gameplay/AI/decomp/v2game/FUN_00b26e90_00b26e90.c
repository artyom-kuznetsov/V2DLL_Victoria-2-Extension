// FUN_00b26e90 @ 00b26e90 body=[[00b26e90, 00b26e9c] [00b26ea0, 00b26eae]]


void FUN_00b26e90(void)

{
  char cVar1;
  char *in_EAX;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x11) == '\0') {
    cVar1 = *in_EAX;
    while (cVar1 != '\0') {
      if (*in_EAX == '\\') {
        *in_EAX = '/';
      }
      in_EAX = in_EAX + 1;
      cVar1 = *in_EAX;
    }
  }
  return;
}

