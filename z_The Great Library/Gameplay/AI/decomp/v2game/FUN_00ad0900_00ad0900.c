// FUN_00ad0900 @ 00ad0900 body=[[00ad0900, 00ad098c] [00ad0990, 00ad09ed]]


void FUN_00ad0900(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  uint uVar7;
  
  *(undefined4 *)(in_ECX + 0x150) = 0;
  *(undefined4 *)(in_ECX + 0x154) = 0;
  if (*(int *)(in_ECX + 0x14c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x14c));
    *(undefined4 *)(in_ECX + 0x14c) = 0;
  }
  iVar3 = *(int *)(in_ECX + 0x150);
  uVar4 = *(undefined4 *)(in_ECX + 0x1ac);
  uVar5 = iVar3 + 1;
  *(uint *)(in_ECX + 0x150) = uVar5;
  if (*(uint *)(in_ECX + 0x154) < uVar5) {
    FUN_00ae6430(iVar3 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x14c) + -8 + *(int *)(in_ECX + 0x150) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar4;
    puVar1[1] = 2;
  }
  uVar5 = *(uint *)(*(int *)(in_ECX + 0x1ac) + 0x94);
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = *(int *)(in_ECX + 0x150);
      uVar6 = iVar3 + 1;
      puVar1 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x90) + uVar7 * 8);
      *(uint *)(in_ECX + 0x150) = uVar6;
      if (*(uint *)(in_ECX + 0x154) < uVar6) {
        FUN_00ae6430(iVar3 + 2);
      }
      puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x14c) + -8 + *(int *)(in_ECX + 0x150) * 8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return;
}

