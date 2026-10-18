// FUN_006b6bc0 @ 006b6bc0 body=[[006b6bc0, 006b6cc0]]


void FUN_006b6bc0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x5cc) + 4))();
  if (iVar4 == 3) {
    if (*(int *)(in_ECX + 0x5cc) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 0x5cc) + -8;
    }
    iVar2 = *(int *)(iVar4 + 0x5c);
    uVar1 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24 - 1;
    uVar7 = DAT_012589a8;
    if ((int)uVar1 <= (int)DAT_012589a8) {
      uVar7 = uVar1;
    }
    uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    bVar8 = *(int *)(*(int *)(in_ECX + 0xa98) + 0x6c) == 1;
    iVar2 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) +
                    *(int *)(*(int *)(iVar2 + 200) + 4 + uVar7 * 0x24) * 4);
    iVar3 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24;
    iVar6 = 0;
    if (0 < iVar3) {
      piVar5 = (int *)(*(int *)(iVar2 + 200) + 4);
      do {
        if (*(int *)(iVar4 + 0x58) == *piVar5) goto LAB_006b6ca4;
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 9;
      } while (iVar6 < iVar3);
    }
    iVar6 = -1;
LAB_006b6ca4:
    FUN_004c8ac0(bVar8,uVar7);
    FUN_004c8ac0(bVar8,iVar6);
  }
  return;
}

