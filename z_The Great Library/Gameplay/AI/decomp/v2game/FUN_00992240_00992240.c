// FUN_00992240 @ 00992240 body=[[00992240, 00992319] [00992320, 009923ab] [009923b0, 00992628] [0099262c, 00992705] [00992709, 0099273f]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00992240(byte *param_1,undefined4 *param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *******pppppppuVar11;
  int iVar12;
  undefined4 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  bool bVar17;
  int *local_118;
  int local_114;
  undefined4 *******local_110 [4];
  int local_100;
  uint local_fc;
  undefined4 *******local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58137;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004138b0(param_2,&local_118,*param_2,param_2[1]);
  FUN_00419660(0x400);
  piVar8 = (int *)((DAT_0131c8f0 - DAT_0131c8ec) / 0x38);
  local_114 = 0x7fffffff;
  if (0 < (int)piVar8) {
    pbVar15 = (byte *)(DAT_0131c8ec + 0x1c);
    local_118 = piVar8;
    do {
      pbVar14 = pbVar15;
      pbVar6 = param_1;
      if (0xf < *(uint *)(pbVar15 + 0x14)) {
        pbVar14 = *(byte **)pbVar15;
      }
      do {
        bVar2 = *pbVar14;
        bVar17 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_009922f5:
          iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_009922fa;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar14[1];
        bVar17 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_009922f5;
        pbVar14 = pbVar14 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_009922fa:
      if (iVar5 == 0) {
        pbVar14 = (byte *)*DAT_01258a68;
        iVar16 = 0;
        iVar5 = 0x7fffffff;
        if (pbVar14 != (byte *)0x0) {
          do {
            if (*(uint *)(pbVar15 + -8) < 0x10) {
              pbVar6 = pbVar15 + -0x1c;
            }
            else {
              pbVar6 = *(byte **)(pbVar15 + -0x1c);
            }
            do {
              bVar2 = *pbVar6;
              bVar17 = bVar2 < *pbVar14;
              if (bVar2 != *pbVar14) {
LAB_00992351:
                iVar7 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                goto LAB_00992356;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar6[1];
              bVar17 = bVar2 < pbVar14[1];
              if (bVar2 != pbVar14[1]) goto LAB_00992351;
              pbVar6 = pbVar6 + 2;
              pbVar14 = pbVar14 + 2;
            } while (bVar2 != 0);
            iVar7 = 0;
LAB_00992356:
            iVar5 = iVar16;
            if (iVar7 == 0) break;
            pbVar14 = (byte *)DAT_01258a68[iVar16 + 1];
            iVar16 = iVar16 + 1;
            iVar5 = 0x7fffffff;
          } while (pbVar14 != (byte *)0x0);
        }
        if (iVar5 < local_114) {
          local_114 = iVar5;
        }
      }
      pbVar15 = pbVar15 + 0x38;
      local_118 = (int *)((int)local_118 + -1);
    } while (local_118 != (int *)0x0);
    local_118 = (int *)0x0;
  }
  piVar8 = (int *)PHYSFS_enumerateFiles(param_1);
  iVar5 = *piVar8;
  local_118 = piVar8;
  do {
    if (iVar5 == 0) {
      PHYSFS_freeList(local_118);
      ExceptionList = local_14;
      return;
    }
    if (param_3 == (byte *)0x0) {
LAB_0099242b:
      pcVar10 = (char *)*piVar8;
      cVar4 = *pcVar10;
      pcVar9 = pcVar10;
      while (cVar4 != '\0') {
        if (cVar4 < '\0') {
          local_fc = 0xf;
          local_100 = 0;
          local_110[0] = (undefined4 *******)((uint)local_110[0] & 0xffffff00);
          FUN_00409350("virtualfilesystem.cpp",0x15);
          local_c = 3;
          uVar13 = FUN_004015b0(local_110,0x20f,0x1000);
          local_c._0_1_ = 4;
          FUN_00987d50(uVar13,"Invalid filename found: ",0x18,0);
          FUN_00418e30(uVar13,*piVar8);
          local_c = CONCAT31(local_c._1_3_,3);
          FUN_00987ac0(appuStack_60);
          appuStack_60[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_60);
          pppppppuVar11 = local_110[0];
          uVar3 = local_fc;
          goto joined_r0x009926fa;
        }
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar4 = *pcVar1;
      }
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = (undefined4 *******)((uint)local_f4[0] & 0xffffff00);
      local_c = 0;
      pbVar15 = param_1;
      do {
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar2 != 0);
      pcVar9 = pcVar10 + 1;
      do {
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\0');
      if ((pbVar15 + (int)(pcVar10 + ((1 - (int)pcVar9) - (int)(param_1 + 1))) != (byte *)0xf) &&
         (cVar4 = FUN_004094e0(pbVar15 + (int)(pcVar10 + ((1 - (int)pcVar9) - (int)(param_1 + 1))),1
                              ), cVar4 != '\0')) {
        local_e4 = 0;
        pppppppuVar11 = local_f4[0];
        if (local_e0 < 0x10) {
          pppppppuVar11 = local_f4;
        }
        *(undefined1 *)pppppppuVar11 = 0;
      }
      pbVar15 = param_1;
      do {
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar2 != 0);
      FUN_00448740(param_1,(int)pbVar15 - (int)(param_1 + 1));
      FUN_00448740(&DAT_00dedc68,1);
      pcVar10 = (char *)*piVar8;
      pcVar9 = pcVar10;
      do {
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      FUN_00448740(pcVar10,(int)pcVar9 - (int)(pcVar10 + 1));
      pppppppuVar11 = local_f4[0];
      if (local_e0 < 0x10) {
        pppppppuVar11 = local_f4;
      }
      iVar5 = PHYSFS_isDirectory(pppppppuVar11);
      pppppppuVar11 = local_f4[0];
      uVar3 = local_e0;
      if (iVar5 == 0) {
        if (local_114 == 0x7fffffff) {
          pcVar10 = (char *)*piVar8;
          local_110[0] = (undefined4 *******)((uint)local_110[0] & 0xffffff00);
          local_fc = 0xf;
          pcVar9 = pcVar10;
          do {
            cVar4 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
          local_100 = iVar5;
          FUN_00409350(pcVar10,(int)pcVar9 - (int)(pcVar10 + 1));
          local_c = CONCAT31(local_c._1_3_,1);
          FUN_00a840b0();
joined_r0x0099261d:
          pppppppuVar11 = local_f4[0];
          uVar3 = local_e0;
          if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_110[0]);
          }
        }
        else {
          if (local_e0 < 0x10) {
            pppppppuVar11 = local_f4;
          }
          iVar16 = PHYSFS_getRealDir(pppppppuVar11);
          iVar5 = local_114;
          pppppppuVar11 = local_f4[0];
          uVar3 = local_e0;
          if ((iVar16 != 0) && (iVar7 = 0, -1 < local_114)) {
LAB_009925b0:
            iVar12 = FUN_00aafe90(iVar16,DAT_01258a68[iVar7]);
            if (iVar12 == 0) break;
            pcVar10 = (char *)*piVar8;
            local_fc = 0xf;
            local_100 = 0;
            local_110[0] = (undefined4 *******)((uint)local_110[0] & 0xffffff00);
            pcVar9 = pcVar10;
            do {
              cVar4 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar4 != '\0');
            FUN_00409350(pcVar10,(int)pcVar9 - (int)(pcVar10 + 1));
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_00a840b0();
            goto joined_r0x0099261d;
          }
        }
      }
joined_r0x009926fa:
      local_c = 0xffffffff;
      if (0xf < uVar3) {
        local_c = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppppppuVar11);
      }
    }
    else {
      pcVar10 = (char *)*piVar8;
      pcVar9 = pcVar10;
      do {
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      pbVar15 = param_3;
      do {
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar2 != 0);
      if ((uint)((int)pbVar15 - (int)(param_3 + 1)) <= (uint)((int)pcVar9 - (int)(pcVar10 + 1))) {
        pbVar14 = (byte *)(pcVar10 +
                          (((int)pcVar9 - (int)(pcVar10 + 1)) - ((int)pbVar15 - (int)(param_3 + 1)))
                          );
        pbVar15 = param_3;
        do {
          bVar2 = *pbVar14;
          bVar17 = bVar2 < *pbVar15;
          if (bVar2 != *pbVar15) {
LAB_00992410:
            iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_00992415;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar14[1];
          bVar17 = bVar2 < pbVar15[1];
          if (bVar2 != pbVar15[1]) goto LAB_00992410;
          pbVar14 = pbVar14 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_00992415:
        if (iVar5 == 0) goto LAB_0099242b;
      }
    }
    piVar8 = piVar8 + 1;
    iVar5 = *piVar8;
  } while( true );
  iVar7 = iVar7 + 1;
  pppppppuVar11 = local_f4[0];
  uVar3 = local_e0;
  if (iVar5 < iVar7) goto joined_r0x009926fa;
  goto LAB_009925b0;
}

