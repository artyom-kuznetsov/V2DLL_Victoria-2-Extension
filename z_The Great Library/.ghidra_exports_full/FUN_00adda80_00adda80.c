// FUN_00adda80 @ 00adda80 body=[[00adda80, 00addab8]]


void FUN_00adda80(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x34);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + -4 + *(int *)(in_ECX + 0x34) * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    if (*(int *)(in_ECX + 0x34) != 0) {
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -1;
    }
    iVar1 = *(int *)(in_ECX + 0x34);
  }
  return;
}

