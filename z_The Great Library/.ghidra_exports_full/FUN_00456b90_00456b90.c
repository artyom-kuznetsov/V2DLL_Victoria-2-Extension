// FUN_00456b90 @ 00456b90 body=[[00456b90, 00456bac] [00456bb0, 00456c06]]


undefined4 * FUN_00456b90(void)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_EDX;
  undefined4 *puVar3;
  int local_8;
  
  puVar3 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *in_EDX) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 **)(in_EAX + 4)) && ((int)puVar3[3] <= *in_EDX)) {
    return puVar3 + 4;
  }
  local_8 = 0;
  FUN_004ca000();
  FUN_00457140(&local_8,puVar3);
  return (undefined4 *)(local_8 + 0x10);
}

