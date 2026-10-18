// FUN_0048ea60 @ 0048ea60 body=[[0048ea60, 0048ebba] [0048ebc1, 0048ec64] [0048ec6f, 0048ecf5] [0048ecff, 0048ed0a] [0048ed17, 0048ee5c] [0048ee67, 0048eeb8] [0048eec3, 0048ef18] [0048ef1e, 0048f064]]


int FUN_0048ea60(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *local_30;
  int local_24;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b604d0;
  local_14 = ExceptionList;
  piVar1 = *(int **)(param_1 + 0xe8);
  if ((param_5 == param_3) && (piVar1 != (int *)0x0)) {
    return param_5;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 0xcc) - *(int *)(*(int *)(param_1 + 0x5c) + 200);
  iVar8 = iVar5 * 0x38e38e39;
  iVar5 = iVar5 / 0x24;
  ExceptionList = &local_14;
  if ((piVar1 != (int *)0x0) && (ExceptionList = &local_14, param_5 != 0)) {
    ExceptionList = &local_14;
    if (0 < iVar5) {
      iVar9 = 0;
      iVar8 = iVar5;
      ExceptionList = &local_14;
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                   *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 200) + 4 + iVar9) *
                                   4) + 0xe8);
        if ((piVar2 != (int *)0x0) && (piVar2 != piVar1)) {
          FUN_0048e260(0xffffffff);
          FUN_0048e260(0xffffffff);
        }
        iVar9 = iVar9 + 0x24;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    (**(code **)(*piVar1 + 4))(param_1);
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if (piVar1[3] == 0) {
      puVar10 = (undefined4 *)piVar1[5];
      piVar2 = DAT_012587e4;
      while (DAT_012587e4 = piVar2, puVar10 != (undefined4 *)0x0) {
        iVar8 = *(int *)*puVar10;
        puVar4 = *(undefined4 **)(iVar8 + 0x14);
        puVar10 = (undefined4 *)puVar10[2];
        if (puVar4 != (undefined4 *)0x0) {
          do {
            if (*(int **)*puVar4 == piVar1) break;
            puVar4 = (undefined4 *)puVar4[2];
          } while (puVar4 != (undefined4 *)0x0);
          if (puVar4 != (undefined4 *)0x0) {
            if (*(char *)(iVar8 + 0x20) == '\0') {
              iVar5 = puVar4[1];
              iVar9 = puVar4[2];
              if (iVar5 != 0) {
                *(int *)(iVar5 + 8) = iVar9;
              }
              if (iVar9 != 0) {
                *(int *)(iVar9 + 4) = iVar5;
              }
              if (puVar4 == *(undefined4 **)(iVar8 + 0x14)) {
                *(int *)(iVar8 + 0x14) = iVar9;
              }
              if (puVar4 == *(undefined4 **)(iVar8 + 0x18)) {
                *(int *)(iVar8 + 0x18) = iVar5;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(puVar4);
            }
            *(undefined1 *)(puVar4 + 3) = 1;
            piVar2 = DAT_012587e4;
          }
        }
      }
      local_24 = 0;
      piVar6 = piVar2;
      if (0 < *piVar2) {
        do {
          piVar3 = *(int **)(*(int *)(piVar6[1] +
                                     *(int *)(*(int *)(piVar2[1] + local_24 * 4) + 0x20) * 4) +
                            0xa08);
joined_r0x0048ec01:
          if (piVar3 != (int *)0x0) {
            iVar8 = *piVar3;
            piVar3 = (int *)piVar3[2];
            piVar6 = DAT_012587e4;
            if (piVar1[3] != 0) {
              for (puVar10 = *(undefined4 **)(iVar8 + 0x14); puVar10 != (undefined4 *)0x0;
                  puVar10 = (undefined4 *)puVar10[2]) {
                if (*(int **)*puVar10 == piVar1) {
                  if (*(char *)(iVar8 + 0x20) == '\0') {
                    iVar5 = puVar10[1];
                    iVar9 = puVar10[2];
                    if (iVar5 != 0) {
                      *(int *)(iVar5 + 8) = iVar9;
                    }
                    if (iVar9 != 0) {
                      *(int *)(iVar9 + 4) = iVar5;
                    }
                    if (puVar10 == *(undefined4 **)(iVar8 + 0x14)) {
                      *(int *)(iVar8 + 0x14) = iVar9;
                    }
                    if (puVar10 == *(undefined4 **)(iVar8 + 0x18)) {
                      *(int *)(iVar8 + 0x18) = iVar5;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(puVar10);
                  }
                  *(undefined1 *)(puVar10 + 3) = 1;
                  piVar6 = DAT_012587e4;
                  break;
                }
              }
            }
            goto joined_r0x0048ec01;
          }
          local_24 = local_24 + 1;
        } while (local_24 < *piVar2);
      }
      iVar8 = *(int *)(piVar6[1] + param_5 * 4);
      puVar10 = *(undefined4 **)(iVar8 + 0xa08);
      do {
        if (puVar10 == (undefined4 *)0x0) {
LAB_0048ecff:
          FUN_0048d4e0(piVar1);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar1);
        }
        if ((int *)*puVar10 == piVar1) {
          if (puVar10 != (undefined4 *)0x0) {
            if (*(char *)(iVar8 + 0xa14) == '\0') {
              iVar5 = puVar10[1];
              iVar9 = puVar10[2];
              if (iVar5 != 0) {
                *(int *)(iVar5 + 8) = iVar9;
              }
              if (iVar9 != 0) {
                *(int *)(iVar9 + 4) = iVar5;
              }
              if (puVar10 == *(undefined4 **)(iVar8 + 0xa08)) {
                *(int *)(iVar8 + 0xa08) = iVar9;
              }
              if (puVar10 == *(undefined4 **)(iVar8 + 0xa0c)) {
                *(int *)(iVar8 + 0xa0c) = iVar5;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(puVar10);
            }
            *(undefined1 *)(puVar10 + 3) = 1;
          }
          goto LAB_0048ecff;
        }
        puVar10 = (undefined4 *)puVar10[2];
      } while( true );
    }
    if (1 < piVar1[3]) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      FUN_0048e3f0(piVar1,&param_4);
      FUN_0048dff0();
    }
    iVar8 = FUN_0048dd70(piVar1);
  }
  local_30 = (undefined4 *)0x0;
  if (param_3 == 0) goto LAB_0048efc4;
  if (iVar5 < 1) {
LAB_0048ef37:
    local_30 = (undefined4 *)FUN_00aae9af(100);
    if (local_30 == (undefined4 *)0x0) {
      local_30 = (undefined4 *)0x0;
    }
    else {
      *local_30 = COwnerArea::vftable;
      local_30[1] = 0;
      local_30[2] = 0;
      local_30[3] = 0;
      *(undefined1 *)(local_30 + 4) = 0;
      local_30[5] = 0;
      local_30[6] = 0;
      local_30[7] = 0;
      *(undefined1 *)(local_30 + 8) = 0;
      *(undefined1 *)(local_30 + 9) = 0;
      local_30[10] = 0;
      local_30[0xb] = 0;
      local_30[0xc] = 0;
      *(undefined1 *)(local_30 + 0xd) = 0;
      *(undefined1 *)(local_30 + 0xe) = 0;
      local_30[0x10] = 0;
      local_30[0x11] = 0;
      local_30[0x12] = 0;
      *(undefined1 *)(local_30 + 0x13) = 0;
      local_30[0x14] = 0;
      local_30[0x15] = 0;
      local_30[0x16] = 0;
      *(undefined1 *)(local_30 + 0x17) = 0;
      local_30[0xf] = 0;
      local_30[0x18] = DAT_01258700;
      DAT_01258700 = DAT_01258700 + 1;
    }
  }
  else {
    local_24 = 0;
    puVar10 = (undefined4 *)0x0;
    local_1c = iVar5;
    do {
      iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 200) + 4 + local_24) * 4);
      if ((*(int *)(iVar8 + 0x110) == 0) ||
         (iVar9 = *(int *)(*(int *)(iVar8 + 0x110) + 0x10),
         (int)(*(int *)(iVar9 + 0x38) - *(int *)(iVar9 + 0x34) & 0xfffffff8U) < 1)) {
        iVar9 = iVar8 + 0x130;
      }
      else {
        iVar9 = *(int *)(iVar9 + 0x34);
      }
      local_30 = puVar10;
      if ((((*(int *)(iVar9 + 4) == param_3) &&
           (puVar4 = *(undefined4 **)(iVar8 + 0xe8), puVar4 != (undefined4 *)0x0)) &&
          (local_30 = puVar4, puVar10 != (undefined4 *)0x0)) && (puVar10 != puVar4)) {
        puVar7 = puVar4;
        if ((int)puVar10[3] < (int)puVar4[3]) {
          puVar7 = puVar10;
          puVar10 = puVar4;
        }
        FUN_0048e960(puVar10,puVar7);
        piVar1 = (int *)puVar10[5];
joined_r0x0048edf3:
        if (piVar1 != (int *)0x0) {
          piVar2 = (int *)*piVar1;
          piVar1 = (int *)piVar1[2];
          iVar8 = *piVar2;
          puVar4 = *(undefined4 **)(iVar8 + 0x14);
          if (puVar4 != (undefined4 *)0x0) {
            do {
              if (*(undefined4 **)*puVar4 == puVar7) break;
              puVar4 = (undefined4 *)puVar4[2];
            } while (puVar4 != (undefined4 *)0x0);
            if (puVar4 != (undefined4 *)0x0) {
              if (*(char *)(iVar8 + 0x20) == '\0') {
                iVar5 = puVar4[1];
                iVar9 = puVar4[2];
                if (iVar5 != 0) {
                  *(int *)(iVar5 + 8) = iVar9;
                }
                if (iVar9 != 0) {
                  *(int *)(iVar9 + 4) = iVar5;
                }
                if (puVar4 == *(undefined4 **)(iVar8 + 0x14)) {
                  *(int *)(iVar8 + 0x14) = iVar9;
                }
                if (puVar4 == *(undefined4 **)(iVar8 + 0x18)) {
                  *(int *)(iVar8 + 0x18) = iVar5;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(puVar4);
              }
              *(undefined1 *)(puVar4 + 3) = 1;
            }
          }
          if ((undefined4 *)*piVar2 == puVar7) {
            for (puVar4 = (undefined4 *)puVar10[5]; puVar4 != (undefined4 *)0x0;
                puVar4 = (undefined4 *)puVar4[2]) {
              if ((int *)*puVar4 == piVar2) {
                if (puVar4 != (undefined4 *)0x0) {
                  if (*(char *)(puVar10 + 8) == '\0') {
                    iVar8 = puVar4[1];
                    iVar5 = puVar4[2];
                    if (iVar8 != 0) {
                      *(int *)(iVar8 + 8) = iVar5;
                    }
                    if (iVar5 != 0) {
                      *(int *)(iVar5 + 4) = iVar8;
                    }
                    if (puVar4 == (undefined4 *)puVar10[5]) {
                      puVar10[5] = iVar5;
                    }
                    if (puVar4 == (undefined4 *)puVar10[6]) {
                      puVar10[6] = iVar8;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(puVar4);
                  }
                  *(undefined1 *)(puVar4 + 3) = 1;
                }
                break;
              }
            }
          }
          goto joined_r0x0048edf3;
        }
        for (piVar1 = *(int **)(*(int *)(DAT_012587e4[1] + param_3 * 4) + 0xa08);
            (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != puVar7)); piVar1 = (int *)piVar1[2])
        {
        }
        FUN_005f2ae0(piVar1);
        local_30 = puVar10;
        if (puVar7 != (undefined4 *)0x0) {
          FUN_0048d4e0(puVar7);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar7);
        }
      }
      local_24 = local_24 + 0x24;
      local_1c = local_1c + -1;
      puVar10 = local_30;
    } while (local_1c != 0);
    if (local_30 == (undefined4 *)0x0) goto LAB_0048ef37;
  }
  (**(code **)*local_30)(param_1);
  iVar8 = FUN_0048dff0();
LAB_0048efc4:
  *(undefined4 **)(param_1 + 0xe8) = local_30;
  if (local_30 != (undefined4 *)0x0) {
    if (0 < iVar5) {
      iVar8 = 0;
      do {
        puVar10 = *(undefined4 **)
                   (*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                            *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 200) + 4 + iVar8) * 4) +
                   0xe8);
        if ((puVar10 != (undefined4 *)0x0) && (puVar10 != local_30)) {
          FUN_0048e260(1);
          FUN_0048e260(1);
        }
        iVar8 = iVar8 + 0x24;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_30[3] == 1) {
      FUN_0050e3f0(local_30);
    }
    FUN_0048dff0();
    iVar8 = FUN_0048dd70(local_30);
  }
  ExceptionList = local_14;
  return iVar8;
}

