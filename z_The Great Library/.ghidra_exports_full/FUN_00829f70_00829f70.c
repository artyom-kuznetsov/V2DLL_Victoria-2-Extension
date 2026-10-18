// FUN_00829f70 @ 00829f70 body=[[00829f70, 0082a4e0]]


undefined4 FUN_00829f70(int param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  float local_10;
  int local_c;
  float local_8;
  
  iVar5 = param_2;
  if ((*(int **)(param_2 + 0x74) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_2 + 0x74) + 0x2c))(), cVar1 == '\0')) {
    return 0;
  }
  local_20 = 10000;
  if (0 < *(int *)(iVar5 + 0xec)) {
    piVar2 = (int *)FUN_005d24a0(local_24);
    iVar5 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
    iVar8 = (int)((double)iVar5 / 365.0);
    local_20 = (*piVar2 + -43800000) / 0x18;
    iVar3 = (int)((double)local_20 / 365.0);
    local_20 = ((((int)((float)iVar8 * 365.0) - (int)((float)iVar3 * 365.0)) +
                (iVar3 - iVar8) * 0x16d) - iVar5) + local_20;
  }
  iVar5 = param_2;
  *param_3 = 0;
  piVar2 = *(int **)(*(int *)(param_2 + 0xdc) + 0xec);
  local_14 = 100000;
  local_10 = 0.0;
  local_8 = 0.0;
joined_r0x0082a084:
  do {
    if (piVar2 == (int *)0x0) {
      iVar3 = *(int *)(*(int *)(iVar5 + 0xdc) + 0x5c);
      local_1c = 0;
      if (0 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24) {
        local_c = 0;
        do {
          if ((*(int *)(local_c + *(int *)(iVar3 + 200)) != 4) &&
             (iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                              *(int *)(local_c + 4 + *(int *)(iVar3 + 200)) * 4),
             *(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) != '\0')) {
            piVar2 = *(int **)(iVar3 + 0xec);
            iVar3 = iVar5;
joined_r0x0082a199:
            do {
              iVar5 = iVar3;
              if (piVar2 == (int *)0x0) break;
              local_18 = (int *)piVar2[2];
              piVar4 = (int *)*piVar2;
              cVar1 = (**(code **)(*piVar4 + 0x3c))();
              piVar2 = local_18;
              iVar3 = param_2;
              if (cVar1 == '\0') {
                if (piVar4[0x3b] < 1) {
                  if ((char)piVar4[0x41] == '\0') goto joined_r0x0082a199;
                  if (0 < piVar4[0x3b]) goto LAB_0082a1d8;
                  iVar8 = 0;
                }
                else {
LAB_0082a1d8:
                  iVar8 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar4[0x39] * 4);
                }
                if ((iVar8 == *(int *)(iVar5 + 0xdc)) && (piVar4[0x1d] == 0)) {
                  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
                  if ((piVar4[0x31] == *(int *)(iVar5 + 0x20)) ||
                     (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + piVar4[0x31] * 4) + 0x34) == 0
                       && ((((char)piVar4[0x30] != 'R' || (*(char *)((int)piVar4 + 0xc1) != 'E')) ||
                           (*(char *)((int)piVar4 + 0xc2) != 'B')))) &&
                      (((*(char *)(iVar5 + 0x1c) != 'R' || (*(char *)(iVar5 + 0x1d) != 'E')) ||
                       (*(char *)(iVar5 + 0x1e) != 'B')))))) {
                    if (piVar4[0x31] == *(int *)(param_1 + 0x38)) {
                      pcVar7 = *(code **)(*piVar4 + 0x68);
                      puVar6 = local_38;
                    }
                    else {
                      cVar1 = FUN_0051af10(0);
                      piVar2 = local_18;
                      iVar3 = param_2;
                      if (cVar1 == '\0') goto joined_r0x0082a199;
                      pcVar7 = *(code **)(*piVar4 + 0x5c);
                      puVar6 = local_3c;
                    }
                    piVar2 = (int *)(*pcVar7)(puVar6);
                    local_8 = (float)*piVar2 / 1000.0 + local_8;
                    piVar2 = local_18;
                    iVar3 = param_2;
                    goto joined_r0x0082a199;
                  }
                  *param_3 = 1;
                  piVar2 = (int *)(**(code **)(*piVar4 + 0x5c))(local_30);
                  local_10 = (float)*piVar2 / 1000.0 + local_10;
                  piVar2 = (int *)FUN_005d24a0(local_34);
                  iVar5 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
                  iVar9 = (int)((double)iVar5 / 365.0);
                  iVar8 = (*piVar2 + -43800000) / 0x18;
                  iVar3 = (int)((double)iVar8 / 365.0);
                  iVar8 = ((((int)((float)iVar9 * 365.0) - (int)((float)iVar3 * 365.0)) +
                           (iVar3 - iVar9) * 0x16d) - iVar5) + iVar8;
                  piVar2 = local_18;
                  iVar3 = param_2;
                  if (iVar8 < local_14) {
                    local_14 = iVar8;
                  }
                }
              }
            } while( true );
          }
          iVar3 = *(int *)(*(int *)(iVar5 + 0xdc) + 0x5c);
          local_c = local_c + 0x24;
          local_1c = local_1c + 1;
        } while (local_1c < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24);
      }
      fVar10 = DAT_00f141c8;
      if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xbe4) ==
          *(int *)(*(int *)(iVar5 + 0xdc) + 0x58)) {
        fVar10 = DAT_00f092b0;
      }
      if (local_10 <= 0.1) {
        return 0;
      }
      if (local_10 < fVar10 * local_8) {
        return 0;
      }
      if (local_20 < local_14) {
        return 0;
      }
      iVar3 = local_14 + -2;
      param_2 = 100000;
      iVar5 = FUN_0082a4f0(param_1,iVar5,&param_2,iVar3);
      if (iVar5 == 0) {
        return 0;
      }
      if (param_2 < iVar3) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0xf6) = 1;
      FUN_0082e5d0(param_1);
      return 1;
    }
    piVar4 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
    cVar1 = (**(code **)(*piVar4 + 0x3c))();
  } while (cVar1 != '\0');
  if (piVar4[0x31] != *(int *)(param_1 + 0x38)) goto LAB_0082a0bb;
  pcVar7 = *(code **)(*piVar4 + 0x68);
  puVar6 = local_28;
  goto LAB_0082a0ea;
LAB_0082a0bb:
  cVar1 = FUN_0051af10(0);
  if (cVar1 != '\0') {
    pcVar7 = *(code **)(*piVar4 + 0x5c);
    puVar6 = local_2c;
LAB_0082a0ea:
    piVar4 = (int *)(*pcVar7)(puVar6);
    local_8 = (float)*piVar4 / 1000.0 + local_8;
  }
  goto joined_r0x0082a084;
}

