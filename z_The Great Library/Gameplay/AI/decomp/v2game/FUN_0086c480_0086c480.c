// FUN_0086c480 @ 0086c480 body=[[0086c480, 0086c5a0]]


void FUN_0086c480(uint *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte in_stack_00000020;
  
  uVar7 = param_4 + param_2;
  uVar3 = **(uint **)(in_ECX + 0x24);
  uVar6 = ((int)param_4 >> 0x1f) + param_3 + (uint)CARRY4(param_4,param_2);
  if ((uVar3 != 0) && (*(uint *)(in_ECX + 0x3c) < uVar3)) {
    *(uint *)(in_ECX + 0x3c) = uVar3;
  }
  if ((uVar7 != 0xffffffff) || (uVar6 != 0xffffffff)) {
    if (((in_stack_00000020 & 1) == 0) || (**(int **)(in_ECX + 0x20) == 0)) {
      if ((((in_stack_00000020 & 2) != 0) && (uVar3 = **(uint **)(in_ECX + 0x24), uVar3 != 0)) &&
         (-1 < (int)uVar6)) {
        uVar4 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
        iVar5 = (int)uVar4 >> 0x1f;
        if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar7 <= uVar4)))) {
          iVar5 = (**(int **)(in_ECX + 0x10) - uVar3) + uVar7;
          **(int **)(in_ECX + 0x34) = **(int **)(in_ECX + 0x34) - iVar5;
          **(int **)(in_ECX + 0x24) = **(int **)(in_ECX + 0x24) + iVar5;
          goto LAB_0086c585;
        }
      }
    }
    else if (-1 < (int)uVar6) {
      uVar3 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
      iVar5 = (int)uVar3 >> 0x1f;
      if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar7 <= uVar3)))) {
        iVar5 = (**(int **)(in_ECX + 0x10) - **(int **)(in_ECX + 0x20)) + uVar7;
        **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) - iVar5;
        **(int **)(in_ECX + 0x20) = **(int **)(in_ECX + 0x20) + iVar5;
        if (((in_stack_00000020 & 2) != 0) && (iVar5 = **(int **)(in_ECX + 0x24), iVar5 != 0)) {
          iVar1 = **(int **)(in_ECX + 0x20);
          iVar2 = **(int **)(in_ECX + 0x34);
          **(int **)(in_ECX + 0x24) = iVar1;
          **(int **)(in_ECX + 0x34) = (iVar2 + iVar5) - iVar1;
        }
        goto LAB_0086c585;
      }
    }
    uVar6 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
LAB_0086c585:
  *param_1 = uVar7;
  param_1[1] = uVar6;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

