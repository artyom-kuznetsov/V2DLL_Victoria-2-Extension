// FUN_00b015d0 @ 00b015d0 body=[[00b015d0, 00b01620]]


void FUN_00b015d0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x48);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x44) + uVar3 * 4);
      if (iVar2 != 0) {
        FUN_00b116d0();
        (*(code *)PTR__free_00f01b10)(iVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  if (*(int *)(in_ECX + 0x44) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x44));
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  return;
}

