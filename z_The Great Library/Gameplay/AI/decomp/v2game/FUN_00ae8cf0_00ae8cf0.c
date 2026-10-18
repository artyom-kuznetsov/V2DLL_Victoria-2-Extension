// FUN_00ae8cf0 @ 00ae8cf0 body=[[00ae8cf0, 00ae8d28]]


void FUN_00ae8cf0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x30);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x2c) + -4 + *(int *)(in_ECX + 0x30) * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    if (*(int *)(in_ECX + 0x30) != 0) {
      *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + -1;
    }
    iVar1 = *(int *)(in_ECX + 0x30);
  }
  return;
}

