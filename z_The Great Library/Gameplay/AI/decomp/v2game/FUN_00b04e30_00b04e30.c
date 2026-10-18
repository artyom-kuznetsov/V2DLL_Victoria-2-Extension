// FUN_00b04e30 @ 00b04e30 body=[[00b04e30, 00b04e9e]]


void FUN_00b04e30(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x58);
  uVar3 = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  if (uVar1 != 0) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x54) + uVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (*(code *)PTR__free_00f01b10)(*puVar2);
        (*(code *)PTR__free_00f01b10)(puVar2[1]);
        (*(code *)PTR__free_00f01b10)(puVar2[2]);
        (*(code *)PTR__free_00f01b10)(puVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  if (*(int *)(in_ECX + 0x54) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x54));
    *(undefined4 *)(in_ECX + 0x54) = 0;
  }
  return;
}

