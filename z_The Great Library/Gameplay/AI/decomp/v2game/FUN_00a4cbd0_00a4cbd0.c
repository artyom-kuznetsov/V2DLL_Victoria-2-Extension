// FUN_00a4cbd0 @ 00a4cbd0 body=[[00a4cbd0, 00a4ce18] [00a4ce1c, 00a4d02a] [00a4d030, 00a4d0a9] [00a4d0ad, 00a4d10d] [00a4d111, 00a4d264] [00a4d270, 00a4d3e2] [00a4d3e8, 00a4d444]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a4cbd0(int param_1,int *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  byte ****ppppbVar10;
  int *piVar11;
  int *piVar12;
  int in_ECX;
  uint uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  bool bVar16;
  undefined1 local_110 [72];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  byte ***local_58 [4];
  uint local_48;
  uint local_44;
  uint local_3c;
  uint local_38;
  char local_31;
  uint local_30;
  uint *local_2c;
  uint local_28;
  undefined4 *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00b524f0;
  local_1c = ExceptionList;
  iVar3 = *(int *)(in_ECX + 0x44);
  local_28 = 0xffffffff;
  ExceptionList = &local_1c;
  puVar4 = &stack0xfffffffc;
  if ((*(int *)(iVar3 + 0x1c) == 0) ||
     (ExceptionList = &local_1c,
     iVar5 = (**(code **)(**(int **)(iVar3 + 0x1c) + 0x24))(*(int **)(iVar3 + 0x1c)),
     puVar4 = puStack_20, iVar5 == 0)) {
    puStack_20 = puVar4;
    (**(code **)(*param_2 + 0xb0))(param_2,0x100,in_ECX + 0x50);
    local_2c = (uint *)0x0;
    if (*(int *)(iVar3 + 0x14) != 0) {
      local_30 = 0;
      do {
        piVar11 = (int *)(local_30 + 0x44 + *(int *)(iVar3 + 0xc));
        local_31 = '\0';
        local_28 = 0;
        if (*piVar11 != 0) {
          pcVar15 = (char *)*piVar11;
          local_48 = 0;
          local_58[0] = (byte ***)((uint)local_58[0] & 0xffffff00);
          local_44 = 0xf;
          pcVar7 = pcVar15;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar15,(int)pcVar7 - (int)(pcVar15 + 1));
          local_14 = 1;
          uVar9 = FUN_00a4c270(local_74,local_58);
          local_14 = CONCAT31(local_14._1_3_,2);
          FUN_00408ed0(uVar9,0,0xffffffff);
          if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_74[0]);
          }
          ppppbVar10 = (byte ****)local_58[0];
          if (local_44 < 0x10) {
            ppppbVar10 = local_58;
          }
          pcVar15 = "text.tga";
          do {
            bVar2 = *(byte *)ppppbVar10;
            bVar16 = bVar2 < (byte)*pcVar15;
            if (bVar2 != *pcVar15) {
LAB_00a4d0e0:
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00a4d0e5;
            }
            if (bVar2 == 0) break;
            bVar2 = *(byte *)((int)ppppbVar10 + 1);
            bVar16 = bVar2 < (byte)pcVar15[1];
            if (bVar2 != pcVar15[1]) goto LAB_00a4d0e0;
            ppppbVar10 = (byte ****)((int)ppppbVar10 + 2);
            pcVar15 = pcVar15 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_00a4d0e5:
          if (iVar5 == 0) {
            local_28 = *(uint *)(param_1 + 0xb0);
            local_31 = '\x01';
          }
          local_14 = 0xffffffff;
          if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_58[0]);
          }
          local_44 = 0xf;
          local_48 = 0;
          local_58[0] = (byte ***)((uint)local_58[0] & 0xffffff00);
        }
        (**(code **)(*param_2 + 0xc4))(param_2,*(int *)(iVar3 + 0xc) + local_30);
        local_24 = *(undefined4 **)(param_1 + 0xb8);
        piVar11 = (int *)FUN_00a45090(param_1 + 0xdc);
        if (((*piVar11 == 0) || (*(int *)(local_24[1] + -4 + *piVar11 * 4) == 0)) ||
           (local_31 != '\0')) {
          if (local_28 == 0) {
            if (*(int *)(*(int *)(param_3 + 0xc) + 0x44) == 0) {
              (**(code **)(*param_2 + 0x104))(param_2,0,0);
            }
            else {
              pcVar15 = *(char **)(*(int *)(param_3 + 0xc) + 0x44);
              local_60 = 0xf;
              local_64 = 0;
              local_74[0] = local_74[0] & 0xffffff00;
              pcVar7 = pcVar15;
              do {
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              FUN_00409350(pcVar15,(int)pcVar7 - (int)(pcVar15 + 1));
              local_14 = 3;
              local_24 = (undefined4 *)(*param_2 + 0x104);
              uVar9 = FUN_009bcfc0(local_74);
              (*(code *)*local_24)(param_2,0,uVar9);
              local_14 = 0xffffffff;
              if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_74[0]);
              }
            }
          }
          else {
            (**(code **)(*param_2 + 0x104))(param_2,0,local_28);
          }
          (**(code **)(**(int **)(iVar3 + 8) + 0xc))(*(int **)(iVar3 + 8),local_2c);
        }
        else {
          local_24 = *(undefined4 **)(param_1 + 0xb8);
          piVar12 = (int *)FUN_00a45090(param_1 + 0xdc);
          piVar11 = (int *)0x0;
          if (*piVar12 != 0) {
            piVar11 = *(int **)(*(int *)((int)local_24 + 4) + -4 + *piVar12 * 4);
          }
          local_38 = (**(code **)(*piVar11 + 0x24))(piVar11,0,"LightDirection");
          if (local_38 != 0) {
            local_24 = *(undefined4 **)(param_1 + 0xb8);
            piVar12 = (int *)FUN_00a45090(param_1 + 0xdc);
            piVar11 = (int *)0x0;
            if (*piVar12 != 0) {
              piVar11 = *(int **)(*(int *)((int)local_24 + 4) + -4 + *piVar12 * 4);
            }
            local_84 = 0;
            local_80 = 0;
            local_7c = DAT_00f092fc;
            local_78 = DAT_00f092fc;
            (**(code **)(*piVar11 + 0x88))(piVar11,local_38,&local_84);
          }
          local_24 = *(undefined4 **)(param_1 + 0xb8);
          piVar12 = (int *)FUN_00a45090(param_1 + 0xdc);
          piVar11 = (int *)0x0;
          if (*piVar12 != 0) {
            piVar11 = *(int **)(*(int *)((int)local_24 + 4) + -4 + *piVar12 * 4);
          }
          (**(code **)(*piVar11 + 0xfc))(piVar11,&local_3c,0);
          local_28 = 0;
          if (local_3c != 0) {
            do {
              local_24 = *(undefined4 **)(param_1 + 0xb8);
              piVar12 = (int *)FUN_00a45090(param_1 + 0xdc);
              piVar11 = (int *)0x0;
              if (*piVar12 != 0) {
                piVar11 = *(int **)(*(int *)((int)local_24 + 4) + -4 + *piVar12 * 4);
              }
              (**(code **)(*piVar11 + 0x100))(piVar11,local_28);
              (**(code **)(**(int **)(iVar3 + 8) + 0xc))(*(int **)(iVar3 + 8),local_2c);
              local_24 = *(undefined4 **)(param_1 + 0xb8);
              piVar12 = (int *)FUN_00a45090(param_1 + 0xdc);
              piVar11 = (int *)0x0;
              if (*piVar12 != 0) {
                piVar11 = *(int **)(*(int *)((int)local_24 + 4) + -4 + *piVar12 * 4);
              }
              (**(code **)(*piVar11 + 0x108))(piVar11);
              local_28 = local_28 + 1;
            } while (local_28 < local_3c);
          }
          local_24 = *(undefined4 **)(param_1 + 0xb8);
          piVar11 = (int *)FUN_00a45090(param_1 + 0xdc);
          if (*piVar11 == 0) {
            (**(code **)(_DAT_00000000 + 0x10c))(0);
          }
          else {
            piVar11 = *(int **)(local_24[1] + -4 + *piVar11 * 4);
            (**(code **)(*piVar11 + 0x10c))(piVar11);
          }
        }
        local_30 = local_30 + 0x48;
        local_2c = (uint *)((int)local_2c + 1);
      } while (local_2c < *(uint **)(iVar3 + 0x14));
    }
  }
  else if (*(int *)(iVar3 + 0x38) == 0) {
    local_24 = (undefined4 *)(**(code **)(**(int **)(iVar3 + 0x1c) + 0x24))(*(int **)(iVar3 + 0x1c))
    ;
    puVar14 = (undefined4 *)0x0;
    if (local_24 != (undefined4 *)0x0) {
      local_30 = 0;
      do {
        D3DXMatrixMultiply(*(int *)(param_1 + 0x128) + local_30,*(int *)(iVar3 + 0x40) + local_30,
                           *(undefined4 *)(*(int *)(iVar3 + 0x3c) + (int)puVar14 * 4));
        local_30 = local_30 + 0x40;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while (puVar14 < local_24);
    }
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_c4 = 0;
    local_8c = DAT_00f092fc;
    local_a0 = DAT_00f092fc;
    local_b4 = DAT_00f092fc;
    local_c8 = DAT_00f092fc;
    (**(code **)(*param_2 + 0xb0))(param_2,0x100,&local_c8);
    (**(code **)(**(int **)(iVar3 + 0x28) + 0x3c))(*(int **)(iVar3 + 0x28),0x10,&local_2c);
    (**(code **)(**(int **)(iVar3 + 8) + 0x3c))(*(int **)(iVar3 + 8),0,&local_38);
    (**(code **)(**(int **)(iVar3 + 0x1c) + 0x60))
              (*(int **)(iVar3 + 0x1c),*(undefined4 *)(param_1 + 0x128),0,local_2c,local_38);
    (**(code **)(**(int **)(iVar3 + 0x28) + 0x40))(*(int **)(iVar3 + 0x28));
    (**(code **)(**(int **)(iVar3 + 8) + 0x40))(*(int **)(iVar3 + 8));
    local_28 = 0;
    if (*(int *)(iVar3 + 0x30) != 0) {
      iVar5 = 0;
      do {
        (**(code **)(*param_2 + 0xc4))
                  (param_2,*(int *)(iVar3 + 0xc) + *(int *)(iVar5 + *(int *)(iVar3 + 0x2c)) * 0x48);
        (**(code **)(*param_2 + 0x104))
                  (param_2,0,
                   *(undefined4 *)
                    (*(int *)(iVar3 + 0x24) + *(int *)(iVar5 + *(int *)(iVar3 + 0x2c)) * 4));
        (**(code **)(**(int **)(iVar3 + 8) + 0xc))
                  (*(int **)(iVar3 + 8),*(undefined4 *)(iVar5 + *(int *)(iVar3 + 0x2c)));
        local_28 = local_28 + 1;
        iVar5 = iVar5 + 0x14;
      } while (local_28 < *(uint *)(iVar3 + 0x30));
    }
  }
  else {
    puVar6 = (uint *)(**(code **)(**(int **)(iVar3 + 0x38) + 0xc))(*(int **)(iVar3 + 0x38));
    local_30 = 0;
    if (*(int *)(iVar3 + 0x30) != 0) {
      do {
        local_2c = puVar6;
        uVar13 = 0;
        if (*(int *)(iVar3 + 0x34) != 0) {
          do {
            if (*(int *)(local_2c[5] + uVar13 * 4) != -1) {
              (**(code **)(*param_2 + 0xe4))(param_2,0x97,uVar13);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(iVar3 + 0x34));
        }
        uVar13 = 0;
        if (*(int *)(iVar3 + 0x34) != 0) {
          do {
            iVar5 = *(int *)(local_2c[5] + uVar13 * 4);
            if (iVar5 != -1) {
              D3DXMatrixMultiply(local_110,iVar5 * 0x40 + *(int *)(iVar3 + 0x40),
                                 *(undefined4 *)(*(int *)(iVar3 + 0x3c) + iVar5 * 4));
              (**(code **)(*param_2 + 0xb0))(param_2,uVar13 + 0x100,local_110);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(iVar3 + 0x34));
        }
        if ((local_28 != *local_2c) || (local_28 == 0xffffffff)) {
          (**(code **)(*param_2 + 0xc4))(param_2,*(int *)(iVar3 + 0xc) + *local_2c * 0x48);
          if (*(int *)(*(int *)(param_3 + 0xc) + 0x44) != 0) {
            pcVar15 = *(char **)(*(int *)(param_3 + 0xc) + 0x44);
            local_48 = 0;
            local_58[0] = (byte ***)((uint)local_58[0] & 0xffffff00);
            local_44 = 0xf;
            pcVar7 = pcVar15;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            FUN_00409350(pcVar15,(int)pcVar7 - (int)(pcVar15 + 1));
            local_14 = 0;
            puVar14 = *(undefined4 **)(param_1 + 0xbc);
            local_24 = puVar14;
            local_3c = FUN_00462500(local_58);
            local_28 = puVar14[0x1adb2];
            if (local_3c == local_28) {
LAB_00a4cdce:
              local_38 = local_28;
              puVar6 = &local_38;
            }
            else {
              uVar13 = *(uint *)(local_3c + 0x1c);
              uVar8 = local_48;
              if (uVar13 <= local_48) {
                uVar8 = uVar13;
              }
              uVar8 = FUN_00414bd0(uVar8);
              if (uVar8 == 0) {
                if (local_48 < uVar13) {
                  uVar8 = 0xffffffff;
                }
                else {
                  uVar8 = (uint)(local_48 != uVar13);
                }
              }
              if ((int)uVar8 < 0) goto LAB_00a4cdce;
              puVar6 = &local_3c;
            }
            if (*puVar6 == local_24[0x1adb2]) {
              uVar9 = 0;
            }
            else {
              uVar9 = local_24[*(int *)(*puVar6 + 0x28) * 0xb + 1];
            }
            (**(code **)(*param_2 + 0x104))(param_2,0,uVar9);
            local_14 = 0xffffffff;
            if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_58[0]);
            }
          }
          local_28 = *local_2c;
        }
        uVar13 = local_30;
        (**(code **)(**(int **)(iVar3 + 8) + 0xc))(*(int **)(iVar3 + 8),local_30);
        local_2c = local_2c + 6;
        local_30 = uVar13 + 1;
        puVar6 = local_2c;
      } while (local_30 < *(uint *)(iVar3 + 0x30));
    }
  }
  (**(code **)(*param_2 + 0xe4))(param_2,0x97,0);
  ExceptionList = local_1c;
  return;
}

