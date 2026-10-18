// FUN_00aed960 @ 00aed960 body=[[00aed960, 00aed9b0]]


void FUN_00aed960(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x18);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x14) + uVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x14));
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}

