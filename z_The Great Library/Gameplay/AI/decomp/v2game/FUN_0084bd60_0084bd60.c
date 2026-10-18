// FUN_0084bd60 @ 0084bd60 body=[[0084bd60, 0084be8c] [0084be90, 0084bf58] [0084bf62, 0084c2a9] [0084c2b3, 0084c2d8] [0084c2e7, 0084c3ac] [0084c3b6, 0084c3c9] [0084c3d0, 0084c3d8] [0084c3e2, 0084c409] [0084c413, 0084c438] [0084c442, 0084c462]]


void FUN_0084bd60(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined4 uVar15;
  int *local_8c;
  int local_84;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  uint *local_5c;
  uint *local_58;
  int local_54;
  undefined1 local_50;
  undefined4 *local_4c;
  undefined4 local_44;
  int local_40;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int *local_2c;
  uint *local_28;
  int local_24;
  int *local_20;
  uint local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4ac33;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar9 = (undefined4 *)param_1[0x1c];
LAB_0084bd87:
  do {
    do {
      local_4c = puVar9;
      if ((local_4c < (undefined4 *)param_1[0x1c]) || ((undefined4 *)param_1[0x1d] <= local_4c)) {
        ExceptionList = local_10;
        return;
      }
      local_40 = local_4c[1];
      local_44 = *local_4c;
      puVar9 = local_4c + 2;
      iVar12 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
    } while ((local_40 == *(int *)(iVar12 + 0x20)) ||
            (((*(int *)(*(int *)(*(int *)(iVar12 + 0xbe8) + local_40 * 4) + 0x34) == 0 &&
              ((((char)local_44 != 'R' || ((char)((uint)local_44 >> 8) != 'E')) ||
               ((char)((uint)local_44 >> 0x10) != 'B')))) &&
             (((*(char *)(iVar12 + 0x1c) != 'R' || (*(char *)(iVar12 + 0x1d) != 'E')) ||
              (*(char *)(iVar12 + 0x1e) != 'B'))))));
    local_38 = *local_4c;
    local_24 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_4c[1] * 4);
    local_5c = (uint *)0x0;
    local_58 = (uint *)0x0;
    local_54 = 0;
    local_50 = 0;
    local_8 = 0;
    local_4c = puVar9;
    if (*(int *)(local_24 + 0xa10) == 0) {
      piVar5 = *(int **)(local_24 + 0x9d8);
      piVar6 = piVar5;
      do {
        iVar12 = local_24;
        puVar3 = local_5c;
        if ((piVar6 < piVar5) || (*(int **)(local_24 + 0x9dc) <= piVar6)) goto LAB_0084be90;
        iVar12 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4);
        piVar6 = piVar6 + 1;
      } while (((*(char *)(iVar12 + 0x130) == 'R') && (*(char *)(iVar12 + 0x131) == 'E')) &&
              (*(char *)(iVar12 + 0x132) == 'B'));
    }
    else {
      FUN_00549920();
LAB_0084bf34:
      if (local_54 != 0) {
        local_8c = (int *)0x0;
        local_84 = 0;
        local_8._0_1_ = 1;
        local_38 = param_1[0xd];
        uVar15 = local_44;
        puVar3 = local_5c;
        if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) +
                                      0xbe8) + local_40 * 4) + 0x34) != 0) {
          local_38 = param_1[0xd];
          local_28 = (uint *)param_1[0xe];
          piVar5 = (int *)FUN_0093d080(&local_28);
          uVar13 = *(uint *)(*piVar5 + 0x10);
          local_28 = (uint *)(*piVar5 + 0x10);
          puVar11 = local_28;
          piVar5 = (int *)0x0;
          piVar6 = local_8c;
          while ((local_8c = piVar6, uVar15 = local_44, puVar3 = local_5c, *puVar11 <= uVar13 &&
                 (uVar13 < puVar11[1]))) {
            piVar8 = (int *)(uVar13 + 0x28);
            uVar13 = uVar13 + 0x40;
            piVar6 = local_8c;
            if (*piVar8 != 0) {
              iVar12 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar8 * 4) + 0x188);
              local_20 = piVar5;
              piVar6 = (int *)FUN_00aae9af(0x10);
              if (piVar6 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              else {
                *piVar6 = iVar12;
                piVar6[1] = (int)piVar5;
                piVar6[2] = 0;
                *(undefined1 *)(piVar6 + 3) = 0;
              }
              iVar12 = local_84 + 1;
              bVar14 = local_84 != 0;
              puVar11 = local_28;
              piVar5 = piVar6;
              local_84 = iVar12;
              if (bVar14) {
                local_20[2] = (int)piVar6;
                piVar6 = local_8c;
              }
            }
          }
        }
