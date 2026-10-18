// FUN_004f50c0 @ 004f50c0 body=[[004f50c0, 004f50fc]]


void FUN_004f50c0(char param_1)

{
  int in_EAX;
  
  if ((*(char *)(in_EAX + 0x180) == '\0') && (param_1 == '\0')) {
    *(int *)(in_EAX + 0x184) = *(int *)(in_EAX + 0x184) + 1;
    if (*(int *)(in_EAX + 0x20) < 2) {
      return;
    }
    if (*(int *)(in_EAX + 0x184) < 0xb) {
      return;
    }
    *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + -1;
  }
  *(undefined4 *)(in_EAX + 0x184) = 0;
  return;
}

