// FUN_007ded00 @ 007ded00 body=[[007ded00, 007deefb] [007def00, 007df11f]]


void FUN_007ded00(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_6c [64];
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  undefined1 local_8 [4];
  
  iVar2 = DAT_01258a74;
  local_18 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  local_18 = local_18 + 0x20bc;
  if (DAT_01267a34 == DAT_01267a38) {
    FUN_007df170();
    uVar3 = *(int *)(DAT_012588e8 + 0xae0) - *(int *)(DAT_012588e8 + 0xadc) >> 2;
    local_8[0] = 1;
    if ((uint)(DAT_01267974 - DAT_01267970) < uVar3) {
      FUN_006a17e0(&DAT_01267970,DAT_01267974,(DAT_01267970 - DAT_01267974) + uVar3,local_8);
    }
    else if (uVar3 < (uint)(DAT_01267974 - DAT_01267970)) {
      FUN_009d69b0(&DAT_01267970,uVar3 + DAT_01267970,DAT_01267974);
    }
  }
  (**(code **)(**(int **)(iVar2 + 100) + 0x114))(*(int **)(iVar2 + 100),0,6,2);
  (**(code **)(**(int **)(iVar2 + 100) + 0x114))(*(int **)(iVar2 + 100),0,5,2);
  (**(code **)(**(int **)(iVar2 + 100) + 0xe4))(*(int **)(iVar2 + 100),0x89,0);
  (**(code **)(**(int **)(iVar2 + 100) + 0xe4))(*(int **)(iVar2 + 100),0x1b,1);
  (**(code **)(**(int **)(iVar2 + 100) + 0xe4))(*(int **)(iVar2 + 100),0x13,5);
  (**(code **)(**(int **)(iVar2 + 100) + 0xe4))(*(int **)(iVar2 + 100),0x14,6);
  (**(code **)(**(int **)(iVar2 + 100) + 0xe4))(*(int **)(iVar2 + 100),0xe,0);
  (**(code **)(**(int **)(iVar2 + 100) + 0xe4))(*(int **)(iVar2 + 100),7,0);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,1,4);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,2,2);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,3,3);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),1,1,1);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,4,4);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,5,2);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,6,3);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),1,4,1);
  iVar8 = DAT_01267a38 - DAT_01267a34 >> 4;
  local_1c = 0;
  local_14 = 0;
  local_2c = iVar8;
  if (0 < iVar8) {
    local_28 = 0;
    do {
      iVar7 = local_28;
      iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xadc) + local_14 * 4);
      pcVar4 = (char *)(iVar6 + 0x1c);
      if ((*(char *)(DAT_01267970 + local_14) == '\0') && (DAT_013f08b6 == '\0')) {
        local_24 = *(undefined4 *)pcVar4;
        local_20 = *(int *)(DAT_012587e4 + 4);
        iVar1 = *(int *)(local_20 + *(int *)(iVar6 + 0x20) * 4);
        if ((((int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1) ||
            ((((*pcVar4 == 'R' && (*(char *)(iVar6 + 0x1d) == 'E')) &&
              (*(char *)(iVar6 + 0x1e) == 'B')) || (*(int *)(iVar6 + 0x20) == 0)))) &&
           (*(int *)(local_28 + DAT_01267a34) != *(int *)(local_28 + 4 + DAT_01267a34))) {
          local_10 = *(undefined4 *)pcVar4;
          iVar6 = *(int *)(local_20 + *(int *)(iVar6 + 0x20) * 4);
          if ((*(char *)(iVar6 + 0xcf5) == '\0') && (*(char *)(iVar6 + 0xcf4) == '\0'))
          goto LAB_007def9a;
        }
      }
      else {
LAB_007def9a:
        FUN_007dcf30(pcVar4);
      }
      local_c = (int *)(DAT_01267a34 + iVar7);
      if ((*(int *)(DAT_01267a34 + iVar7) != local_c[1]) &&
         (iVar6 = local_c[1] - *local_c >> 4, 0 < iVar6)) {
        iVar8 = 0;
        local_20 = iVar6;
        do {
          if (*(char *)(iVar8 + 4 + *local_c) == '\0') {
            iVar6 = *(int *)(local_18 + 0x15a0);
          }
          else {
            iVar6 = *(int *)(local_18 + 0x15a4);
          }
          if (iVar6 != local_1c) {
            uVar3 = *(uint *)(iVar6 + 0x49c);
            if ((uVar3 == 0xffffffff) || (9999 < uVar3)) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(uVar3 * 0x2c + 0x15c + iVar2);
            }
            (**(code **)(**(int **)(iVar2 + 100) + 0x104))(*(int **)(iVar2 + 100),0,uVar5);
            local_1c = iVar6;
          }
          D3DXMatrixTranslation
                    (local_6c,*(float *)(iVar8 + *local_c + 8) - param_1,0x3dcccccd,
                     *(float *)(iVar8 + 0xc + *local_c) - param_2);
          (**(code **)(**(int **)(iVar2 + 100) + 0xb0))(*(int **)(iVar2 + 100),0x100,local_6c);
          FUN_009f9d50();
          iVar8 = iVar8 + 0x10;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
        local_20 = 0;
        iVar7 = local_28;
        iVar8 = local_2c;
      }
      local_14 = local_14 + 1;
      local_28 = iVar7 + 0x10;
    } while (local_14 < iVar8);
  }
  DAT_013f08b6 = 0;
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,3,1);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,6,1);
  (**(code **)(**(int **)(iVar2 + 100) + 0x10c))(*(int **)(iVar2 + 100),0,4,4);
  return;
}

