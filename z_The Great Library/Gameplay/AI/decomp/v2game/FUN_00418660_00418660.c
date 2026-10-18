// FUN_00418660 @ 00418660 body=[[00418660, 004186cc] [004186d0, 00418774]]


void FUN_00418660(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = *param_1;
  local_14 = 0;
  if (0 < (int)(param_1[1] - iVar4 & 0xfffffff0U)) {
    local_c = 0;
    do {
      local_10 = 0;
      if (0 < (int)(*(int *)(local_c + 4 + iVar4) - *(int *)(local_c + iVar4) & 0xfffffff0U)) {
        iVar4 = *(int *)(local_c + iVar4);
        local_8 = 0;
        do {
          piVar1 = (int *)(iVar4 + local_8);
          iVar3 = 0;
          if (0 < (*(int *)(iVar4 + 4 + local_8) - *(int *)(iVar4 + local_8)) / 0x14) {
            iVar2 = 0;
            do {
              FUN_00418990(*piVar1 + iVar2);
              iVar4 = *(int *)(local_c + *param_1);
              piVar1 = (int *)(iVar4 + local_8);
              iVar3 = iVar3 + 1;
              iVar2 = iVar2 + 0x14;
            } while (iVar3 < (piVar1[1] - *piVar1) / 0x14);
          }
          local_8 = local_8 + 0x10;
          local_10 = local_10 + 1;
        } while (local_10 < *(int *)(*param_1 + 4 + local_c) - *(int *)(*param_1 + local_c) >> 4);
      }
      iVar4 = *param_1;
      local_14 = local_14 + 1;
      local_c = local_c + 0x10;
    } while (local_14 < param_1[1] - iVar4 >> 4);
  }
  iVar4 = 0;
  do {
    if (*(int *)(param_1[4] + iVar4) != 0) {
      FUN_00418990(*(undefined4 *)(param_1[4] + iVar4));
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x10);
  return;
}

