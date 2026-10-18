// FUN_00ae2350 @ 00ae2350 body=[[00ae2350, 00ae23a2]]


void FUN_00ae2350(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x20);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + uVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x1c));
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  return;
}

