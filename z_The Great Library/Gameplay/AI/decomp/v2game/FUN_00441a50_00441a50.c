// FUN_00441a50 @ 00441a50 body=[[00441a50, 00441a69]]


undefined4 FUN_00441a50(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    cVar1 = FUN_0059c160(*(int *)(in_ECX + 0x24));
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}

