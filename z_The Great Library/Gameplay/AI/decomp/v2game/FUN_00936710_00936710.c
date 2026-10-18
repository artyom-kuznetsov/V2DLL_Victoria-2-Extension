// FUN_00936710 @ 00936710 body=[[00936710, 00936730]]


bool FUN_00936710(void)

{
  int in_EAX;
  
  if ((int)(*(int *)(in_EAX + 0x30) - *(int *)(in_EAX + 0x2c) & 0xfffffff8U) < 8) {
    return false;
  }
  return 7 < (int)(*(int *)(in_EAX + 0x40) - *(int *)(in_EAX + 0x3c) & 0xfffffff8U);
}

