// FUN_0085cf10 @ 0085cf10 body=[[0085cf10, 0085d118] [0085d120, 0085d1d5] [0085d1df, 0085d26d]]


void FUN_0085cf10(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_EDI;
  double dVar10;
  
  dVar10 = 365.0;
  iVar5 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar9 = (int)((double)iVar5 / 365.0);
  iVar6 = (*(int *)(unaff_EDI + 0x10) + -43800000) / 0x18;
  iVar8 = (int)((double)iVar6 / 365.0);
  iVar7 = FUN_009b7610();
  if ((1 - iVar7 / 100) * 100 + iVar7 <
      ((iVar9 - iVar8) * 0x16d - (iVar6 - (int)((float)iVar8 * 365.0))) +
      (iVar5 - (int)((float)iVar9 * 365.0))) {
    FUN_0085ccb0();
  }
  else {
    iVar5 = *(int *)(unaff_EDI + 0x154);
    if ((-1 < iVar5) && (iVar5 < 10)) {
      *(int *)(unaff_EDI + 0x154) = iVar5 + 1;
    }
    if (((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4) + 0x31) ==
          '\0') || (*(int *)(unaff_EDI + 0x10c) != 0)) && (*(int *)(unaff_EDI + 0x154) != 10))
    goto LAB_0085d060;
    FUN_0085f3a0(unaff_EDI);
    *(undefined4 *)(unaff_EDI + 0x154) = 0xffffffff;
  }
  dVar10 = 365.0;
LAB_0085d060:
  iVar5 = (*(int *)(unaff_EDI + 0x14) + -43800000) / 0x18;
  iVar6 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar9 = (int)((double)iVar5 / dVar10);
  iVar8 = (int)((double)iVar6 / dVar10);
  piVar1 = *(int **)(unaff_EDI + 0x140);
  do {
    do {
      if (piVar1 == (int *)0x0) {
        if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4) + 0x67c)
             != '\0') &&
           (iVar7 + (2 - iVar7 / 10) * 10 <
            ((((int)((float)iVar8 * -365.0) - (int)((float)iVar9 * -365.0)) +
             (iVar8 - iVar9) * 0x16d) - iVar5) + iVar6)) {
          FUN_0057afc0(unaff_EDI + 0xdc);
          FUN_008601b0(unaff_EDI + 0xcc);
          FUN_0085d6c0(unaff_EDI);
          *(undefined4 *)(unaff_EDI + 0x14) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        }
        return;
      }
      puVar2 = (undefined4 *)*piVar1;
      piVar1 = (int *)piVar1[2];
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + puVar2[3] * 4);
    } while ((0 < (int)(*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) & 0xfffffffcU)) &&
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(unaff_EDI + 0xc) * 4) + 0xbe8) +
                              puVar2[3] * 4) + 0x34) == 0));
    for (piVar4 = *(int **)(unaff_EDI + 0x140); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      if ((undefined4 *)*piVar4 == puVar2) {
        if (piVar4 != (int *)0x0) {
          if (*(char *)(unaff_EDI + 0x14c) == '\0') {
            iVar5 = piVar4[1];
            iVar6 = piVar4[2];
            if (iVar5 != 0) {
              *(int *)(iVar5 + 8) = iVar6;
            }
            if (iVar6 != 0) {
              *(int *)(iVar6 + 4) = iVar5;
            }
            if (piVar4 == *(int **)(unaff_EDI + 0x140)) {
              *(int *)(unaff_EDI + 0x140) = iVar6;
            }
            if (piVar4 == *(int **)(unaff_EDI + 0x144)) {
              *(int *)(unaff_EDI + 0x144) = iVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar4);
          }
          *(undefined1 *)(piVar4 + 3) = 1;
        }
        break;
      }
    }
    (**(code **)*puVar2)(1);
  } while( true );
}

