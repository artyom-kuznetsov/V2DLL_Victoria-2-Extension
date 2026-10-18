// FUN_00ad5530 @ 00ad5530 body=[[00ad5530, 00ad5549] [00ad5550, 00ad559f]]


void FUN_00ad5530(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  
  uVar2 = (uint)*(ushort *)(in_ECX + 0xec);
  if (*(ushort *)(in_ECX + 0xec) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(in_ECX + 0xe8));
      if (iVar1 != 0) {
        FUN_00ae2d10();
        (*(code *)PTR__free_00f01b10)(iVar1);
      }
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(undefined2 *)(in_ECX + 0xec) = 0;
  if (*(int *)(in_ECX + 0xe8) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0xe8));
  }
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  return;
}

