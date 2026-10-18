// FUN_009d6390 @ 009d6390 body=[[009d6390, 009d6565]]


void FUN_009d6390(uint *param_1,uint param_2,uint param_3,int param_4,byte param_5)

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
      if (param_2 == 0 && param_3 == 0) goto LAB_009d654a;
    }
    else {
      if (param_4 == 2) {
        iVar5 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
        uVar3 = iVar5 >> 1;
        bVar6 = CARRY4(param_2,uVar3);
        param_2 = param_2 + uVar3;
        param_3 = param_3 + (iVar5 >> 0x1f) + (uint)bVar6;
      }
      else if (param_4 == 1) {
        iVar5 = uVar2 - **(int **)(in_ECX + 0x10);
        uVar3 = iVar5 >> 1;
        bVar6 = CARRY4(param_2,uVar3);
        param_2 = param_2 + uVar3;
        param_3 = param_3 + (iVar5 >> 0x1f) + (uint)bVar6;
      }
      else if (param_4 != 0) {
        param_2 = 0xffffffff;
        param_3 = 0xffffffff;
      }
      if (-1 < (int)param_3) {
        iVar5 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
        iVar1 = iVar5 >> 0x1f;
        if (((int)param_3 <= iVar1) && (((int)param_3 < iVar1 || (param_2 <= (uint)(iVar5 >> 1)))))
        {
          iVar5 = ((int)(**(int **)(in_ECX + 0x10) - uVar2) >> 1) + param_2;
          **(int **)(in_ECX + 0x34) = **(int **)(in_ECX + 0x34) - iVar5;
          **(int **)(in_ECX + 0x24) = **(int **)(in_ECX + 0x24) + iVar5 * 2;
          goto LAB_009d654a;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      iVar1 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
      uVar2 = iVar1 >> 1;
      bVar6 = CARRY4(param_2,uVar2);
      param_2 = param_2 + uVar2;
      param_3 = param_3 + (iVar1 >> 0x1f) + (uint)bVar6;
    }
    else if (param_4 == 1) {
      if ((param_5 & 2) == 0) {
        iVar1 = iVar5 - **(int **)(in_ECX + 0x10);
        uVar2 = iVar1 >> 1;
        bVar6 = CARRY4(param_2,uVar2);
        param_2 = param_2 + uVar2;
        param_3 = param_3 + (iVar1 >> 0x1f) + (uint)bVar6;
      }
      else {
LAB_009d6405:
        param_2 = 0xffffffff;
        param_3 = 0xffffffff;
      }
    }
    else if (param_4 != 0) goto LAB_009d6405;
    if (-1 < (int)param_3) {
      iVar1 = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x10);
      iVar4 = iVar1 >> 0x1f;
      if (((int)param_3 <= iVar4) && (((int)param_3 < iVar4 || (param_2 <= (uint)(iVar1 >> 1))))) {
        iVar5 = (**(int **)(in_ECX + 0x10) - iVar5 >> 1) + param_2;
        **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) - iVar5;
        **(int **)(in_ECX + 0x20) = **(int **)(in_ECX + 0x20) + iVar5 * 2;
        if (((param_5 & 2) != 0) && (iVar5 = **(int **)(in_ECX + 0x24), iVar5 != 0)) {
          iVar1 = **(int **)(in_ECX + 0x34);
          iVar4 = **(int **)(in_ECX + 0x20);
          **(int **)(in_ECX + 0x24) = iVar4;
          **(int **)(in_ECX + 0x34) = (iVar5 + iVar1 * 2) - iVar4 >> 1;
        }
        goto LAB_009d654a;
      }
    }
  }
  param_2 = 0xffffffff;
  param_3 = 0xffffffff;
LAB_009d654a:
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

