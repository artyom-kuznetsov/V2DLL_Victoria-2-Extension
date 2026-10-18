// FUN_009ee510 @ 009ee510 body=[[009ee510, 009ee529]]


void FUN_009ee510(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_EAX;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 8))();
  }
  return;
}

