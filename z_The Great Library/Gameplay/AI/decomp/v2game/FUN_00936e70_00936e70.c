// FUN_00936e70 @ 00936e70 body=[[00936e70, 00936fb7]]


char FUN_00936e70(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_10;
  char local_5;
  
  iVar5 = *param_1;
  local_5 = '\x01';
  local_10 = 0;
  if (param_3 != *(int *)(iVar5 + 4)) {
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4);
    piVar4 = *(int **)(iVar6 + 0x9d8);
    while ((*(int **)(iVar6 + 0x9d8) <= piVar4 && (piVar4 < *(int **)(iVar6 + 0x9dc)))) {
      iVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4) + 0x134) == param_3) {
        local_10 = local_10 + 1;
      }
      else {
        local_5 = '\0';
      }
    }
LAB_00936f5a:
    if (local_5 == '\0') {
      if (*(int *)(iVar6 + 0x9f0) != 0) {
        return '\0';
      }
      iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 0xbe4) * 4);
      if (((iVar5 != 0) && (*(int *)(iVar5 + 0x134) == param_3)) ||
         (iVar5 = *(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8),
         (iVar5 >> 2) - (iVar5 >> 0x1f) >> 1 < local_10)) {
        return '\x01';
      }
      local_5 = '\0';
    }
    return local_5;
  }
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4);
  piVar4 = *(int **)(iVar6 + 0x9d8);
LAB_00936eb2:
  do {
    if ((piVar4 < *(int **)(iVar6 + 0x9d8)) || (*(int **)(iVar6 + 0x9dc) <= piVar4))
    goto LAB_00936f5a;
    iVar1 = *piVar4;
    iVar2 = param_1[1];
    piVar4 = piVar4 + 1;
    if (iVar5 != iVar2) {
      iVar3 = iVar5;
      do {
        if (*(int *)(iVar3 + 4) ==
            *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 0x134)) break;
        iVar3 = iVar3 + 8;
      } while (iVar3 != iVar2);
      if (iVar3 != iVar2) {
        local_10 = local_10 + 1;
        goto LAB_00936eb2;
      }
    }
    local_5 = '\0';
  } while( true );
}

