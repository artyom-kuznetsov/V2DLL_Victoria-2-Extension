// FUN_006a87e0 @ 006a87e0 body=[[006a87e0, 006a8818]]


void FUN_006a87e0(char param_1)

{
  int in_EAX;
  
  if (param_1 != '\0') {
    *(undefined4 *)(in_EAX + 0x10c) = 1;
    *(undefined4 *)(in_EAX + 0x6c) = 1;
    return;
  }
  if ((*(char *)(in_EAX + 0xe4) == '\0') || (*(char *)(in_EAX + 0x142) != '\0')) {
    *(undefined4 *)(in_EAX + 0x10c) = 0;
    *(undefined4 *)(in_EAX + 0x6c) = 0;
  }
  return;
}

