// FUN_00584ad0 @ 00584ad0 body=[[00584ad0, 00584bae]]


void FUN_00584ad0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  FUN_0068dd70();
  for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4) +
                         0x148c);
      (piVar1 != (int *)0x0 &&
      (*piVar1 != *(int *)(*(int *)(DAT_0125870c + 0x2a88) + *(int *)(in_ECX + 0x3c) * 4)));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  iVar2 = DAT_012588e8;
  *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x24) = 1;
  if (((*(int *)(iVar2 + 0xb60) == *(int *)(in_ECX + 0x44)) &&
      (iVar2 = (**(code **)(**(int **)(iVar2 + 0xb24) + 0x124))(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))(),
     *(char *)(*(int *)(iVar2 + 0x20) + 0x67) != '\0')) {
    uVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    FUN_00740050(uVar3);
  }
  return;
}

