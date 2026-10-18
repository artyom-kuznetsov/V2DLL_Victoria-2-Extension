// FUN_00aed900 @ 00aed900 body=[[00aed900, 00aed950]]


void FUN_00aed900(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 4) + uVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return;
}

