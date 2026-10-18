// FUN_0082c7f0 @ 0082c7f0 body=[[0082c7f0, 0082c8ec] [0082c8f0, 0082ca97]]


undefined4 FUN_0082c7f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_88 [21];
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0xb4) < 2) {
    return *(undefined4 *)(param_1 + 0xdc);
  }
  piVar2 = *(int **)(param_1 + 0xac);
  local_c = *piVar2;
  iVar6 = *(int *)(*(int *)(local_c + 0xdc) + 0x5c);
  local_1c = *(undefined4 *)(*(int *)(local_c + 0xdc) + 0x58);
  iVar6 = (*(int *)(iVar6 + 0xcc) - *(int *)(iVar6 + 200)) / 0x24;
  local_28 = iVar6;
  if (0x14 < iVar6) {
    return *(undefined4 *)(*(int *)(local_c + 0xdc) + 0x58);
  }
  if (0 < iVar6) {
    piVar4 = local_88;
    for (iVar3 = iVar6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
  }
  local_10 = 0;
  local_18 = piVar2;
  do {
    do {
      do {
        if (local_18 == (int *)0x0) {
          iVar3 = 0;
          param_1 = 0;
          if (0 < iVar6) {
            iVar5 = 0;
            do {
              iVar1 = local_88[iVar3];
              if ((param_1 < iVar1) && (local_10 / 2 < iVar1)) {
                local_1c = *(undefined4 *)
                            (*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                     *(int *)(*(int *)(*(int *)(*(int *)(local_c + 0xdc) + 0x5c) +
                                                      200) + 4 + iVar5) * 4) + 0x58);
                param_1 = iVar1;
              }
              iVar3 = iVar3 + 1;
              iVar5 = iVar5 + 0x24;
            } while (iVar3 < iVar6);
          }
          return local_1c;
        }
        iVar3 = *local_18;
        local_18 = (int *)local_18[2];
        iVar6 = local_28;
      } while (iVar3 == local_c);
      local_14 = *(int **)(local_c + 0xdc);
      iVar5 = *(int *)(iVar3 + 0xdc);
      if ((int *)iVar5 == local_14) goto LAB_0082ca8c;
    } while (*(int *)(iVar3 + 0xec) < 1);
    if ((int *)*(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar3 + 0xe4) * 4) == local_14)
    {
      local_24 = *(undefined4 *)(param_1 + 0x34);
      iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
      if ((*(int *)(iVar5 + 0x134) == *(int *)(iVar6 + 0x20)) ||
         (((*(int *)(*(int *)(*(int *)(iVar6 + 0xbe8) + *(int *)(iVar5 + 0x134) * 4) + 0x34) == 0 &&
           (((*(char *)(iVar5 + 0x130) != 'R' || (*(char *)(iVar5 + 0x131) != 'E')) ||
            (*(char *)(iVar5 + 0x132) != 'B')))) &&
          (((*(char *)(iVar6 + 0x1c) != 'R' || (*(char *)(iVar6 + 0x1d) != 'E')) ||
           (*(char *)(iVar6 + 0x1e) != 'B')))))) {
        local_34 = *(undefined4 *)(param_1 + 0x34);
        local_30 = *(undefined4 *)(param_1 + 0x38);
        iVar6 = *(int *)(local_c + 0x98);
        piVar2 = (int *)FUN_004b3c40(local_14,&local_34);
        if (iVar6 * 3000 <= *piVar2) {
          local_14 = *(int **)(local_c + 0xdc);
LAB_0082ca8c:
          return *(undefined4 *)((int)local_14 + 0x58);
        }
      }
    }
    local_14 = *(int **)(iVar3 + 0xe8);
    iVar6 = local_28;
    if (local_14 != (int *)0x0) {
      iVar3 = *(int *)(*(int *)(local_c + 0xdc) + 0x5c);
      do {
        local_20 = *local_14;
        local_14 = (int *)local_14[1];
        iVar6 = 0;
        if (0 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24) {
          piVar2 = (int *)(*(int *)(iVar3 + 200) + 4);
          do {
            if (local_20 == *piVar2) {
              local_88[iVar6] = local_88[iVar6] + 1;
              local_10 = local_10 + 1;
            }
            iVar6 = iVar6 + 1;
            piVar2 = piVar2 + 9;
          } while (iVar6 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24);
        }
        iVar6 = local_28;
      } while (local_14 != (int *)0x0);
    }
  } while( true );
}

