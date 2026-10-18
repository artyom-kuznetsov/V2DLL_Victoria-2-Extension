// FUN_0086c2c0 @ 0086c2c0 body=[[0086c2c0, 0086c478]]


void FUN_0086c2c0(uint *param_1,uint param_2,uint param_3,int param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = **(uint **)(in_ECX + 0x24);
  if ((uVar2 != 0) && (*(uint *)(in_ECX + 0x3c) < uVar2)) {
    *(uint *)(in_ECX + 0x3c) = uVar2;
  }
  if (((param_5 & 1) == 0) || (iVar5 = **(int **)(in_ECX + 0x20), iVar5 == 0)) {
    if (((param_5 & 2) == 0) || (uVar2 = **(uint **)(in_ECX + 0x24), uVar2 == 0)) {
      if (param_2 == 0 && param_3 == 0) goto LAB_0086c45d;
    }
    else {
      if (param_4 == 2) {
        uVar3 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
        bVar6 = CARRY4(param_2,uVar3);
        param_2 = param_2 + uVar3;
        param_3 = param_3 + ((int)uVar3 >> 0x1f) + (uint)bVar6;
      }
      else if (param_4 == 1) {
        uVar3 = uVar2 - **(int **)(in_ECX + 0x10);
        bVar6 = CARRY4(param_2,uVar3);
        param_2 = param_2 + uVar3;
        param_3 = param_3 + ((int)uVar3 >> 0x1f) + (uint)bVar6;
      }
      else if (param_4 != 0) {
        param_2 = 0xffffffff;
        param_3 = 0xffffffff;
      }
      if (-1 < (int)param_3) {
        uVar3 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
        iVar5 = (int)uVar3 >> 0x1f;
        if (((int)param_3 <= iVar5) && (((int)param_3 < iVar5 || (param_2 <= uVar3)))) {
          iVar5 = (**(int **)(in_ECX + 0x10) - uVar2) + param_2;
          **(int **)(in_ECX + 0x34) = **(int **)(in_ECX + 0x34) - iVar5;
          **(int **)(in_ECX + 0x24) = **(int **)(in_ECX + 0x24) + iVar5;
          goto LAB_0086c45d;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      uVar2 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
      bVar6 = CARRY4(param_2,uVar2);
      param_2 = param_2 + uVar2;
      param_3 = param_3 + ((int)uVar2 >> 0x1f) + (uint)bVar6;
    }
    else if (param_4 == 1) {
      if ((param_5 & 2) == 0) {
        uVar2 = iVar5 - **(int **)(in_ECX + 0x10);
        bVar6 = CARRY4(param_2,uVar2);
        param_2 = param_2 + uVar2;
        param_3 = param_3 + ((int)uVar2 >> 0x1f) + (uint)bVar6;
      }
      else {
LAB_0086c331:
        param_2 = 0xffffffff;
        param_3 = 0xffffffff;
      }
    }
    else if (param_4 != 0) goto LAB_0086c331;
    if (-1 < (int)param_3) {
      uVar2 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
      iVar4 = (int)uVar2 >> 0x1f;
      if (((int)param_3 <= iVar4) && (((int)param_3 < iVar4 || (param_2 <= uVar2)))) {
        iVar5 = (**(int **)(in_ECX + 0x10) - iVar5) + param_2;
        **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) - iVar5;
        **(int **)(in_ECX + 0x20) = **(int **)(in_ECX + 0x20) + iVar5;
        if (((param_5 & 2) != 0) && (iVar5 = **(int **)(in_ECX + 0x24), iVar5 != 0)) {
          iVar4 = **(int **)(in_ECX + 0x34);
          iVar1 = **(int **)(in_ECX + 0x20);
          **(int **)(in_ECX + 0x24) = iVar1;
          **(int **)(in_ECX + 0x34) = (iVar4 + iVar5) - iVar1;
        }
        goto LAB_0086c45d;
      }
    }
  }
  param_2 = 0xffffffff;
  param_3 = 0xffffffff;
LAB_0086c45d:
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

