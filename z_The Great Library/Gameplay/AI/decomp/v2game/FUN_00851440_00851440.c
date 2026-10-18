// FUN_00851440 @ 00851440 body=[[00851440, 00851687] [0085168b, 008516a8] [008516ac, 00851935] [0085193f, 0085196c] [0085197e, 00851a8a] [00851a8e, 00851aa7] [00851aab, 00851ab8] [00851abc, 00851acf]]


void FUN_00851440(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int local_7c;
  int *local_78;
  int local_74;
  float local_70;
  int local_6c;
  int *local_68 [2];
  int *local_60;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  int *local_28;
  int *local_24;
  int local_20;
  undefined1 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b4fbd0;
  local_14 = ExceptionList;
  piVar9 = (int *)0x0;
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_30 = 0;
  local_c = 0;
  local_60 = *(int **)(param_1 + 0x34);
  ExceptionList = &local_14;
  uVar2 = FUN_005db9e0();
  FUN_0084e9f0(param_1,&local_38,uVar2);
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  piVar3 = (int *)0x0;
  local_58 = (int *)0x0;
  local_54 = (int *)0x0;
  local_50 = (int *)0x0;
  local_c._0_1_ = 2;
  if (0 < (int)((int)local_34 - (int)local_38 & 0xfffffffcU)) {
    local_68[0] = local_38;
    do {
      if ((local_68[0] < local_38) || (local_34 <= local_68[0])) break;
      iVar11 = *local_68[0];
      piVar4 = *(int **)(param_1 + 0x214);
      local_68[0] = local_68[0] + 1;
      do {
        local_7c = iVar11;
        if (piVar4 == (int *)0x0) {
          if ((&local_7c < piVar3) && (piVar9 <= &local_7c)) {
            iVar11 = (int)&local_7c - (int)piVar9;
            if (piVar3 == local_50) {
              FUN_007b94a0();
              piVar3 = local_54;
              piVar9 = local_58;
            }
            piVar4 = (int *)0x0;
            if (piVar3 != (int *)0x0) {
              *piVar3 = piVar9[iVar11 >> 2];
              piVar4 = local_54;
              piVar9 = local_58;
            }
            piVar3 = piVar4 + 1;
            local_54 = piVar3;
          }
          else {
            if (piVar3 == local_50) {
              FUN_007b94a0();
              piVar3 = local_54;
              piVar9 = local_58;
            }
            piVar4 = (int *)0x0;
            if (piVar3 != (int *)0x0) {
              *piVar3 = iVar11;
              piVar4 = local_54;
              piVar9 = local_58;
            }
            piVar3 = piVar4 + 1;
            local_54 = piVar3;
          }
          break;
        }
        iVar6 = *piVar4;
        piVar4 = (int *)piVar4[2];
      } while (*(int *)(iVar6 + 0xdc) != iVar11);
    } while( true );
  }
  piVar4 = *(int **)(param_1 + 0x214);
  piVar8 = local_48;
  piVar1 = local_44;
  piVar10 = local_34;
joined_r0x008515b4:
  local_48 = piVar8;
  if (piVar4 != (int *)0x0) {
    iVar11 = *(int *)(*piVar4 + 0xdc);
    piVar4 = (int *)piVar4[2];
    for (piVar5 = local_38; piVar5 != piVar10; piVar5 = piVar5 + 1) {
      if (*piVar5 == iVar11) {
        piVar3 = local_54;
        piVar9 = local_58;
        if (piVar5 != piVar10) goto joined_r0x008515b4;
        break;
      }
    }
    local_7c = iVar11;
    if ((&local_7c < local_44) && (piVar8 <= &local_7c)) {
      if (local_44 == local_40) {
        local_44 = piVar1;
        FUN_007b94a0();
        piVar10 = local_34;
      }
      if (local_44 != (int *)0x0) {
        *local_44 = local_48[(int)&local_7c - (int)piVar8 >> 2];
      }
    }
    else {
      if (local_44 == local_40) {
        local_44 = piVar1;
        FUN_007b94a0();
        piVar10 = local_34;
      }
      if (local_44 != (int *)0x0) {
        *local_44 = iVar11;
      }
    }
    local_44 = local_44 + 1;
    piVar3 = local_54;
    piVar9 = local_58;
    piVar8 = local_48;
    piVar1 = local_44;
    goto joined_r0x008515b4;
  }
  iVar11 = (int)local_44 - (int)piVar8 >> 2;
  if ((iVar11 == 0) && (((int)piVar3 - (int)piVar9 & 0xfffffffcU) == 0)) {
    if (piVar9 != (int *)0x0) {
      local_44 = piVar1;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar9);
    }
    local_58 = (int *)0x0;
    local_54 = (int *)0x0;
    local_50 = (int *)0x0;
    local_44 = piVar1;
    if (piVar8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar8);
    }
  }
  else {
    local_44 = piVar1;
    if (0 < iVar11) {
LAB_008516cd:
      if ((local_48 <= piVar8) && (piVar8 < local_44)) {
        local_60 = piVar8 + 1;
        local_74 = *piVar8;
        local_28 = (int *)0x0;
        local_24 = (int *)0x0;
        local_20 = 0;
        local_1c = 0;
        local_c = CONCAT31(local_c._1_3_,3);
        piVar4 = *(int **)(param_1 + 0x214);
        piVar8 = local_28;
joined_r0x00851717:
        do {
          local_28 = piVar8;
          if (piVar4 == (int *)0x0) goto LAB_008518c2;
          local_78 = (int *)piVar4[2];
          local_6c = *piVar4;
          piVar4 = local_78;
          piVar8 = local_28;
          if (*(int *)(local_6c + 0xdc) == local_74) {
            local_7c = 0;
            piVar4 = piVar9;
            local_70 = 100000.0;
            while ((piVar1 = local_24, piVar4 <= piVar9 && (piVar9 < piVar3))) {
              iVar11 = *piVar9;
              piVar9 = piVar9 + 1;
              FUN_004a0e80(DAT_0125870c,local_68);
              piVar3 = local_54;
              piVar4 = local_58;
              if ((float)(int)local_68[0] / 1000.0 < local_70) {
                local_7c = iVar11;
                local_70 = (float)(int)local_68[0] / 1000.0;
              }
            }
            piVar9 = piVar4;
            if (local_7c < 1) {
              local_24 = (int *)FUN_00aae9af(0x10);
              if (local_24 == (int *)0x0) {
                local_24 = (int *)0x0;
              }
              else {
                *local_24 = local_6c;
                local_24[1] = (int)piVar1;
                local_24[2] = 0;
                *(undefined1 *)(local_24 + 3) = 0;
              }
              iVar11 = local_20 + 1;
              bVar12 = local_20 != 0;
              piVar4 = local_78;
              piVar3 = local_54;
              piVar9 = local_58;
              piVar8 = local_24;
              local_20 = iVar11;
              if (bVar12) {
                piVar1[2] = (int)local_24;
                piVar8 = local_28;
              }
              goto joined_r0x00851717;
            }
            for (; (piVar9 != piVar3 && (*piVar9 != local_7c)); piVar9 = piVar9 + 1) {
            }
            if (((((int)piVar3 - (int)piVar4 & 0xfffffffcU) != 0) && (piVar4 <= piVar9)) &&
               (piVar9 < piVar3)) {
              piVar1 = piVar3 + -1;
              if (piVar9 == piVar1) {
                if (piVar4 != piVar3) {
                  *(int *)(local_6c + 0xdc) = local_7c;
                  piVar4 = local_78;
                  piVar3 = piVar1;
                  piVar9 = local_58;
                  piVar8 = local_28;
                  local_54 = piVar1;
                  goto joined_r0x00851717;
                }
              }
              else {
                FID_conflict__memcpy(piVar9,piVar9 + 1,((int)piVar3 - (int)(piVar9 + 1) >> 2) * 4);
                if ((((int)local_54 - (int)local_58 & 0xfffffffcU) != 0) && (local_58 != local_54))
                {
                  local_54 = local_54 + -1;
                }
              }
            }
            *(int *)(local_6c + 0xdc) = local_7c;
            piVar4 = local_78;
            piVar3 = local_54;
            piVar9 = local_58;
            piVar8 = local_28;
          }
        } while( true );
      }
    }
    piVar4 = piVar9;
    if (0 < (int)((int)piVar3 - (int)piVar9 & 0xfffffffcU)) {
      while ((piVar4 <= piVar9 && (piVar9 < piVar3))) {
        iVar11 = *piVar9;
        local_68[0] = piVar9 + 1;
        iVar6 = FUN_00aae9af(0xfc);
        if (iVar6 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_00827c00(iVar11);
        }
        (**(code **)(*piVar3 + 0xbc))(param_1);
        (**(code **)(*piVar3 + 0xcc))();
        iVar11 = *(int *)(param_1 + 0x218);
        puVar7 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = piVar3;
          puVar7[1] = iVar11;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar6 = *(int *)(param_1 + 0x21c);
        *(undefined4 **)(param_1 + 0x218) = puVar7;
        *(int *)(param_1 + 0x21c) = iVar6 + 1;
        piVar3 = local_54;
        piVar9 = local_68[0];
        piVar4 = local_58;
        if (iVar6 == 0) {
          *(undefined4 **)(param_1 + 0x214) = puVar7;
        }
        else {
          *(undefined4 **)(iVar11 + 8) = puVar7;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x1bd) = 0;
    if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar4);
    }
    local_58 = (int *)0x0;
    local_54 = (int *)0x0;
    local_50 = (int *)0x0;
    if (local_48 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
  }
  local_48 = (int *)0x0;
  if (local_38 == (int *)0x0) {
    ExceptionList = local_14;
    return;
  }
  local_50 = (int *)0x0;
  local_54 = (int *)0x0;
  local_58 = (int *)0x0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38);
