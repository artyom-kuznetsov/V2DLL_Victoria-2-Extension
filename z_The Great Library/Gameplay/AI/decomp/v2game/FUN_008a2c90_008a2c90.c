// FUN_008a2c90 @ 008a2c90 body=[[008a2c90, 008a2d7d]]


void FUN_008a2c90(int param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4
                                      ) + 0x188) + 0x5c);
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 300);
  }
  if (iVar3 != 0) {
    for (piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xb98) + *(int *)(param_1 + 0xc) * 0x10);
        piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar3 = *piVar1;
      if ((((*(int *)(iVar3 + 0x30) == *(int *)(in_ECX + 0x20)) &&
           ((cVar2 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x18))(), cVar2 == '\0' ||
            (*(int *)(iVar3 + 0x4c) == *(int *)(in_ECX + 0x24))))) &&
          ((cVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))(), cVar2 == '\0' ||
           (*(int *)(iVar3 + 0x50) == *(int *)(in_ECX + 0x28))))) &&
         ((cVar2 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x20))(), cVar2 == '\0' ||
          (*(int *)(*(int *)(iVar3 + 0x30) + 0x130) == *(int *)(in_ECX + 0x2c))))) {
        FUN_004e7ed0(iVar3,1,0);
      }
    }
  }
  return;
}

