// FUN_00a59e80 @ 00a59e80 body=[[00a59e80, 00a59eba]]


undefined4 FUN_00a59e80(void)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(in_EAX + 0x144);
      (*(undefined4 **)(in_EAX + 0x144) <= puVar2 && (puVar2 < *(undefined4 **)(in_EAX + 0x148)));
      puVar2 = puVar2 + 1) {
    cVar1 = FUN_00a59ec0(*puVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