joined_r0x0084c061:
        local_44 = uVar15;
        if (puVar3 != (uint *)0x0) {
          local_28 = (uint *)puVar3[2];
          uVar13 = *puVar3;
          local_1c = uVar13;
          puVar3 = local_28;
          if ((((((char)uVar15 != 'R') || ((char)((uint)uVar15 >> 8) != 'E')) ||
               (local_44._2_1_ = (char)((uint)uVar15 >> 0x10), local_44._2_1_ != 'B')) ||
              (local_38 = param_1[0xd], *(int *)(**(int **)(uVar13 + 4) + 300) == param_1[0xe])) &&
             (piVar5 = *(int **)(uVar13 + 4), piVar5 != (int *)0x0)) {
            local_38 = param_1[0xd];
            while( true ) {
              iVar12 = *piVar5;
              piVar5 = (int *)piVar5[2];
              if (*(int *)(iVar12 + 300) == param_1[0xe]) break;
              local_38 = param_1[0xd];
              iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
              if ((*(int *)(iVar12 + 300) != *(int *)(iVar10 + 0x20)) &&
                 (((*(int *)(*(int *)(*(int *)(iVar10 + 0xbe8) + *(int *)(iVar12 + 300) * 4) + 0x34)
                    != 0 || (((*(char *)(iVar12 + 0x128) == 'R' &&
                              (*(char *)(iVar12 + 0x129) == 'E')) &&
                             (*(char *)(iVar12 + 0x12a) == 'B')))) ||
                  (((*(char *)(iVar10 + 0x1c) == 'R' && (*(char *)(iVar10 + 0x1d) == 'E')) &&
                   (*(char *)(iVar10 + 0x1e) == 'B')))))) break;
              if (piVar5 == (int *)0x0) goto joined_r0x0084c061;
            }
            local_34 = *(undefined4 **)(iVar12 + 0x58);
            if (local_34 == (undefined4 *)0x0) goto joined_r0x0084c061;
            iVar12 = 0;
            local_6c = (int *)0x0;
            local_68 = 0;
            local_64 = 0;
            local_60 = 0;
            local_7c = 0;
            local_78 = 0;
            local_74 = 0;
            local_70 = 0;
            local_8._0_1_ = 3;
            FUN_00851130(param_1,uVar13,&local_7c,&local_6c,param_1[0xd],param_1[0xe]);
            uVar15 = **(undefined4 **)(uVar13 + 4);
            uVar7 = (**(code **)(*param_1 + 0xe8))(uVar15);
            local_30 = FUN_0084b840(uVar7,uVar15);
            piVar5 = local_6c;
            while (piVar5 != (int *)0x0) {
              piVar6 = (int *)*piVar5;
              piVar5 = (int *)piVar5[2];
              cVar4 = (**(code **)(*piVar6 + 0x38))();
              if (cVar4 != '\0') {
                iVar12 = iVar12 + piVar6[0x26];
              }
            }
            if (param_3 < 1) {
              piVar5 = (int *)param_1[0x85];
              uVar13 = local_1c;
              while (piVar5 != (int *)0x0) {
                piVar6 = (int *)*piVar5;
                iVar10 = piVar6[0x38];
                local_2c = (int *)piVar5[2];
                piVar5 = local_2c;
                if ((0 < iVar10) &&
                   (uVar1 = *(uint *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar10 * 4) + 0xe8),
                   uVar1 != 0)) {
                  if (uVar1 == uVar13) {
LAB_0084c225:
                    local_20 = (int *)iVar12;
                    puVar9 = (undefined4 *)(**(code **)(*piVar6 + 0x1a4))();
                    piVar5 = (int *)*puVar9;
                    iVar12 = 0;
                    while (piVar5 != (int *)0x0) {
                      piVar6 = (int *)*piVar5;
                      piVar5 = (int *)piVar5[2];
                      cVar4 = (**(code **)(*piVar6 + 0x38))();
                      if (cVar4 != '\0') {
                        iVar12 = iVar12 + piVar6[0x26];
                      }
                    }
                    iVar12 = (int)local_20 + iVar12;
                    piVar5 = local_2c;
                    uVar13 = local_1c;
                  }
                  else {
                    for (puVar9 = *(undefined4 **)(uVar1 + 0x14); puVar9 != (undefined4 *)0x0;
                        puVar9 = (undefined4 *)puVar9[2]) {
                      if (*(uint *)*puVar9 == uVar13) goto LAB_0084c225;
                    }
                  }
                }
              }
            }
            local_20 = *(int **)(local_1c + 0xc);
            if (10 < (int)local_20) {
              local_20 = (int *)0xa;
            }
            if (0 < *(int *)(*(int *)(**(int **)(local_1c + 4) + 0x188) + 0x84)) {
              local_20 = (int *)0x1;
            }
            if (iVar12 < 1) {
LAB_0084c2f1:
              if (*(uint *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_24 + 0xbe4) * 4
                                    ) + 0xe8) == local_1c) {
                local_20 = (int *)((int)local_20 + 0x32);
              }
              local_15 = '\0';
              piVar6 = local_8c;
              piVar5 = local_20;
