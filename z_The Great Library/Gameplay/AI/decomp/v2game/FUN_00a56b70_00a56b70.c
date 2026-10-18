// FUN_00a56b70 @ 00a56b70 body=[[00a56b70, 00a56baa]]


undefined4 FUN_00a56b70(void)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(in_EAX + 0x188);
      (*(undefined4 **)(in_EAX + 0x188) <= puVar2 && (puVar2 < *(undefined4 **)(in_EAX + 0x18c)));
      puVar2 = puVar2 + 1) {
    cVar1 = FUN_00a57d40(*puVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

