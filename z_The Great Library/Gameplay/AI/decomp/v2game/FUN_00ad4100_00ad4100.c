// FUN_00ad4100 @ 00ad4100 body=[[00ad4100, 00ad4117] [00ad4120, 00ad41b3]]


void FUN_00ad4100(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = *(int *)(in_ECX + 0x14);
  if (local_8 != 0) {
    iVar3 = 0;
    do {
      uVar2 = *(uint *)(*(int *)(in_ECX + 0x10) + 4 + iVar3);
      uVar4 = 1;
      if (1 < uVar2) {
        do {
          iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x10) + iVar3) + uVar4 * 4);
          if (iVar1 != 0) {
            FUN_00ad7d30();
            (*(code *)PTR__free_00f01b10)(iVar1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      iVar3 = iVar3 + 0x10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  uVar2 = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + iVar3);
      if (iVar1 != 0) {
        (*(code *)PTR__free_00f01b10)(iVar1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar2 < *(uint *)(in_ECX + 0x14));
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x10));
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  return;
}

