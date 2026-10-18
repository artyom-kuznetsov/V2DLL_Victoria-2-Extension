// FUN_004c8d10 @ 004c8d10 body=[[004c8d10, 004c8d2c] [004c8d30, 004c8d86]]


undefined4 * FUN_004c8d10(void)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_EDX;
  undefined4 *puVar3;
  int local_8;
  
  puVar3 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *in_EDX) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 **)(in_EAX + 4)) && ((uint)puVar3[3] <= *in_EDX)) {
    return puVar3 + 4;
  }
  local_8 = 0;
  FUN_004ca000();
  FUN_0098c1f0(&local_8,puVar3);
  return (undefined4 *)(local_8 + 0x10);
}

