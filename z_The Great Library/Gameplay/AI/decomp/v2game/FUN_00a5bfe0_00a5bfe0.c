// FUN_00a5bfe0 @ 00a5bfe0 body=[[00a5bfe0, 00a5c01a]]


undefined4 FUN_00a5bfe0(void)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(in_EAX + 0x118);
      (*(undefined4 **)(in_EAX + 0x118) <= puVar2 && (puVar2 < *(undefined4 **)(in_EAX + 0x11c)));
      puVar2 = puVar2 + 1) {
    cVar1 = FUN_00a5c020(*puVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

