// FUN_00ad7c70 @ 00ad7c70 body=[[00ad7c70, 00ad7d24]]


void FUN_00ad7c70(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  (*(code *)PTR__free_00f01b10)(*(undefined4 *)(in_ECX + 0x104));
  FUN_00ad7940();
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x80) + uVar3 * 4);
      if (iVar2 != 0) {
        FUN_00ae9860();
        (*(code *)PTR__free_00f01b10)(iVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  if (*(int *)(in_ECX + 0x80) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x80));
    *(undefined4 *)(in_ECX + 0x80) = 0;
  }
  FUN_00ad79c0(1);
  FUN_00ad5530();
  FUN_00ad4300(in_ECX);
  if ((int *)**(int **)(DAT_00f209e0 + 0x3c) != (int *)0x0) {
    (**(code **)(*(int *)**(int **)(DAT_00f209e0 + 0x3c) + 0x40))();
  }
  return;
}

