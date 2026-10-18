// FUN_004b23c0 @ 004b23c0 body=[[004b23c0, 004b2607]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004b23c0(void)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int **ppiVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int unaff_ESI;
  int *piStack_78;
  undefined1 local_6c [8];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  if (*(char *)(*(int *)(unaff_ESI + 0x5c) + 0x2a) != '\0') {
    piStack_78 = &local_14;
    FUN_004bada0(unaff_ESI);
    piStack_78 = (int *)0x4b23e4;
    piVar3 = (int *)FUN_0055e410();
    iVar4 = piVar3[1] - *piVar3 >> 2;
    piStack_78 = (int *)0x4b23f7;
    local_c = &stack0xffffff8c + iVar4 * -4;
    pcVar1 = *(code **)(**(int **)(unaff_ESI + 800) + 0x38);
    ppiVar10 = &piStack_78 + -iVar4;
    (&piStack_78)[-iVar4] = (int *)0x4b2407;
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      local_20 = *(undefined4 *)(unaff_ESI + 0x128);
      local_18 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 300) * 4) +
                         0xbcc);
      iVar9 = 0;
      *(undefined4 *)((int)ppiVar10 + -4) = 0;
      local_8 = 0;
      *(undefined4 *)((int)ppiVar10 + -8) = 0x4b2476;
      FUN_008a8650();
      local_60 = *(undefined4 *)(unaff_ESI + 300);
      local_64 = *(undefined4 *)(unaff_ESI + 0x128);
      local_5c = *(undefined4 *)(unaff_ESI + 0x58);
      iVar4 = piVar3[1] - *piVar3 >> 2;
      local_10 = iVar4;
      if (0 < iVar4) {
        do {
          local_1c = *(int *)(*piVar3 + iVar9 * 4);
          if (*(char *)(*(int *)(local_1c + 0x4c) + *(int *)(local_18 + 0x2ec)) == '\0') {
LAB_004b24e5:
            *(undefined4 *)(local_c + iVar9 * 4) = 0;
          }
          else {
            pcVar1 = *(code **)(*(int *)(local_1c + 0x50) + 0x18);
            *(undefined1 **)((int)ppiVar10 + -4) = local_6c;
            puVar12 = (undefined4 *)((int)ppiVar10 + -8);
            ppiVar10 = (int **)((int)ppiVar10 + -8);
            *puVar12 = 0x4b24cc;
            cVar2 = (*pcVar1)();
            iVar4 = local_10;
            if (cVar2 == '\0') goto LAB_004b24e5;
            local_8 = local_8 + 1;
            *(undefined4 *)(local_c + iVar9 * 4) = 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar4);
      }
      *(undefined4 *)((int)ppiVar10 + -4) = 0x47;
      *(undefined4 *)((int)ppiVar10 + -8) = 0x4b24fe;
      FUN_009b7ac0();
      if ((local_8 != 0) && (local_14 < local_1c)) {
        *(undefined4 *)((int)ppiVar10 + -4) = 0x47;
        *(undefined4 *)((int)ppiVar10 + -8) = 0x4b251a;
        FUN_009b7ac0();
        *(undefined4 *)((int)ppiVar10 + -4) = 0;
        *(undefined4 *)((int)ppiVar10 + -8) = 0x47;
        *(undefined4 *)((int)ppiVar10 + -0xc) = 0x4b2523;
        local_1c = FUN_009b7950();
        iVar4 = DAT_012588e8;
        local_1c = local_1c % local_8;
        iVar9 = piVar3[1] - *piVar3 >> 2;
        iVar6 = 0;
        iVar8 = 0;
        if (0 < iVar9) {
          do {
            if (*(int *)(local_c + iVar6 * 4) != 0) {
              if (iVar8 == local_1c) {
                *(undefined4 *)(unaff_ESI + 800) = *(undefined4 *)(*piVar3 + iVar6 * 4);
                pcVar1 = *(code **)(**(int **)(iVar4 + 0xb24) + 0x38);
                puVar13 = (undefined4 *)((int)ppiVar10 + -4);
                ppiVar10 = (int **)((int)ppiVar10 + -4);
                *puVar13 = 0x4b2572;
                (*pcVar1)();
                goto LAB_004b2572;
              }
              iVar8 = iVar8 + 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar9);
        }
      }
    }
    else {
      *(undefined4 *)((int)ppiVar10 + -4) = 0x47;
      *(undefined4 *)((int)ppiVar10 + -8) = 0x4b2415;
      FUN_009b7ac0();
      if (local_10 < local_14) {
        *(undefined4 *)((int)ppiVar10 + -4) = 0x4b2426;
        uVar5 = FUN_0055e380();
        iVar4 = DAT_012588e8;
        *(undefined4 *)(unaff_ESI + 800) = uVar5;
        pcVar1 = *(code **)(**(int **)(iVar4 + 0xb24) + 0x38);
        puVar11 = (undefined4 *)((int)ppiVar10 + -4);
        ppiVar10 = (int **)((int)ppiVar10 + -4);
        *puVar11 = 0x4b243f;
        (*pcVar1)();
LAB_004b2572:
        *(int *)((int)ppiVar10 + -4) = unaff_ESI;
        *(undefined4 *)((int)ppiVar10 + -8) = 0x4b2586;
        FUN_00643b10();
      }
    }
    *(int *)((int)ppiVar10 + -4) = unaff_ESI;
    *(undefined4 *)((int)ppiVar10 + -8) = 0x4b258c;
    FUN_004b2020();
    piVar3 = (int *)(unaff_ESI + 0x30c);
    iVar4 = (*(int *)(unaff_ESI + 0x310) - *(int *)(unaff_ESI + 0x30c)) / 0x278;
    if (0 < iVar4) {
      piVar7 = (int *)(*piVar3 + 0x58);
      iVar9 = 0;
      do {
        if (0 < *piVar7) goto LAB_004b25e1;
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 0x9e;
      } while (iVar9 < iVar4);
    }
    iVar4 = *piVar3;
    *(undefined4 *)((int)ppiVar10 + -4) = *(undefined4 *)(unaff_ESI + 0x310);
    *(int *)((int)ppiVar10 + -8) = iVar4;
    *(int **)((int)ppiVar10 + -0xc) = &local_1c;
    *(int **)((int)ppiVar10 + -0x10) = piVar3;
    *(undefined4 *)((int)ppiVar10 + -0x14) = 0x4b25e1;
    FUN_004bed60();
LAB_004b25e1:
    *(undefined4 *)((int)ppiVar10 + -4) = 0x4b25e8;
    FUN_004b2610();
    if ((*(int *)(unaff_ESI + 0x38) != 0) &&
       (*(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + -0x53,
       *(int *)(unaff_ESI + 0x38) < 0)) {
      *(undefined4 *)(unaff_ESI + 0x38) = 0;
    }
  }
  return;
}

