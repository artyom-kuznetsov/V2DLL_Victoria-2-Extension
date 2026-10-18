// FUN_009da4b0 @ 009da4b0 body=[[009da4b0, 009da66a] [009da66e, 009da690] [009da694, 009da6b4] [009da6b8, 009da6d2] [009da6d6, 009da8a0] [009da8a4, 009da8c7] [009da8cb, 009da8e5] [009da8e9, 009da906] [009da90a, 009da931] [009da935, 009da950] [009da954, 009da966]]


void FUN_009da4b0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_9c;
  uint local_88;
  uint local_80;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  int local_2c;
  byte *local_28;
  byte *local_24;
  undefined4 local_20;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b6166e;
  local_10 = ExceptionList;
  local_28 = (byte *)0x0;
  local_24 = (byte *)0x0;
  local_20 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00992240(param_1,&local_28,param_2);
  iVar5 = ((int)local_24 - (int)local_28) / 0x1c;
  pbVar9 = local_28;
  if (0 < iVar5) {
    do {
      local_18[0] = iVar5;
      uVar3 = *(uint *)(pbVar9 + 0x14);
      pbVar4 = pbVar9;
      if (0xf < uVar3) {
        pbVar4 = *(byte **)pbVar9;
      }
      pbVar8 = &DAT_00df8140;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_009da553:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_009da558;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_009da553;
        pbVar4 = pbVar4 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_009da558:
      if (iVar5 != 0) {
        pbVar4 = pbVar9;
        if (0xf < uVar3) {
          pbVar4 = *(byte **)pbVar9;
        }
        pbVar8 = &DAT_00e3ba40;
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_009da590:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_009da595;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_009da590;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009da595:
        if (iVar5 != 0) {
          pbVar4 = pbVar9;
          if (0xf < uVar3) {
            pbVar4 = *(byte **)pbVar9;
          }
          pbVar8 = &DAT_00e3ba44;
          do {
            bVar1 = *pbVar4;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_009da5d0:
              iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_009da5d5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_009da5d0;
            pbVar4 = pbVar4 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009da5d5:
          if (iVar5 != 0) {
            local_50 = 0xf;
            local_54 = 0;
            local_64[0] = local_64[0] & 0xffffff00;
            FUN_00409350(&DAT_00dedc68,1);
            local_8._0_1_ = 1;
            local_34 = 0xf;
            local_38 = 0;
            local_48 = local_48 & 0xffffff00;
            pcVar6 = param_1;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            FUN_00409350(param_1,(int)pcVar6 - (int)(param_1 + 1));
            local_8._0_1_ = 2;
            FUN_00988f20(local_64);
            local_8._0_1_ = 3;
            FUN_00988f20(pbVar9);
            local_8._0_1_ = 4;
            iVar5 = FUN_009da400();
            *(int *)(local_2c + 0x10) = *(int *)(local_2c + 0x10) + iVar5;
            if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_80);
            }
            local_6c = 0xf;
            local_80 = local_80 & 0xffffff00;
            if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_9c);
            }
            local_88 = 0xf;
            local_9c = local_9c & 0xffffff00;
            if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_48);
            }
            local_8 = (uint)local_8._1_3_ << 8;
            local_34 = 0xf;
            local_38 = 0;
            local_48 = local_48 & 0xffffff00;
            if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_64[0]);
            }
          }
        }
      }
      local_18[0] = local_18[0] + -1;
      pbVar9 = pbVar9 + 0x1c;
      iVar5 = local_18[0];
    } while (local_18[0] != 0);
  }
  if ((char)param_3 != '\0') {
    FUN_004138b0(&local_28,local_18,local_28,local_24);
    FUN_00991f90(param_1,&local_28);
    iVar5 = ((int)local_24 - (int)local_28) / 0x1c;
    pbVar9 = local_28;
    if (0 < iVar5) {
      do {
        local_18[0] = iVar5;
        uVar3 = *(uint *)(pbVar9 + 0x14);
        pbVar4 = pbVar9;
        if (0xf < uVar3) {
          pbVar4 = *(byte **)pbVar9;
        }
        pbVar8 = &DAT_00df8140;
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_009da770:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_009da775;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_009da770;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009da775:
        if (iVar5 != 0) {
          pbVar4 = pbVar9;
          if (0xf < uVar3) {
            pbVar4 = *(byte **)pbVar9;
          }
          pbVar8 = &DAT_00e3ba40;
          do {
            bVar1 = *pbVar4;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_009da7b0:
              iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_009da7b5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_009da7b0;
            pbVar4 = pbVar4 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009da7b5:
          if (iVar5 != 0) {
            pbVar4 = pbVar9;
            if (0xf < uVar3) {
              pbVar4 = *(byte **)pbVar9;
            }
            pbVar8 = &DAT_00e3ba44;
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_009da7f0:
                iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_009da7f5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_009da7f0;
              pbVar4 = pbVar4 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_009da7f5:
            if (iVar5 != 0) {
              local_50 = 0xf;
              local_54 = 0;
              local_64[0] = local_64[0] & 0xffffff00;
              FUN_00409350(&DAT_00dedc68,1);
              local_8._0_1_ = 5;
              local_34 = 0xf;
              local_38 = 0;
              local_48 = local_48 & 0xffffff00;
              pcVar6 = param_1;
              do {
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              FUN_00409350(param_1,(int)pcVar6 - (int)(param_1 + 1));
              local_8._0_1_ = 6;
              FUN_00988f20(local_64);
              local_8._0_1_ = 7;
              puVar7 = (undefined4 *)FUN_00988f20(pbVar9);
              local_8._0_1_ = 8;
              if (0xf < (uint)puVar7[5]) {
                puVar7 = (undefined4 *)*puVar7;
              }
              FUN_009da4b0(puVar7,param_2,param_3);
              if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_9c);
              }
              local_88 = 0xf;
              local_9c = local_9c & 0xffffff00;
              if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_80);
              }
              local_6c = 0xf;
              local_80 = local_80 & 0xffffff00;
              if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_48);
              }
              local_8 = (uint)local_8._1_3_ << 8;
              local_34 = 0xf;
              local_38 = 0;
              local_48 = local_48 & 0xffffff00;
              if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_64[0]);
              }
            }
          }
        }
        local_18[0] = local_18[0] + -1;
        pbVar9 = pbVar9 + 0x1c;
        iVar5 = local_18[0];
      } while (local_18[0] != 0);
    }
  }
  pbVar9 = local_28;
  if (local_28 == (byte *)0x0) {
    ExceptionList = local_10;
    return;
  }
  while( true ) {
    if (pbVar9 == local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
    if (0xf < *(uint *)(pbVar9 + 0x14)) break;
    pbVar9[0x14] = 0xf;
    pbVar9[0x15] = 0;
    pbVar9[0x16] = 0;
    pbVar9[0x17] = 0;
    pbVar9[0x10] = 0;
    pbVar9[0x11] = 0;
    pbVar9[0x12] = 0;
    pbVar9[0x13] = 0;
    *pbVar9 = 0;
    pbVar9 = pbVar9 + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)pbVar9);
}

