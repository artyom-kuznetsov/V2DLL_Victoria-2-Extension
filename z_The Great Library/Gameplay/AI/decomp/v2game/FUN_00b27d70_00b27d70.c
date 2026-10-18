// FUN_00b27d70 @ 00b27d70 body=[[00b27d70, 00b27edc]]


void FUN_00b27d70(int param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  size_t _MaxCount;
  size_t local_10;
  int local_c;
  
  iVar3 = FUN_00b27c10(param_1,param_2,0);
  if (iVar3 == -1) {
    return;
  }
  pcVar4 = param_2;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  local_10 = (int)pcVar4 - (int)(param_2 + 1);
  if ((0 < (int)local_10) && (param_2[local_10 - 1] == '/')) {
    local_10 = local_10 - 1;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 4);
  iVar7 = (0 < (int)local_10) + local_10;
joined_r0x00b27dd6:
  do {
    if ((int)uVar5 <= iVar3) {
      return;
    }
    pcVar4 = *(char **)(*(int *)(param_1 + 8) + iVar3 * 0x30);
    if (local_10 != 0) {
      iVar6 = _strncmp(pcVar4,param_2,local_10);
      if (iVar6 != 0) {
        return;
      }
      if (pcVar4[local_10] != '/') {
        return;
      }
    }
    if (param_3 == 0) {
LAB_00b27e41:
      pcVar1 = pcVar4 + iVar7;
      iVar6 = FUN_00ab4790(pcVar1,0x2f);
      if (iVar6 == 0) {
        pcVar9 = pcVar1;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar8 = (int)pcVar9 - (int)(pcVar1 + 1);
      }
      else {
        iVar8 = iVar6 - (int)pcVar1;
      }
      FUN_00b27cf0(param_4,param_6,param_5,pcVar1);
      _MaxCount = iVar8 + iVar7;
      iVar3 = iVar3 + 1;
      if ((int)uVar5 <= iVar3) {
        return;
      }
      local_c = iVar3 * 0x30;
      while (iVar6 != 0) {
        pcVar1 = *(char **)(local_c + *(int *)(param_1 + 8));
        iVar8 = _strncmp(pcVar4,pcVar1,_MaxCount);
        if ((iVar8 != 0) || (pcVar1[_MaxCount] != '/')) break;
        local_c = local_c + 0x30;
        iVar3 = iVar3 + 1;
        if ((int)uVar5 <= iVar3) {
          return;
        }
      }
      goto joined_r0x00b27dd6;
    }
    iVar6 = *(int *)(*(int *)(param_1 + 8) + 8 + iVar3 * 0x30);
    if (((iVar6 != 1) && (iVar6 != 5)) && (*(int *)(*(int *)(param_1 + 8) + 4 + iVar3 * 0x30) == 0))
    goto LAB_00b27e41;
    iVar3 = iVar3 + 1;
  } while( true );
}

