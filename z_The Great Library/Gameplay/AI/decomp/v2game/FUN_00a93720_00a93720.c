// FUN_00a93720 @ 00a93720 body=[[00a93720, 00a93817] [00a93820, 00a93a8f]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00a93720(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  char *_Format;
  undefined4 uVar13;
  int local_1444 [516];
  uint local_c34 [516];
  int local_424 [260];
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if (0 < param_2) {
    iVar5 = 4 - (int)in_EDX;
    iVar7 = param_2;
    do {
      iVar2 = *in_EDX;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      *(int *)((int)local_c34 + iVar5 + (int)in_EDX) = iVar2 << 8;
      in_EDX = in_EDX + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  do {
    iVar5 = 0;
    local_424[0] = 0;
    local_c34[0] = 0;
    local_1444[0] = -2;
    local_8 = 1;
    uVar8 = param_2;
    if (0 < param_2) {
      piVar10 = local_1444;
      for (iVar7 = param_2; piVar10 = piVar10 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar10 = -1;
      }
      do {
        uVar9 = local_8;
        iVar5 = iVar5 + 1;
        local_424[iVar5] = local_8;
        local_c = uVar9;
        iVar7 = local_424[iVar5 >> 1];
        iVar2 = iVar5;
        if ((int)local_c34[uVar9] < (int)local_c34[iVar7]) {
          uVar9 = local_c34[uVar9];
          iVar4 = iVar5 >> 1;
          iVar6 = iVar5;
          do {
            iVar2 = iVar4;
            local_424[iVar6] = iVar7;
            iVar7 = local_424[iVar2 >> 1];
            iVar4 = iVar2 >> 1;
            iVar6 = iVar2;
          } while ((int)uVar9 < (int)local_c34[iVar7]);
        }
        local_424[iVar2] = local_c;
        local_8 = local_8 + 1;
      } while ((int)local_8 <= param_2);
      if (0x103 < iVar5) {
        uVar13 = 0x7d1;
        goto LAB_00a93a60;
      }
      while (1 < iVar5) {
        local_c = local_424[iVar5];
        iVar6 = iVar5 + -1;
        iVar2 = 2;
        local_10 = local_424[1];
        local_424[1] = local_c;
        bVar12 = SBORROW4(2,iVar6);
        iVar7 = 2 - iVar6;
        iVar4 = 1;
        if (1 < iVar6) {
          local_8 = local_c34[local_c];
          do {
            iVar3 = iVar2;
            if ((bVar12 != iVar7 < 0) &&
               ((int)local_c34[local_424[iVar2 + 1]] < (int)local_c34[local_424[iVar2]])) {
              iVar3 = iVar2 + 1;
            }
            if ((int)local_8 < (int)local_c34[local_424[iVar3]]) break;
            local_424[iVar4] = local_424[iVar3];
            iVar2 = iVar3 * 2;
            bVar12 = SBORROW4(iVar2,iVar6);
            iVar7 = iVar2 - iVar6;
            iVar4 = iVar3;
          } while (iVar2 <= iVar6);
        }
        local_424[iVar4] = local_c;
        local_14 = local_424[iVar6];
        iVar5 = iVar5 + -2;
        iVar2 = 2;
        local_c = local_424[1];
        local_424[1] = local_14;
        bVar12 = SBORROW4(2,iVar5);
        iVar7 = 2 - iVar5;
        iVar4 = 1;
        if (1 < iVar5) {
          local_8 = local_c34[local_14];
          do {
            iVar3 = iVar2;
            if ((bVar12 != iVar7 < 0) &&
               ((int)local_c34[local_424[iVar2 + 1]] < (int)local_c34[local_424[iVar2]])) {
              iVar3 = iVar2 + 1;
            }
            if ((int)local_8 < (int)local_c34[local_424[iVar3]]) break;
            local_424[iVar4] = local_424[iVar3];
            iVar2 = iVar3 * 2;
            bVar12 = SBORROW4(iVar2,iVar5);
            iVar7 = iVar2 - iVar5;
            iVar4 = iVar3;
          } while (iVar2 <= iVar5);
        }
        iVar5 = local_c;
        iVar7 = uVar8 + 1;
        local_424[iVar4] = local_14;
        uVar8 = local_c34[iVar5];
        local_1444[iVar5] = iVar7;
        local_1444[local_10] = iVar7;
        uVar9 = uVar8 & 0xff;
        uVar11 = local_c34[local_10] & 0xff;
        local_8 = iVar7;
        if (uVar9 < uVar11) {
          uVar9 = uVar11;
        }
        local_c34[iVar7] = (local_c34[local_10] & 0xffffff00) + (uVar8 & 0xffffff00) | uVar9 + 1;
        local_424[iVar6] = iVar7;
        iVar5 = local_424[iVar6 >> 1];
        local_1444[iVar7] = -1;
        uVar11 = local_c34[iVar7];
        uVar9 = local_c34[iVar5];
        iVar2 = iVar6;
        iVar4 = iVar6 >> 1;
        uVar8 = local_8;
        while (local_8 = uVar8, (int)uVar11 < (int)uVar9) {
          local_424[iVar2] = iVar5;
          iVar5 = local_424[iVar4 >> 1];
          iVar2 = iVar4;
          iVar4 = iVar4 >> 1;
          uVar8 = local_8;
          uVar9 = local_c34[iVar5];
        }
        local_424[iVar2] = iVar7;
        iVar5 = iVar6;
      }
    }
    if (0x203 < (int)uVar8) {
      uVar13 = 0x7d2;
LAB_00a93a60:
      _Format = 
      "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
      ;
      iVar5 = FUN_00aaf1e2("\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
                           ,uVar13,"1.0.3, 15-Feb-2005");
      _fprintf((FILE *)(iVar5 + 0x40),_Format);
                    /* WARNING: Subroutine does not return */
      _exit(3);
    }
    iVar5 = 1;
    bVar12 = false;
    if (param_2 < 1) {
      return;
    }
    piVar10 = local_1444;
    do {
      piVar10 = piVar10 + 1;
      iVar2 = 0;
      iVar7 = *piVar10;
      piVar1 = piVar10;
      while (-1 < iVar7) {
        piVar1 = local_1444 + *piVar1;
        iVar2 = iVar2 + 1;
        iVar7 = *piVar1;
      }
      *(char *)(param_1 + -1 + iVar5) = (char)iVar2;
      if (0x11 < iVar2) {
        bVar12 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= param_2);
    if (!bVar12) {
      return;
    }
    iVar5 = 1;
    do {
      local_c34[iVar5] = (((int)local_c34[iVar5] >> 8) / 2 + 1) * 0x100;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= param_2);
  } while( true );
}