joined_r0x0084c320:
              if (piVar6 != (int *)0x0) {
                iVar12 = *piVar6;
                piVar6 = (int *)piVar6[2];
                piVar8 = *(int **)(iVar12 + 0x48);
                do {
                  if ((piVar8 < *(int **)(iVar12 + 0x48)) || (*(int **)(iVar12 + 0x4c) <= piVar8)) {
                    if (local_15 != '\0') goto LAB_0084c353;
                    goto joined_r0x0084c320;
                  }
                  iVar10 = *piVar8;
                  piVar8 = piVar8 + 1;
                } while (*(uint *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar10 * 4) + 0xe8) !=
                         local_1c);
                local_15 = '\x01';
LAB_0084c353:
                piVar5 = (int *)((int)piVar5 + 0xfa);
                goto joined_r0x0084c320;
              }
              local_20 = piVar5;
              if (0 < (int)piVar5) {
                puVar9 = (undefined4 *)FUN_00aae9af(0x10);
                if (puVar9 == (undefined4 *)0x0) {
                  puVar9 = (undefined4 *)0x0;
                }
                else {
                  puVar9[1] = 0x18d;
                  *puVar9 = CProvinceValue::vftable;
                  puVar9[2] = local_34;
                  puVar9[3] = piVar5;
                }
                local_34 = puVar9;
                FUN_00853e20(param_2,&local_34);
              }
              if (local_7c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_7c);
              }
              local_7c = 0;
              local_78 = 0;
              local_74 = 0;
              if (local_6c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_6c);
              }
            }
            else {
              if (iVar12 < local_30) {
                if (0 < local_30) {
                  local_20 = local_20 + 0x19;
                }
                goto LAB_0084c2f1;
              }
              if (local_7c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_7c);
              }
              local_7c = 0;
              local_78 = 0;
              local_74 = 0;
              if (local_6c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_6c);
              }
            }
            local_74 = 0;
            local_78 = 0;
            local_7c = 0;
            local_64 = 0;
            local_68 = 0;
            local_6c = (int *)0x0;
            uVar15 = local_44;
            puVar3 = local_28;
          }
          goto joined_r0x0084c061;
        }
        local_28 = puVar3;
        if (local_8c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_8c);
        }
        local_8 = 0xffffffff;
        if (local_5c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c);
        }
        local_28 = (uint *)0x0;
        puVar9 = local_4c;
        goto LAB_0084bd87;
      }
    }
    local_8 = 0xffffffff;
    puVar9 = local_4c;
    if (local_5c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
  } while( true );
LAB_0084be90:
  local_5c = puVar3;
  puVar11 = local_58;
  if ((piVar5 < *(int **)(iVar12 + 0x9d8)) || (*(int **)(iVar12 + 0x9dc) <= piVar5))
  goto LAB_0084bf34;
  uVar13 = *(uint *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4) + 0xe8);
  piVar5 = piVar5 + 1;
  puVar3 = local_5c;
  puVar2 = local_5c;
  if (uVar13 != 0) {
    for (; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
      if (*puVar2 == uVar13) goto LAB_0084be90;
    }
    local_58 = (uint *)FUN_00aae9af(0x10);
    if (local_58 == (uint *)0x0) {
      local_58 = (uint *)0x0;
    }
    else {
      *local_58 = uVar13;
      local_58[1] = (uint)puVar11;
      local_58[2] = 0;
      *(undefined1 *)(local_58 + 3) = 0;
    }
    iVar10 = local_54 + 1;
    bVar14 = local_54 != 0;
    iVar12 = local_24;
    puVar3 = local_58;
    local_54 = iVar10;
    if (bVar14) {
      puVar11[2] = (uint)local_58;
      puVar3 = local_5c;
    }
  }
  goto LAB_0084be90;
}

