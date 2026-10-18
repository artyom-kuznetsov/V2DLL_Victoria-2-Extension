// FUN_004b6180 @ 004b6180 body=[[004b6180, 004b619b]]


undefined4 FUN_004b6180(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(char *)(in_EAX + 0x131) != '\0') {
    return *(undefined4 *)(*(int *)(in_ECX + 0x118) + *(int *)(in_EAX + 0x134) * 4);
  }
  return 0;
}

