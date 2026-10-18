// FUN_00add9f0 @ 00add9f0 body=[[00add9f0, 00adda28]]


void FUN_00add9f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x20) + -4 + *(int *)(in_ECX + 0x24) * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + -1;
    }
    iVar1 = *(int *)(in_ECX + 0x24);
  }
  return;
}

