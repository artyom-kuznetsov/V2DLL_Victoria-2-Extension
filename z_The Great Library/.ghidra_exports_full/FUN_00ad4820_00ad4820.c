// FUN_00ad4820 @ 00ad4820 body=[[00ad4820, 00ad4845] [00ad4850, 00ad48a5]]


void FUN_00ad4820(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int local_4;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar4 = 0;
  iVar3 = 0;
  local_4 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + uVar4 * 4) + 0x1c);
      if ((*(int *)(iVar2 + 4 + param_1 * 0x20) != 0) &&
         (iVar2 = (**(code **)(**(int **)(iVar2 + 4 + param_1 * 0x20) + 0x10))(), iVar2 != 0)) {
        iVar3 = iVar3 + *(int *)(iVar2 + 0x18);
        local_4 = local_4 + *(int *)(iVar2 + 0x1c);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_4;
  }
  return;
}

