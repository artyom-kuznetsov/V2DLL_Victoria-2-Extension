// FUN_009ee5d0 @ 009ee5d0 body=[[009ee5d0, 009ee5ea]]


void FUN_009ee5d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_EAX;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 0x24))();
  }
  return;
}

