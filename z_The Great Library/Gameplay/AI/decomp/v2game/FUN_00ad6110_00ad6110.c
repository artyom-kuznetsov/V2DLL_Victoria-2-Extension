// FUN_00ad6110 @ 00ad6110 body=[[00ad6110, 00ad6136] [00ad6140, 00ad61a6]]


void FUN_00ad6110(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  uint uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x94);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = *(int *)(in_ECX + 0x94);
      iVar5 = *(int *)(param_1 + 0x90);
      uVar6 = iVar4 + 1;
      iVar1 = uVar7 * 8;
      *(uint *)(in_ECX + 0x94) = uVar6;
      if (*(uint *)(in_ECX + 0x98) < uVar6) {
        FUN_00ae6430(iVar4 + 2);
      }
      puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x90) + -8 + *(int *)(in_ECX + 0x94) * 8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(iVar5 + iVar1);
        puVar2[1] = *(undefined4 *)(iVar5 + 4 + iVar1);
      }
      FUN_00ad6110(*(undefined4 *)(*(int *)(param_1 + 0x90) + iVar1));
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return;
}

