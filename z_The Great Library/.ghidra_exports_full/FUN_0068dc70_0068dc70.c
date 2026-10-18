// FUN_0068dc70 @ 0068dc70 body=[[0068dc70, 0068dd69]]


void FUN_0068dc70(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_10;
  int local_c;
  
  iVar5 = *(int *)(param_1 + 0xbf4) - *(int *)(param_1 + 0xbf0) >> 4;
  local_c = 0;
  if (0 < iVar5) {
    local_10 = 0;
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0xbf0) + local_10);
      local_18 = 0;
      iVar6 = piVar4[1] - *piVar4 >> 2;
      if (0 < iVar6) {
        do {
          piVar4 = *(int **)(*(int *)(local_10 + *(int *)(param_1 + 0xbf0)) + local_18 * 4);
          cVar3 = (**(code **)(*piVar4 + 0x34))();
          if ((cVar3 != '\0') &&
             (iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2a88) + local_18 * 4),
             0 < *(int *)(iVar1 + 0x10))) {
            iVar2 = **(int **)(iVar1 + 8);
            cVar3 = FUN_00645fd0(*(undefined4 *)(*(int *)(DAT_012588dc + 0x20d8) + iVar2 * 4),
                                 local_c);
            FUN_00645de0(*(undefined4 *)(*(int *)(DAT_012588dc + 0x20d8) + iVar2 * 4),local_c,
                         piVar4[0x13]);
            if (cVar3 == '\0') {
              *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0x70) + 1;
            }
          }
          local_18 = local_18 + 1;
        } while (local_18 < iVar6);
      }
      local_10 = local_10 + 0x10;
      local_c = local_c + 1;
    } while (local_c < iVar5);
  }
  return;
}

