// FUN_00ad48b0 @ 00ad48b0 body=[[00ad48b0, 00ad48dd] [00ad48e0, 00ad4953]]


void FUN_00ad48b0(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int local_10;
  int local_c;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar4 = 0;
  local_10 = 0;
  local_c = 0;
  if (uVar1 != 0) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + uVar4 * 4) + 0x1c);
      if (((*(int *)(iVar3 + 4 + param_1 * 0x20) != 0) &&
          (iVar3 = (**(code **)(**(int **)(iVar3 + 4 + param_1 * 0x20) + 0x10))(), iVar3 != 0)) &&
         (cVar2 = FUN_00ae8a70(param_1), cVar2 == '\0')) {
        local_10 = local_10 + *(int *)(iVar3 + 0x18);
        local_c = local_c + *(int *)(iVar3 + 0x1c);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_10;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_c;
  }
  return;
}

