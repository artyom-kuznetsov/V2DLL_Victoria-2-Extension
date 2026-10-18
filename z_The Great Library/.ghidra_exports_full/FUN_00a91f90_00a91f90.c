// FUN_00a91f90 @ 00a91f90 body=[[00a91f90, 00a921e8]]


void FUN_00a91f90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int unaff_EDI;
  char *_Format;
  int local_344 [99];
  int aiStack_1b8 [101];
  undefined4 local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = 0;
  iVar6 = 1;
  do {
    if (99 < iVar6) {
      _Format = 
      "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
      ;
      iVar6 = FUN_00aaf1e2("\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
                           ,0x3ec,"1.0.3, 15-Feb-2005");
      _fprintf((FILE *)(iVar6 + 0x40),_Format);
                    /* WARNING: Subroutine does not return */
      _exit(3);
    }
    local_14 = local_344[iVar6 + -1];
    iVar1 = aiStack_1b8[iVar6];
    iVar10 = iVar6 + -1;
    local_c = iVar10;
    local_18 = iVar1;
    if (local_14 - iVar1 < 10) {
      FUN_00a91ed0(param_1,iVar1);
    }
    else {
      local_1c = local_1c * 0x1dc5 + 1 & 0x7fff;
      if (local_1c == (local_1c / 3) * 3) {
        iVar5 = *(int *)(unaff_EDI + iVar1 * 4);
LAB_00a92035:
        local_8 = *(int *)(param_1 + iVar5 * 4);
      }
      else {
        if (local_1c % 3 != 1) {
          iVar5 = *(int *)(unaff_EDI + local_14 * 4);
          goto LAB_00a92035;
        }
        local_8 = *(int *)(param_1 + *(int *)(unaff_EDI + (local_14 + iVar1 >> 1) * 4) * 4);
      }
      local_10 = local_14;
      iVar5 = local_14;
      iVar7 = iVar1;
      iVar11 = iVar1;
LAB_00a92050:
      for (; iVar7 <= iVar5; iVar7 = iVar7 + 1) {
        while( true ) {
          iVar2 = *(int *)(unaff_EDI + iVar7 * 4);
          iVar3 = *(int *)(param_1 + iVar2 * 4);
          if (iVar3 != local_8) break;
          *(undefined4 *)(unaff_EDI + iVar7 * 4) = *(undefined4 *)(unaff_EDI + iVar11 * 4);
          *(int *)(unaff_EDI + iVar11 * 4) = iVar2;
          iVar7 = iVar7 + 1;
          iVar11 = iVar11 + 1;
          if (iVar5 < iVar7) goto LAB_00a92075;
        }
        if (iVar3 != local_8 && -1 < iVar3 - local_8) {
          if (iVar7 <= iVar5) {
            do {
              iVar2 = *(int *)(unaff_EDI + iVar5 * 4);
              iVar3 = *(int *)(param_1 + iVar2 * 4);
              if (iVar3 == local_8) {
                *(undefined4 *)(unaff_EDI + iVar5 * 4) = *(undefined4 *)(unaff_EDI + local_10 * 4);
                *(int *)(unaff_EDI + local_10 * 4) = iVar2;
                local_10 = local_10 + -1;
              }
              else if (iVar3 - local_8 < 0) goto LAB_00a92178;
              iVar5 = iVar5 + -1;
              if (iVar5 < iVar7) break;
            } while( true );
          }
          break;
        }
      }
LAB_00a92075:
      iVar10 = local_c;
      if (iVar11 <= local_10) {
        local_20 = iVar7 - iVar11;
        local_8 = iVar11 - iVar1;
        if (local_20 <= iVar11 - iVar1) {
          local_8 = local_20;
        }
        if (0 < local_8) {
          puVar8 = (undefined4 *)(unaff_EDI + iVar1 * 4);
          puVar9 = (undefined4 *)(unaff_EDI + (iVar7 - local_8) * 4);
          do {
            local_24 = *puVar8;
            *puVar8 = *puVar9;
            *puVar9 = local_24;
            local_8 = local_8 + -1;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          } while (0 < local_8);
        }
        local_8 = local_10 - iVar5;
        if (local_14 - local_10 < local_10 - iVar5) {
          local_8 = local_14 - local_10;
        }
        if (0 < local_8) {
          puVar8 = (undefined4 *)(unaff_EDI + iVar7 * 4);
          puVar9 = (undefined4 *)(unaff_EDI + 4 + (local_14 - local_8) * 4);
          do {
            uVar4 = *puVar8;
            *puVar8 = *puVar9;
            local_8 = local_8 + -1;
            *puVar9 = uVar4;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          } while (0 < local_8);
        }
        iVar7 = local_20 + -1 + iVar1;
        iVar5 = (iVar5 - local_10) + 1 + local_14;
        if (local_14 - iVar5 < iVar7 - iVar1) {
          aiStack_1b8[iVar6 + 1] = iVar5;
          iVar1 = local_14;
          local_344[iVar10] = iVar7;
          local_344[iVar6] = iVar1;
        }
        else {
          aiStack_1b8[iVar6] = iVar5;
          aiStack_1b8[iVar6 + 1] = iVar1;
          local_344[iVar6] = iVar7;
        }
        local_c = iVar6 + 1;
        iVar10 = local_c;
      }
    }
    iVar6 = iVar10;
    if (iVar10 < 1) {
      return;
    }
  } while( true );
LAB_00a92178:
  if (iVar5 < iVar7) goto LAB_00a92075;
  uVar4 = *(undefined4 *)(unaff_EDI + iVar7 * 4);
  *(int *)(unaff_EDI + iVar7 * 4) = iVar2;
  *(undefined4 *)(unaff_EDI + iVar5 * 4) = uVar4;
  iVar7 = iVar7 + 1;
  iVar5 = iVar5 + -1;
  goto LAB_00a92050;
}

