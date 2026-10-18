// FUN_004b5fe0 @ 004b5fe0 body=[[004b5fe0, 004b5fec] [004b5ff0, 004b600b]]


undefined4 FUN_004b5fe0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  
  puVar1 = *(undefined4 **)(in_EAX + 0xd8);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    cVar3 = (**(code **)(*piVar2 + 0x34))();
  } while (cVar3 != '\0');
  return 1;
}

