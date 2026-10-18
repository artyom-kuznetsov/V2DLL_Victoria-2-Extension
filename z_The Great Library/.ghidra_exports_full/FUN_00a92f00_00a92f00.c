// FUN_00a92f00 @ 00a92f00 body=[[00a92f00, 00a92fcc] [00a92fd0, 00a93137] [00a93140, 00a93196] [00a931a0, 00a931dc] [00a931e0, 00a93214] [00a93220, 00a93287] [00a93290, 00a93379] [00a93380, 00a93489] [00a93490, 00a935a3]]


void FUN_00a92f00(int param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  undefined2 *puVar12;
  int iVar13;
  byte *pbVar14;
  uint *puVar15;
  undefined4 uVar16;
  char *pcVar17;
  uint auStack_d24 [256];
  uint auStack_924 [256];
  int local_524 [256];
  char local_124 [256];
  uint *local_24;
  char *local_20;
  uint *local_1c;
  uint *local_18;
  int *local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  if (3 < param_6) {
    pcVar17 = "        main sort initialise ...\n";
    iVar5 = FUN_00aaf1e2();
    _fprintf((FILE *)(iVar5 + 0x40),pcVar17);
  }
  iVar5 = 0x10000;
  do {
    iVar5 = iVar5 + -1;
    *(undefined4 *)(param_4 + 4 + iVar5 * 4) = 0;
  } while (-1 < iVar5);
  iVar5 = param_5 + -1;
  uVar10 = (uint)*param_2 << 8;
  if (2 < iVar5) {
    puVar12 = (undefined2 *)(param_3 + -4 + iVar5 * 2);
    do {
      puVar12[2] = 0;
      uVar10 = (uint)param_2[iVar5] << 8 | (int)uVar10 >> 8;
      piVar6 = (int *)(param_4 + uVar10 * 4);
      *piVar6 = *piVar6 + 1;
      puVar12[1] = 0;
      uVar10 = (uint)param_2[iVar5 + -1] << 8 | (int)uVar10 >> 8;
      piVar6 = (int *)(param_4 + uVar10 * 4);
      *piVar6 = *piVar6 + 1;
      *puVar12 = 0;
      uVar10 = (uint)param_2[iVar5 + -2] << 8 | (int)uVar10 >> 8;
      piVar6 = (int *)(param_4 + uVar10 * 4);
      *piVar6 = *piVar6 + 1;
      puVar12[-1] = 0;
      uVar10 = (uint)param_2[iVar5 + -3] << 8 | (int)uVar10 >> 8;
      piVar6 = (int *)(param_4 + uVar10 * 4);
      *piVar6 = *piVar6 + 1;
      iVar5 = iVar5 + -4;
      puVar12 = puVar12 + -4;
    } while (2 < iVar5);
  }
  for (; -1 < iVar5; iVar5 = iVar5 + -1) {
    *(undefined2 *)(param_3 + iVar5 * 2) = 0;
    uVar10 = (int)uVar10 >> 8 | (uint)param_2[iVar5] << 8;
    piVar6 = (int *)(param_4 + uVar10 * 4);
    *piVar6 = *piVar6 + 1;
  }
  iVar5 = 0;
  puVar12 = (undefined2 *)(param_3 + param_5 * 2);
  do {
    param_2[iVar5 + param_5] = param_2[iVar5];
    *puVar12 = 0;
    iVar5 = iVar5 + 1;
    puVar12 = puVar12 + 1;
  } while (iVar5 < 0x22);
  if (3 < param_6) {
    pcVar17 = "        bucket sorting ...\n";
    iVar5 = FUN_00aaf1e2();
    _fprintf((FILE *)(iVar5 + 0x40),pcVar17);
  }
  piVar6 = (int *)(param_4 + 8);
  iVar5 = 0x4000;
  do {
    piVar6[-1] = piVar6[-1] + piVar6[-2];
    *piVar6 = *piVar6 + piVar6[-1];
    piVar6[1] = piVar6[1] + *piVar6;
    piVar6[2] = piVar6[2] + piVar6[1];
    piVar6 = piVar6 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar10 = (uint)*param_2 << 8;
  iVar5 = param_5 + -1;
  if (2 < iVar5) {
    local_10 = (uint *)(-1 - (int)param_2);
    local_18 = (uint *)(-2 - (int)param_2);
    pbVar7 = param_2 + param_5 + -2;
    do {
      bVar9 = pbVar7[1];
      uVar10 = (uint)(ushort)((ushort)bVar9 << 8 | (ushort)(uVar10 >> 8));
      iVar13 = *(int *)(param_4 + uVar10 * 4) + -1;
      *(int *)(param_4 + uVar10 * 4) = iVar13;
      *(int *)(param_1 + iVar13 * 4) = iVar5;
      bVar1 = *pbVar7;
      piVar6 = (int *)(param_4 + (uint)CONCAT11(bVar1,bVar9) * 4);
      iVar13 = *piVar6 + -1;
      *piVar6 = iVar13;
      *(int *)(param_1 + iVar13 * 4) = iVar5 + -1;
      bVar9 = pbVar7[-1];
      piVar6 = (int *)(param_4 + (uint)CONCAT11(bVar9,bVar1) * 4);
      iVar13 = *piVar6 + -1;
      *piVar6 = iVar13;
      *(byte **)(param_1 + iVar13 * 4) = pbVar7 + (int)local_10;
      uVar10 = (uint)CONCAT11(pbVar7[-2],bVar9);
      piVar6 = (int *)(param_4 + uVar10 * 4);
      iVar13 = *piVar6 + -1;
      *piVar6 = iVar13;
      pbVar14 = (byte *)((int)local_18 + (int)pbVar7);
      iVar5 = iVar5 + -4;
      pbVar7 = pbVar7 + -4;
      *(byte **)(param_1 + iVar13 * 4) = pbVar14;
      local_8 = uVar10;
    } while (2 < iVar5);
  }
  for (; -1 < iVar5; iVar5 = iVar5 + -1) {
    uVar10 = (uint)(ushort)((ushort)param_2[iVar5] << 8 | (ushort)(uVar10 >> 8));
    piVar6 = (int *)(param_4 + uVar10 * 4);
    iVar13 = *piVar6 + -1;
    *piVar6 = iVar13;
    *(int *)(param_1 + iVar13 * 4) = iVar5;
  }
  iVar5 = 0;
  _memset(local_124,0,0x100);
  do {
    local_524[iVar5] = iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  puVar15 = (uint *)0x1;
  do {
    puVar15 = (uint *)((int)puVar15 * 3 + 1);
  } while ((int)puVar15 < 0x101);
  do {
    iVar5 = (int)puVar15 / 3;
    local_c = (uint *)iVar5;
    local_8 = iVar5;
    puVar15 = (uint *)iVar5;
    if (iVar5 < 0x100) {
      local_14 = local_524;
      do {
        local_10 = (uint *)local_524[iVar5];
        piVar6 = (int *)(local_524[iVar5] * 0x400 + param_4);
        iVar13 = piVar6[0x100];
        iVar2 = *piVar6;
        uVar10 = *(int *)(*local_14 * 0x400 + 0x400 + param_4) -
                 *(int *)(*local_14 * 0x400 + param_4);
        iVar8 = iVar5;
        local_8 = iVar5;
        piVar6 = local_14;
        while ((uint)(iVar13 - iVar2) < uVar10) {
          local_524[iVar8] = *piVar6;
          piVar6 = piVar6 + -(int)puVar15;
          iVar8 = iVar8 - (int)puVar15;
          if (iVar8 <= (int)puVar15 + -1) break;
          puVar15 = local_c;
          uVar10 = *(int *)(*piVar6 * 0x400 + 0x400 + param_4) - *(int *)(*piVar6 * 0x400 + param_4)
          ;
        }
        local_14 = local_14 + 1;
        iVar5 = local_8 + 1;
        local_524[iVar8] = (int)local_10;
        local_8 = iVar5;
      } while (iVar5 < 0x100);
    }
  } while (puVar15 != (uint *)0x1);
  local_14 = (int *)0x0;
  local_8 = 0;
  while( true ) {
    puVar15 = (uint *)local_524[local_8];
    local_c = puVar15;
    local_10 = (uint *)0x0;
    do {
      if (local_10 != puVar15) {
        local_1c = local_10 + (int)puVar15 * 0x40;
        uVar10 = *(uint *)(param_4 + (int)local_1c * 4);
        if ((uVar10 & 0x200000) == 0) {
          local_18 = (uint *)(uVar10 & 0xffdfffff);
          iVar5 = (*(uint *)(param_4 + 4 + (int)local_1c * 4) & 0xffdfffff) - 1;
          if ((int)local_18 < iVar5) {
            if (3 < param_6) {
              pcVar17 = "        qsort [0x%x, 0x%x]   done %d   this %d\n";
              iVar13 = FUN_00aaf1e2("        qsort [0x%x, 0x%x]   done %d   this %d\n",local_c,
                                    local_10,local_14,(iVar5 - (int)local_18) + 1);
              _fprintf((FILE *)(iVar13 + 0x40),pcVar17);
            }
            FUN_00a92b20(param_2,param_3,param_5,param_7);
            local_14 = (int *)((int)local_14 + 1 + (iVar5 - (int)local_18));
            if (*param_7 < 0) {
              return;
            }
          }
        }
        puVar15 = (uint *)(param_4 + (int)local_1c * 4);
        *puVar15 = *puVar15 | 0x200000;
        puVar15 = local_c;
      }
      local_10 = (uint *)((int)local_10 + 1);
    } while ((int)local_10 < 0x100);
    local_20 = local_124 + (int)puVar15;
    if (local_124[(int)puVar15] != '\0') {
      uVar16 = 0x3ee;
      goto LAB_00a93571;
    }
    puVar11 = (uint *)(param_4 + (int)puVar15 * 4);
    local_24 = puVar11;
    iVar5 = 0;
    do {
      *(uint *)((int)auStack_924 + iVar5) = *puVar11 & 0xffdfffff;
      *(uint *)((int)auStack_d24 + iVar5) = (puVar11[1] & 0xffdfffff) - 1;
      iVar5 = iVar5 + 4;
      puVar11 = puVar11 + 0x100;
    } while (iVar5 < 0x3fd);
    uVar10 = *(uint *)((int)puVar15 * 0x400 + param_4) & 0xffdfffff;
    local_18 = (uint *)((int)puVar15 * 0x400 + param_4);
    local_10 = auStack_924 + (int)puVar15;
    if ((int)uVar10 < (int)auStack_924[(int)puVar15]) {
      do {
        iVar5 = *(int *)(param_1 + uVar10 * 4) + -1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + param_5;
        }
        bVar9 = param_2[iVar5];
        if (local_124[bVar9] == '\0') {
          uVar3 = auStack_924[bVar9];
          *(int *)(param_1 + uVar3 * 4) = iVar5;
          auStack_924[bVar9] = uVar3 + 1;
          puVar15 = local_c;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)*local_10);
    }
    puVar15 = auStack_d24 + (int)puVar15;
    iVar5 = (local_18[0x100] & 0xffdfffff) - 1;
    local_1c = puVar15;
    if ((int)*puVar15 < iVar5) {
      do {
        iVar13 = *(int *)(param_1 + iVar5 * 4) + -1;
        if (iVar13 < 0) {
          iVar13 = iVar13 + param_5;
        }
        bVar9 = param_2[iVar13];
        if (local_124[bVar9] == '\0') {
          uVar10 = auStack_d24[bVar9];
          *(int *)(param_1 + uVar10 * 4) = iVar13;
          auStack_d24[bVar9] = uVar10 - 1;
          puVar15 = local_1c;
        }
        iVar5 = iVar5 + -1;
      } while ((int)*puVar15 < iVar5);
    }
    uVar10 = local_8;
    if ((*local_10 - 1 != *puVar15) && ((*local_10 != 0 || (*puVar15 != param_5 - 1U)))) break;
    iVar5 = 0x100;
    puVar15 = local_24;
    do {
      *puVar15 = *puVar15 | 0x200000;
      puVar15 = puVar15 + 0x100;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *local_20 = '\x01';
    if ((int)uVar10 < 0xff) {
      iVar5 = (local_18[0x100] & 0xffdfffff) - (*local_18 & 0xffdfffff);
      bVar9 = 0;
      if (0xfffe < iVar5) {
        bVar9 = 0;
        do {
          bVar9 = bVar9 + 1;
        } while (0xfffe < iVar5 >> (bVar9 & 0x1f));
      }
      local_20 = (char *)(iVar5 + -1);
      if (-1 < (int)local_20) {
        local_c = (uint *)(param_1 + (int)(local_20 + (*local_18 & 0xffdfffff)) * 4);
        pcVar17 = local_20;
        do {
          uVar10 = *local_c;
          uVar4 = (undefined2)((int)pcVar17 >> (bVar9 & 0x1f));
          *(undefined2 *)(param_3 + uVar10 * 2) = uVar4;
          if ((int)uVar10 < 0x22) {
            *(undefined2 *)(param_3 + (uVar10 + param_5) * 2) = uVar4;
          }
          local_c = local_c + -1;
          pcVar17 = pcVar17 + -1;
        } while (-1 < (int)pcVar17);
      }
      if (0xffff < (int)local_20 >> (bVar9 & 0x1f)) goto LAB_00a93598;
    }
    local_8 = local_8 + 1;
    if (0xff < (int)local_8) {
      if (3 < param_6) {
        pcVar17 = "        %d pointers, %d sorted, %d scanned\n";
        iVar5 = FUN_00aaf1e2("        %d pointers, %d sorted, %d scanned\n",param_5,local_14,
                             param_5 - (int)local_14);
        _fprintf((FILE *)(iVar5 + 0x40),pcVar17);
      }
      return;
    }
  }
  FUN_00a8bcb0();
LAB_00a93598:
  uVar16 = 0x3ea;
LAB_00a93571:
  pcVar17 = 
  "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
  ;
  iVar5 = FUN_00aaf1e2("\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
                       ,uVar16,"1.0.3, 15-Feb-2005");
  _fprintf((FILE *)(iVar5 + 0x40),pcVar17);
                    /* WARNING: Subroutine does not return */
  _exit(3);
}