LAB_008518c2:
  local_78 = (int *)0x0;
  piVar8 = local_60;
  piVar4 = local_28;
  while (local_60 = piVar8, piVar4 != (int *)0x0) {
    piVar9 = (int *)*piVar4;
    piVar4 = (int *)piVar4[2];
    for (piVar3 = *(int **)(param_1 + 0x214); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if ((int *)*piVar3 == piVar9) {
        if (piVar3 != (int *)0x0) {
          if (*(char *)(param_1 + 0x220) == '\0') {
            iVar11 = piVar3[1];
            iVar6 = piVar3[2];
            if (iVar11 != 0) {
              *(int *)(iVar11 + 8) = iVar6;
            }
            if (iVar6 != 0) {
              *(int *)(iVar6 + 4) = iVar11;
            }
            if (piVar3 == *(int **)(param_1 + 0x214)) {
              *(int *)(param_1 + 0x214) = iVar6;
            }
            if (piVar3 == *(int **)(param_1 + 0x218)) {
              *(int *)(param_1 + 0x218) = iVar11;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar3);
          }
          *(undefined1 *)(piVar3 + 3) = 1;
        }
        break;
      }
    }
    (**(code **)(*piVar9 + 0xd4))();
    piVar3 = local_54;
    piVar9 = local_58;
    piVar8 = local_60;
  }
  local_c._1_3_ = (undefined3)((uint)local_c >> 8);
  local_c._0_1_ = 2;
  if (local_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28);
  }
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  goto LAB_008516cd;
}

