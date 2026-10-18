// FUN_0043d7c0 @ 0043d7c0 body=[[0043d7c0, 0043d7ea]]


undefined4 FUN_0043d7c0(void)

{
  int in_ECX;
  char cVar1;
  
  if (*(int *)(in_ECX + 8) == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(*(int *)(in_ECX + 8) + 0x67);
  }
  FUN_0043d7f0();
  if (cVar1 != '\0') {
    FUN_0043e000();
  }
  return 1;
}

