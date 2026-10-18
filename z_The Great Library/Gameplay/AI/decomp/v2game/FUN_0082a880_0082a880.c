// FUN_0082a880 @ 0082a880 body=[[0082a880, 0082ac5e] [0082ac60, 0082ae97]]


undefined4 FUN_0082a880(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int *local_10;
  float local_c;
  float local_8;
  
  local_18 = *(int *)(param_3 + 0x58);
  iVar7 = *(int *)(param_2[0x37] + 0x5c);
  iVar4 = (*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200)) / 0x24;
  iVar9 = 0;
  local_14 = 100000;
  if (0 < iVar4) {
    piVar8 = (int *)(*(int *)(iVar7 + 200) + 4);
    do {
      if (*piVar8 == local_18) {
        piVar8 = (int *)FUN_005d24a0(local_1c);
        local_14 = (*piVar8 + -43800000) / 0x18;
        iVar7 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
        iVar4 = (int)((double)local_14 / 365.0);
        iVar9 = (int)((double)iVar7 / 365.0);
        local_14 = ((((int)((float)iVar4 * -365.0) - (int)((float)iVar9 * -365.0)) +
                    (iVar4 - iVar9) * 0x16d) - iVar7) + local_14;
        break;
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 9;
    } while (iVar9 < iVar4);
  }
  local_c = 0.0;
  local_8 = 0.0;
  piVar8 = *(int **)(param_3 + 0xec);
  iVar7 = param_1;
joined_r0x0082a9be:
  do {
    if (piVar8 == (int *)0x0) {
      iVar4 = *(int *)(param_3 + 0x5c);
      local_18 = 0;
      if (0 < (*(int *)(iVar4 + 0xcc) - *(int *)(iVar4 + 200)) / 0x24) {
        local_14 = 0;
        do {
          if ((*(int *)(local_14 + *(int *)(iVar4 + 200)) != 4) &&
             (iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                              *(int *)(local_14 + 4 + *(int *)(iVar4 + 200)) * 4),
             *(char *)(*(int *)(iVar4 + 0x5c) + 0x2a) != '\0')) {
            piVar8 = *(int **)(iVar4 + 0xec);
joined_r0x0082ac57:
            if (piVar8 != (int *)0x0) {
              local_10 = (int *)piVar8[2];
              piVar1 = (int *)*piVar8;
              cVar2 = (**(code **)(*piVar1 + 0x3c))();
              piVar8 = local_10;
              if ((((cVar2 == '\0') && (0 < piVar1[0x3b])) && (piVar1[0x1d] == 0)) &&
                 ((*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar1[0x39] * 4) == param_3
                  && (piVar1 != param_2)))) {
                iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x38) * 4);
                if ((piVar1[0x31] != *(int *)(iVar4 + 0x20)) &&
                   (((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + piVar1[0x31] * 4) + 0x34) != 0 ||
                     ((((char)piVar1[0x30] == 'R' && (*(char *)((int)piVar1 + 0xc1) == 'E')) &&
                      (*(char *)((int)piVar1 + 0xc2) == 'B')))) ||
                    (((iVar7 = param_1, *(char *)(iVar4 + 0x1c) == 'R' &&
                      (*(char *)(iVar4 + 0x1d) == 'E')) && (*(char *)(iVar4 + 0x1e) == 'B')))))) {
                  piVar8 = (int *)(**(code **)(*piVar1 + 0x5c))(local_30);
                  local_c = (float)*piVar8 / 1000.0 + local_c;
                  piVar8 = local_10;
                  iVar7 = param_1;
                  goto joined_r0x0082ac57;
                }
                if (*(int *)(iVar7 + 0x38) == piVar1[0x31]) {
                  pcVar6 = *(code **)(*piVar1 + 0x68);
                  puVar3 = local_34;
                }
                else {
                  cVar2 = FUN_0051af10(1);
                  piVar8 = local_10;
                  if (cVar2 == '\0') goto joined_r0x0082ac57;
                  pcVar6 = *(code **)(*piVar1 + 0x5c);
                  puVar3 = local_38;
                }
                piVar8 = (int *)(*pcVar6)(puVar3);
                local_8 = (float)*piVar8 / 1000.0 + local_8;
                piVar8 = local_10;
              }
              goto joined_r0x0082ac57;
            }
          }
          iVar4 = *(int *)(param_3 + 0x5c);
          local_14 = local_14 + 0x24;
          local_18 = local_18 + 1;
        } while (local_18 < (*(int *)(iVar4 + 0xcc) - *(int *)(iVar4 + 200)) / 0x24);
      }
      if (0.0 < local_c) {
        piVar8 = (int *)(**(code **)(*param_2 + 0x68))(&param_1);
        local_8 = (float)*piVar8 / 1000.0 + local_8;
        if ((local_8 <= 0.001) || (1.2 <= local_c / local_8)) {
          return 0;
        }
      }
      return 1;
    }
    local_10 = (int *)piVar8[2];
    piVar1 = (int *)*piVar8;
    cVar2 = (**(code **)(*piVar1 + 0x3c))();
    piVar8 = local_10;
  } while ((cVar2 != '\0') || ((char)piVar1[0x41] != '\0'));
  if ((0 < piVar1[0x3b]) && (piVar1[0x1d] == 0)) goto code_r0x0082aa05;
  goto LAB_0082aac8;
code_r0x0082aa05:
  piVar8 = (int *)FUN_005d24a0(local_20);
  iVar4 = (*piVar8 + -43800000) / 0x18;
  iVar5 = (int)((double)iVar4 / 365.0);
  iVar9 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  local_18 = (int)((double)iVar9 / 365.0);
  iVar7 = param_1;
  piVar8 = local_10;
  if (local_14 <=
      ((((int)((float)iVar5 * -365.0) - (int)((float)local_18 * -365.0)) +
       (iVar5 - local_18) * 0x16d) - iVar9) + iVar4) {
LAB_0082aac8:
    local_18 = *(int *)(DAT_012587e4 + 4);
    iVar4 = *(int *)(local_18 + *(int *)(iVar7 + 0x38) * 4);
    if ((piVar1[0x31] != *(int *)(iVar4 + 0x20)) &&
       (((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + piVar1[0x31] * 4) + 0x34) != 0 ||
         ((((char)piVar1[0x30] == 'R' && (*(char *)((int)piVar1 + 0xc1) == 'E')) &&
          (*(char *)((int)piVar1 + 0xc2) == 'B')))) ||
        (((*(char *)(iVar4 + 0x1c) == 'R' && (*(char *)(iVar4 + 0x1d) == 'E')) &&
         (*(char *)(iVar4 + 0x1e) == 'B')))))) {
      piVar8 = (int *)(**(code **)(*piVar1 + 0x5c))(local_24);
      local_c = (float)*piVar8 / 1000.0 + local_c;
      piVar8 = local_10;
      goto joined_r0x0082a9be;
    }
    if (*(int *)(iVar7 + 0x38) == piVar1[0x31]) {
      pcVar6 = *(code **)(*piVar1 + 0x68);
      puVar3 = local_28;
    }
    else {
      cVar2 = FUN_0051af10(1);
      piVar8 = local_10;
      if (cVar2 == '\0') goto joined_r0x0082a9be;
      pcVar6 = *(code **)(*piVar1 + 0x5c);
      puVar3 = local_2c;
    }
    piVar8 = (int *)(*pcVar6)(puVar3);
    local_8 = (float)*piVar8 / 1000.0 + local_8;
    piVar8 = local_10;
  }
  goto joined_r0x0082a9be;
}

