// FUN_004d1e40 @ 004d1e40 body=[[004d1e40, 004d1ec6]]


bool FUN_004d1e40(void)

{
  char cVar1;
  int in_EAX;
  
  if (DAT_012586f1 != '\0') {
    return true;
  }
  if ((((0 < *(int *)(in_EAX + 0x84)) &&
       (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x5c) * 4) + 0x67c) ==
        '\0')) && (*(int *)(in_EAX + 200) != 0)) && (*(int *)(in_EAX + 0x84) == 2)) {
    cVar1 = FUN_0043a700();
    return cVar1 != '\0';
  }
  return false;
}

