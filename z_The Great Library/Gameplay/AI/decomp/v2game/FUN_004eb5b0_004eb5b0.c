// FUN_004eb5b0 @ 004eb5b0 body=[[004eb5b0, 004eb5fc]]


undefined4 FUN_004eb5b0(void)

{
  int in_EAX;
  
  if (in_EAX < 0x740) {
    if (in_EAX == 0x73f) {
      return 0;
    }
    if (in_EAX == 0x28c) {
      return 1;
    }
    if (in_EAX == 0x292) {
      return 5;
    }
    if (in_EAX == 0x3eb) {
      return 2;
    }
  }
  else {
    if (in_EAX == 0x753) {
      return 3;
    }
    if (in_EAX == 0x754) {
      return 4;
    }
  }
  return 6;
}

