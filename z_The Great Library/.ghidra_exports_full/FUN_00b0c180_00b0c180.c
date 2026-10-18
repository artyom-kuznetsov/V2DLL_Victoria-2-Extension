// FUN_00b0c180 @ 00b0c180 body=[[00b0c180, 00b0c1d2]]


void FUN_00b0c180(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x28);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + uVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (*(code *)PTR__free_00f01b10)(*puVar2);
        (*(code *)PTR__free_00f01b10)(puVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x24));
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  return;
}

