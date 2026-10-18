// FUN_004ce950 @ 004ce950 body=[[004ce950, 004cea21] [004cea28, 004cead3]]


void FUN_004ce950(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  
  iVar1 = *(int *)(DAT_012588e8 + 0xb0c);
  piVar4 = *(int **)(unaff_EDI + 0x38);
joined_r0x004ce96d:
  do {
    while( true ) {
      while( true ) {
        if (piVar4 == (int *)0x0) {
          return;
        }
        piVar5 = (int *)piVar4[2];
        puVar2 = (undefined4 *)*piVar4;
        piVar4 = piVar5;
        if (((int)puVar2[3] < iVar1) &&
           (1 < (int)((double)((puVar2[3] + -43800000) / 0x18) / 365.0))) break;
        iVar3 = puVar2[2];
        iVar7 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
        iVar6 = 0;
        if (0 < iVar7) {
          do {
            piVar5 = (int *)(*(int *)(unaff_EDI + 0xa0) + iVar6 * 8);
            *piVar5 = *piVar5 + *(int *)(iVar6 * 8 + *(int *)(iVar3 + 0x18));
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar7);
        }
        if (DAT_012586f0 != '\0') {
          iVar6 = *(int *)(unaff_EDI + 0x94);
          piVar5 = (int *)FUN_00aae9af(0x10);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = iVar3;
            piVar5[1] = iVar6;
            piVar5[2] = 0;
            *(undefined1 *)(piVar5 + 3) = 0;
          }
          iVar3 = *(int *)(unaff_EDI + 0x98);
          *(int **)(unaff_EDI + 0x94) = piVar5;
          *(int *)(unaff_EDI + 0x98) = iVar3 + 1;
          if (iVar3 == 0) {
            *(int **)(unaff_EDI + 0x90) = piVar5;
          }
          else {
            *(int **)(iVar6 + 8) = piVar5;
          }
        }
      }
      piVar5 = *(int **)(unaff_EDI + 0x38);
      if (piVar5 != (int *)0x0) break;
LAB_004cea28:
      (**(code **)*puVar2)(1);
    }
    do {
      if ((undefined4 *)*piVar5 == puVar2) {
        if (piVar5 == (int *)0x0) goto LAB_004cea28;
        if (*(char *)(unaff_EDI + 0x44) == '\0') {
          iVar1 = piVar5[1];
          iVar3 = piVar5[2];
          if (iVar1 != 0) {
            *(int *)(iVar1 + 8) = iVar3;
          }
          if (iVar3 != 0) {
            *(int *)(iVar3 + 4) = iVar1;
          }
          if (piVar5 == *(int **)(unaff_EDI + 0x38)) {
            *(int *)(unaff_EDI + 0x38) = iVar3;
          }
          if (piVar5 == *(int **)(unaff_EDI + 0x3c)) {
            *(int *)(unaff_EDI + 0x3c) = iVar1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar5);
        }
        *(undefined1 *)(piVar5 + 3) = 1;
        (**(code **)*puVar2)(1);
        goto joined_r0x004ce96d;
      }
      piVar5 = (int *)piVar5[2];
    } while (piVar5 != (int *)0x0);
    (**(code **)*puVar2)(1);
  } while( true );
}

