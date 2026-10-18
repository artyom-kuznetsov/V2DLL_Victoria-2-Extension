// FUN_009d6570 @ 009d6570 body=[[009d6570, 009d66a5]]


void FUN_009d6570(uint *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte in_stack_00000020;
  
  uVar6 = param_4 + param_2;
  uVar1 = **(uint **)(in_ECX + 0x24);
  uVar5 = ((int)param_4 >> 0x1f) + param_3 + (uint)CARRY4(param_4,param_2);
  if ((uVar1 != 0) && (*(uint *)(in_ECX + 0x3c) < uVar1)) {
    *(uint *)(in_ECX + 0x3c) = uVar1;
  }
  if ((uVar6 != 0xffffffff) || (uVar5 != 0xffffffff)) {
    if (((in_stack_00000020 & 1) == 0) || (**(int **)(in_ECX + 0x20) == 0)) {
      if ((((in_stack_00000020 & 2) != 0) && (uVar1 = **(uint **)(in_ECX + 0x24), uVar1 != 0)) &&
         (-1 < (int)uVar5)) {
        iVar3 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
        iVar4 = iVar3 >> 0x1f;
        if (((int)uVar5 <= iVar4) && (((int)uVar5 < iVar4 || (uVar6 <= (uint)(iVar3 >> 1))))) {
          iVar3 = ((int)(**(int **)(in_ECX + 0x10) - uVar1) >> 1) + uVar6;
          **(int **)(in_ECX + 0x34) = **(int **)(in_ECX + 0x34) - iVar3;
          **(int **)(in_ECX + 0x24) = **(int **)(in_ECX + 0x24) + iVar3 * 2;
          goto LAB_009d668a;
        }
      }
    }
    else if (-1 < (int)uVar5) {
      iVar3 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
      iVar4 = iVar3 >> 0x1f;
      if (((int)uVar5 <= iVar4) && (((int)uVar5 < iVar4 || (uVar6 <= (uint)(iVar3 >> 1))))) {
        iVar3 = (**(int **)(in_ECX + 0x10) - **(int **)(in_ECX + 0x20) >> 1) + uVar6;
        **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) - iVar3;
        **(int **)(in_ECX + 0x20) = **(int **)(in_ECX + 0x20) + iVar3 * 2;
        if (((in_stack_00000020 & 2) != 0) && (iVar3 = **(int **)(in_ECX + 0x24), iVar3 != 0)) {
          iVar4 = **(int **)(in_ECX + 0x34);
          iVar2 = **(int **)(in_ECX + 0x20);
          **(int **)(in_ECX + 0x24) = iVar2;
          **(int **)(in_ECX + 0x34) = (iVar3 + iVar4 * 2) - iVar2 >> 1;
        }
        goto LAB_009d668a;
      }
    }
    uVar5 = 0xffffffff;
    uVar6 = 0xffffffff;
  }
LAB_009d668a:
  *param_1 = uVar6;
  param_1[1] = uVar5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

