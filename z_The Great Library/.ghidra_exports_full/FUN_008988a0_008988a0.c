// FUN_008988a0 @ 008988a0 body=[[008988a0, 008988f8]]


void FUN_008988a0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int in_ECX;
  
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 != (int *)0x0) {
    cVar7 = (**(code **)(*piVar3 + 0x20))();
    if (cVar7 != '\0') {
      if (*(int *)(in_ECX + 0x28) != 0) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + 0x50);
        uVar5 = *(uint *)(in_ECX + 0x20);
        puVar1 = (uint *)(piVar3[0x29] + iVar4 * 8);
        uVar6 = *puVar1;
        piVar2 = (int *)(piVar3[0x29] + iVar4 * 8);
        iVar4 = *(int *)(in_ECX + 0x24);
        *piVar2 = uVar5 + *puVar1;
        piVar2[1] = iVar4 + piVar2[1] + (uint)CARRY4(uVar5,uVar6);
        FUN_004be780(piVar3 + 0x27);
      }
    }
  }
  return;
}

