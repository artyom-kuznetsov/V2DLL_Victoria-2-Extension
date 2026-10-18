// FUN_00867740 @ 00867740 body=[[00867740, 0086779b]]


uint FUN_00867740(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (in_ECX == 0) {
    if ((-1 < (int)*(uint *)(in_EAX + 0xa8)) &&
       (*(uint *)(in_EAX + 0xa8) < *(uint *)(in_EAX + 0x98))) {
      return 1;
    }
  }
  else if (in_ECX == 1) {
    if ((-1 < (int)*(uint *)(in_EAX + 0xac)) &&
       (*(uint *)(in_EAX + 0xac) < *(uint *)(in_EAX + 0x98))) {
      return 1;
    }
  }
  else {
    if (in_ECX != 2) {
      return in_EAX & 0xffffff00;
    }
    if ((-1 < (int)*(uint *)(in_EAX + 0xb0)) &&
       (*(uint *)(in_EAX + 0xb0) < *(uint *)(in_EAX + 0x98))) {
      return 1;
    }
  }
  return 0;
}

