// FUN_00a3ff60 @ 00a3ff60 body=[[00a3ff60, 00a40095]]


void FUN_00a3ff60(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = *(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94) >> 4;
  if (0 < local_10) {
    local_8 = 0;
    do {
      local_c = (*(int *)(*(int *)(in_ECX + 0x94) + 4 + local_8) -
                *(int *)(*(int *)(in_ECX + 0x94) + local_8)) / 0x74;
      if (0 < local_c) {
        iVar6 = 0;
        do {
          iVar4 = *(int *)(iVar6 + *(int *)(local_8 + *(int *)(in_ECX + 0x94)));
          piVar3 = (int *)0x0;
          if (iVar4 != 0) {
            piVar3 = *(int **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x6bd00) + -4 + iVar4 * 4);
          }
          iVar4 = *(int *)(local_8 + *(int *)(in_ECX + 0x94)) + iVar6;
          puVar5 = (undefined4 *)(iVar4 + 0x58);
          if (0xf < *(uint *)(iVar4 + 0x6c)) {
            puVar5 = (undefined4 *)*puVar5;
          }
          uVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,puVar5);
          *(undefined4 *)(iVar4 + 0x10) = uVar2;
          iVar4 = *(int *)(local_8 + *(int *)(in_ECX + 0x94));
          iVar1 = *(int *)(iVar4 + iVar6);
          piVar3 = (int *)0x0;
          if (iVar1 != 0) {
            piVar3 = *(int **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x6bd00) + -4 + iVar1 * 4);
          }
          uVar2 = (**(code **)(*piVar3 + 0x24))(piVar3,0,"WorldMatrix");
          *(undefined4 *)(iVar4 + 8 + iVar6) = uVar2;
          iVar4 = *(int *)(local_8 + *(int *)(in_ECX + 0x94));
          iVar1 = *(int *)(iVar4 + iVar6);
          piVar3 = (int *)0x0;
          if (iVar1 != 0) {
            piVar3 = *(int **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x6bd00) + -4 + iVar1 * 4);
          }
          uVar2 = (**(code **)(*piVar3 + 0x24))(piVar3,0,"matBones");
          *(undefined4 *)(iVar4 + 0xc + iVar6) = uVar2;
          iVar6 = iVar6 + 0x74;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      local_8 = local_8 + 0x10;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

