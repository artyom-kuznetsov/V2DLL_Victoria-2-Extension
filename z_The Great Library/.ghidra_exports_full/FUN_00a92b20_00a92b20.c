// FUN_00a92b20 @ 00a92b20 body=[[00a92b20, 00a92ef0]]


void FUN_00a92b20(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_ESI;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  char *_Format;
  int local_4fc [301];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  byte local_10;
  byte local_c;
  int *local_8;
  
  local_4fc[0] = 2;
  iVar12 = 1;
  do {
    if (99 < iVar12) {
      _Format = 
      "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
      ;
      iVar12 = FUN_00aaf1e2("\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
                            ,0x3e9,"1.0.3, 15-Feb-2005");
      _fprintf((FILE *)(iVar12 + 0x40),_Format);
                    /* WARNING: Subroutine does not return */
      _exit(3);
    }
    iVar7 = local_4fc[iVar12 + 199];
    piVar8 = (int *)local_4fc[iVar12 + 99];
    iVar3 = local_4fc[iVar12 + -1];
    iVar13 = iVar12 + -1;
    local_20 = iVar7;
    local_14 = iVar13;
    if ((iVar7 - (int)piVar8 < 0x14) || (0xe < iVar3)) {
      FUN_00a928b0();
      iVar12 = iVar13;
      if (*param_4 < 0) {
        return;
      }
    }
    else {
      local_c = *(byte *)(*(int *)(unaff_ESI + (iVar7 + (int)piVar8 >> 1) * 4) + iVar3 + param_1);
      local_24 = (int *)(unaff_ESI + (int)piVar8 * 4);
      bVar2 = *(byte *)(*(int *)(unaff_ESI + iVar7 * 4) + iVar3 + param_1);
      local_10 = *(byte *)(*local_24 + iVar3 + param_1);
      bVar6 = bVar2;
      if (bVar2 < local_10) {
        bVar6 = local_10;
        local_10 = bVar2;
      }
      if ((local_c < bVar6) && (bVar6 = local_10, local_10 <= local_c)) {
        bVar6 = local_c;
      }
      local_18 = (uint)bVar6;
      local_34 = iVar7;
      local_8 = piVar8;
LAB_00a92be0:
      for (; (int)piVar8 <= iVar7; piVar8 = (int *)((int)piVar8 + 1)) {
        while( true ) {
          local_20 = *(int *)(unaff_ESI + (int)piVar8 * 4);
          uVar14 = (uint)*(byte *)(local_20 + iVar3 + param_1);
          if (uVar14 != local_18) break;
          *(undefined4 *)(unaff_ESI + (int)piVar8 * 4) =
               *(undefined4 *)(unaff_ESI + (int)local_8 * 4);
          *(int *)(unaff_ESI + (int)local_8 * 4) = local_20;
          local_8 = (int *)((int)local_8 + 1);
          piVar8 = (int *)((int)piVar8 + 1);
          if (iVar7 < (int)piVar8) goto LAB_00a92c55;
        }
        if (uVar14 != local_18 && -1 < (int)(uVar14 - local_18)) {
          if ((int)piVar8 <= iVar7) {
            do {
              local_20 = *(int *)(unaff_ESI + iVar7 * 4);
              uVar14 = (uint)*(byte *)(local_20 + iVar3 + param_1);
              if (uVar14 == local_18) {
                *(undefined4 *)(unaff_ESI + iVar7 * 4) = *(undefined4 *)(unaff_ESI + local_34 * 4);
                *(int *)(unaff_ESI + local_34 * 4) = local_20;
                local_34 = local_34 + -1;
              }
              else if ((int)(uVar14 - local_18) < 0) goto LAB_00a92c6b;
              iVar7 = iVar7 + -1;
              if (iVar7 < (int)piVar8) break;
            } while( true );
          }
          break;
        }
      }
LAB_00a92c55:
      if (local_34 < (int)local_8) {
        local_4fc[iVar13] = iVar3 + 1;
      }
      else {
        local_20 = (int)piVar8 - (int)local_8;
        local_18 = (int)local_8 - local_4fc[iVar12 + 99];
        if (local_20 <= (int)local_8 - local_4fc[iVar12 + 99]) {
          local_18 = local_20;
        }
        if (0 < (int)local_18) {
          piVar15 = (int *)(unaff_ESI + ((int)piVar8 - local_18) * 4);
          local_8 = local_24;
          do {
            iVar9 = *local_8;
            local_18 = local_18 + -1;
            piVar1 = local_8 + 1;
            *local_8 = *piVar15;
            *piVar15 = iVar9;
            piVar15 = piVar15 + 1;
            local_24 = piVar15;
            local_8 = piVar1;
          } while (0 < (int)local_18);
        }
        local_18 = local_34 - iVar7;
        if (local_4fc[iVar12 + 199] - local_34 < local_34 - iVar7) {
          local_18 = local_4fc[iVar12 + 199] - local_34;
        }
        if (0 < (int)local_18) {
          local_24 = (int *)(unaff_ESI + 4 + (local_4fc[iVar12 + 199] - local_18) * 4);
          local_8 = (int *)(unaff_ESI + (int)piVar8 * 4);
          do {
            iVar9 = *local_8;
            local_18 = local_18 - 1;
            piVar8 = local_8 + 1;
            *local_8 = *local_24;
            *local_24 = iVar9;
            local_24 = local_24 + 1;
            local_8 = piVar8;
          } while (0 < (int)local_18);
        }
        local_40 = local_4fc[iVar12 + 99];
        local_14 = local_20 + -1 + local_40;
        local_1c = (iVar7 - local_34) + 1 + local_4fc[iVar12 + 199];
        local_2c = local_4fc[iVar12 + 199];
        local_38 = local_14 + 1;
        iVar7 = local_1c + -1;
        iVar9 = local_1c;
        local_30 = local_14;
        if (local_14 - local_40 < local_4fc[iVar12 + 199] - local_1c) {
          iVar9 = local_40;
          local_40 = local_1c;
          local_30 = local_4fc[iVar12 + 199];
          local_2c = local_14;
        }
        iVar5 = local_30;
        local_48 = iVar3;
        local_44 = iVar3 + 1;
        local_3c = iVar9;
        local_28 = iVar7;
        if (local_2c - iVar9 < iVar7 - local_38) {
          local_28 = local_2c;
          local_48 = iVar3 + 1;
          local_44 = iVar3;
          local_3c = local_38;
          local_38 = iVar9;
          local_2c = iVar7;
        }
        iVar7 = local_40;
        iVar9 = local_3c;
        iVar10 = local_48;
        iVar11 = iVar3;
        if (local_30 - local_40 < local_2c - local_3c) {
          local_1c = local_30;
          local_30 = local_2c;
          local_2c = iVar5;
          iVar7 = local_3c;
          iVar9 = local_40;
          iVar10 = iVar3;
          iVar11 = local_48;
        }
        local_4fc[iVar12 + 99] = iVar7;
        local_4fc[iVar12 + 100] = iVar9;
        local_4fc[iVar12 + 199] = local_30;
        local_4fc[iVar13] = iVar11;
        local_4fc[iVar12 + 200] = local_2c;
        local_4fc[iVar12] = iVar10;
        local_4fc[iVar12 + 0x65] = local_38;
        local_4fc[300] = iVar3;
        local_4fc[iVar12 + 0xc9] = local_28;
        local_4fc[iVar12 + 1] = local_44;
        iVar12 = iVar12 + 2;
      }
    }
    if (iVar12 < 1) {
      return;
    }
  } while( true );
LAB_00a92c6b:
  if (iVar7 < (int)piVar8) goto LAB_00a92c55;
  uVar4 = *(undefined4 *)(unaff_ESI + (int)piVar8 * 4);
  *(undefined4 *)(unaff_ESI + (int)piVar8 * 4) = *(undefined4 *)(unaff_ESI + iVar7 * 4);
  *(undefined4 *)(unaff_ESI + iVar7 * 4) = uVar4;
  piVar8 = (int *)((int)piVar8 + 1);
  iVar7 = iVar7 + -1;
  goto LAB_00a92be0;
}

