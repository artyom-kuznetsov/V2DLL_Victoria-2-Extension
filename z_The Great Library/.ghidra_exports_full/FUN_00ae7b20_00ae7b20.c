// FUN_00ae7b20 @ 00ae7b20 body=[[00ae7b20, 00ae7b96]]


void FUN_00ae7b20(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ECX + 0x14); iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar3 = *(int *)(in_ECX + 0x10) + iVar2;
    (*(code *)PTR__free_00f01b10)(*(undefined4 *)(*(int *)(in_ECX + 0x10) + iVar2));
    (*(code *)PTR__free_00f01b10)(*(undefined4 *)(iVar3 + 4));
    piVar4 = (int *)(iVar3 + 0x10);
    iVar3 = 3;
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + 0x1c;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x10));
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  return;
}

