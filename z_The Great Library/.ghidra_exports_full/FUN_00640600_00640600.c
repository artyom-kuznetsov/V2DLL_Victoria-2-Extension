// FUN_00640600 @ 00640600 body=[[00640600, 00640632]]


void FUN_00640600(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  
  if (*(char *)(in_EAX + 0x356) == '\0') {
    *(undefined4 *)(in_EAX + 0x334) = *in_ECX;
    *(undefined4 *)(in_EAX + 0x338) = in_ECX[1];
    *(undefined4 *)(in_EAX + 0x33c) = *(undefined4 *)(in_EAX + 0x334);
    *(undefined4 *)(in_EAX + 0x340) = *(undefined4 *)(in_EAX + 0x338);
  }
  return;
}

