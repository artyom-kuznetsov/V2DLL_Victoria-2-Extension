// FUN_00a935b0 @ 00a935b0 body=[[00a935b0, 00a93718]]


void FUN_00a935b0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_ESI;
  char *pcVar8;
  
  iVar6 = *(int *)(unaff_ESI + 0x20);
  uVar1 = *(undefined4 *)(unaff_ESI + 0x18);
  iVar5 = *(int *)(unaff_ESI + 0x268);
  iVar2 = *(int *)(unaff_ESI + 0x44);
  iVar3 = *(int *)(unaff_ESI + 0x30);
  if (9999 < iVar2) {
    uVar7 = iVar2 + 0x22;
    if ((uVar7 & 1) != 0) {
      uVar7 = iVar2 + 0x23;
    }
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    else if (100 < iVar3) {
      iVar3 = 100;
    }
    FUN_00a92f00(iVar6,*(int *)(unaff_ESI + 0x24),uVar7 + *(int *)(unaff_ESI + 0x24),uVar1,iVar2,
                 iVar5);
    if (2 < iVar5) {
      iVar4 = 1;
      if (iVar2 != 0) {
        iVar4 = iVar2;
      }
      pcVar8 = "      %d work, %d block, ratio %5.2f\n";
      iVar4 = FUN_00aaf1e2("      %d work, %d block, ratio %5.2f\n",0,iVar2,0.0 / (double)iVar4);
      _fprintf((FILE *)(iVar4 + 0x40),pcVar8);
    }
    if (-1 < ((iVar3 + -1) / 3) * iVar2) goto LAB_00a936c6;
    if (1 < iVar5) {
      pcVar8 = "    too repetitive; using fallback sorting algorithm\n";
      iVar3 = FUN_00aaf1e2();
      _fprintf((FILE *)(iVar3 + 0x40),pcVar8);
    }
  }
  FUN_00a921f0(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x14),uVar1,
               CONCAT44(iVar5,iVar2));
LAB_00a936c6:
  iVar5 = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0xffffffff;
  if (0 < *(int *)(unaff_ESI + 0x44)) {
    do {
      if (*(int *)(iVar6 + iVar5 * 4) == 0) {
        *(int *)(unaff_ESI + 0x1c) = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_ESI + 0x44));
  }
  if (*(int *)(unaff_ESI + 0x1c) != -1) {
    return;
  }
  pcVar8 = 
  "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
  ;
  iVar6 = FUN_00aaf1e2("\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
                       ,0x3eb);
  _fprintf((FILE *)(iVar6 + 0x40),pcVar8);
                    /* WARNING: Subroutine does not return */
  _exit(3);
}

