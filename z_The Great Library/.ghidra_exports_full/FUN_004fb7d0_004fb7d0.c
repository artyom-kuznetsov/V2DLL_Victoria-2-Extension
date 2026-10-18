// FUN_004fb7d0 @ 004fb7d0 body=[[004fb7d0, 004fbc0d]]


int * FUN_004fb7d0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_4;
  iVar5 = param_3;
  piVar3 = param_2;
  iVar4 = DAT_0125870c;
  local_c = *(int *)(param_3 + 0xe8);
  local_10 = param_4;
  if (local_c == *(int *)(param_4 + 0xe8)) {
    FUN_004a0e80(DAT_0125870c,param_2);
    return piVar3;
  }
  if (*(int *)(param_4 + 300) == 0) {
    iVar7 = *(int *)(param_4 + 0x5c);
    iVar8 = 0;
    if (0 < (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24) {
      local_8 = *(int *)(DAT_0125870c + 0x2238);
      piVar6 = (int *)(*(int *)(iVar7 + 200) + 4);
      do {
        iVar1 = *(int *)(local_8 + *piVar6 * 4);
        if ((*(int *)(iVar1 + 300) != 0) && (*(int *)(iVar1 + 0xe8) == local_c)) {
          FUN_004a0e80(DAT_0125870c,param_2);
          return piVar3;
        }
        iVar8 = iVar8 + 1;
        piVar6 = piVar6 + 9;
      } while (iVar8 < (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24);
    }
  }
  else if (*(int *)(param_3 + 300) == 0) {
    iVar7 = *(int *)(param_3 + 0x5c);
    iVar8 = 0;
    if (0 < (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24) {
      local_8 = *(int *)(DAT_0125870c + 0x2238);
      piVar6 = (int *)(*(int *)(iVar7 + 200) + 4);
      do {
        iVar1 = *(int *)(local_8 + *piVar6 * 4);
        if ((*(int *)(iVar1 + 300) != 0) && (*(int *)(iVar1 + 0xe8) == *(int *)(param_4 + 0xe8))) {
          FUN_004a0e80(DAT_0125870c,param_2);
          return piVar3;
        }
        iVar8 = iVar8 + 1;
        piVar6 = piVar6 + 9;
      } while (iVar8 < (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24);
    }
  }
  local_8 = 0;
  if (*(int *)(*(int *)(param_3 + 0x5c) + 0xe0) < 0) {
    if (local_c != 0) {
      piVar3 = (int *)FUN_004a0e80(DAT_0125870c,&local_c);
      local_8 = *piVar3;
      if (*(int *)(*(int *)(iVar5 + 0xe8) + 0x30) == 0) {
        param_3 = **(int **)(iVar4 + 0x2238);
      }
      else {
        param_3 = *(int *)(*(int *)(iVar4 + 0x2238) +
                          *(int *)(**(int **)(*(int *)(iVar5 + 0xe8) + 0x28) + 0x58) * 4);
      }
    }
    if ((*(int *)(param_3 + 300) == 0) || (*(int *)(param_3 + 0x158) == 0)) goto LAB_004fba2c;
  }
  iVar5 = DAT_0125870c;
  if ((*(int *)(iVar2 + 300) == 0) || (-1 < *(int *)(*(int *)(iVar2 + 0x5c) + 0xe0))) {
    iVar2 = *(int *)(iVar2 + 0x5c);
    if (-1 < *(int *)(iVar2 + 0xe0)) goto LAB_004fbaa8;
    iVar7 = 0;
    if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
      param_1 = *(int *)(param_1 + 0x20);
      piVar3 = (int *)(*(int *)(iVar2 + 200) + 4);
      do {
        iVar8 = *(int *)(*(int *)(iVar4 + 0x2238) + *piVar3 * 4);
        if ((*(int *)(iVar8 + 300) == param_1) && (iVar8 = *(int *)(iVar8 + 0xe8), iVar8 != 0)) {
          if (*(int *)(iVar8 + 0x30) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(**(int **)(iVar8 + 0x28) + 0x58);
          }
          iVar8 = *(int *)(*(int *)(iVar4 + 0x2238) + iVar8 * 4);
          if ((*(int *)(iVar8 + 300) != 0) && (*(int *)(iVar8 + 0x158) != 0)) {
            if (iVar8 == param_3) {
              piVar3 = (int *)FUN_004a0e80(DAT_0125870c,&param_4);
              *param_2 = *piVar3 + local_8;
              return param_2;
            }
            param_4 = *(undefined4 *)(param_4 + 0x58);
            piVar3 = (int *)FUN_0049b7f0(&param_3,*(undefined4 *)(iVar8 + 0x58),0);
            iVar4 = *piVar3 + local_8;
            piVar3 = (int *)FUN_004a0e80(iVar5,&param_1);
            *param_2 = *piVar3 + iVar4;
            return param_2;
          }
        }
        iVar7 = iVar7 + 1;
        piVar3 = piVar3 + 9;
      } while (iVar7 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
    }
  }
  else {
    if (*(int *)(*(int *)(iVar2 + 0xe8) + 0x30) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(**(int **)(*(int *)(iVar2 + 0xe8) + 0x28) + 0x58);
    }
    local_10 = *(int *)(*(int *)(iVar4 + 0x2238) + iVar5 * 4);
    if ((*(int *)(local_10 + 300) != 0) && (*(int *)(local_10 + 0x158) != 0)) {
LAB_004fbaa8:
      piVar3 = (int *)FUN_0049b7f0(&param_4,*(undefined4 *)(local_10 + 0x58),0);
      *param_2 = *piVar3 + local_8;
      return param_2;
    }
  }
LAB_004fba2c:
  FUN_00401000(0x49f42404);
  iVar4 = FUN_00b31c00();
  *param_2 = iVar4;
  return param_2;
}

