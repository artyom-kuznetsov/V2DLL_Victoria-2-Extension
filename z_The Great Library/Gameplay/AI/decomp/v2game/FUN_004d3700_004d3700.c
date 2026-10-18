// FUN_004d3700 @ 004d3700 body=[[004d3700, 004d3b99] [004d3b9d, 004d3bac]]


/* WARNING: Removing unreachable block (ram,0x004d38b5) */
/* WARNING: Removing unreachable block (ram,0x004d38c6) */
/* WARNING: Removing unreachable block (ram,0x004d38bd) */
/* WARNING: Removing unreachable block (ram,0x004d38c4) */
/* WARNING: Removing unreachable block (ram,0x004d3a1b) */
/* WARNING: Removing unreachable block (ram,0x004d3a40) */
/* WARNING: Removing unreachable block (ram,0x004d3a64) */
/* WARNING: Removing unreachable block (ram,0x004d3a71) */
/* WARNING: Removing unreachable block (ram,0x004d3a8d) */
/* WARNING: Removing unreachable block (ram,0x004d3aa0) */
/* WARNING: Removing unreachable block (ram,0x004d3ab9) */
/* WARNING: Removing unreachable block (ram,0x004d3abf) */
/* WARNING: Removing unreachable block (ram,0x004d3acb) */
/* WARNING: Removing unreachable block (ram,0x004d3ad0) */
/* WARNING: Removing unreachable block (ram,0x004d3ada) */
/* WARNING: Removing unreachable block (ram,0x004d3ae4) */
/* WARNING: Removing unreachable block (ram,0x004d3ae9) */
/* WARNING: Removing unreachable block (ram,0x004d3b4e) */
/* WARNING: Removing unreachable block (ram,0x004d3b10) */
/* WARNING: Removing unreachable block (ram,0x004d3b13) */
/* WARNING: Removing unreachable block (ram,0x004d3b27) */
/* WARNING: Removing unreachable block (ram,0x004d3b5a) */
/* WARNING: Removing unreachable block (ram,0x004d390e) */
/* WARNING: Removing unreachable block (ram,0x004d395f) */
/* WARNING: Removing unreachable block (ram,0x004d3962) */
/* WARNING: Removing unreachable block (ram,0x004d3967) */
/* WARNING: Removing unreachable block (ram,0x004d396d) */
/* WARNING: Removing unreachable block (ram,0x004d3997) */
/* WARNING: Removing unreachable block (ram,0x004d39b9) */
/* WARNING: Removing unreachable block (ram,0x004d39ca) */
/* WARNING: Removing unreachable block (ram,0x004d39d8) */
/* WARNING: Removing unreachable block (ram,0x004d39db) */
/* WARNING: Removing unreachable block (ram,0x004d39e2) */
/* WARNING: Removing unreachable block (ram,0x004d39e7) */
/* WARNING: Removing unreachable block (ram,0x004d39fe) */
/* WARNING: Removing unreachable block (ram,0x004d3914) */
/* WARNING: Removing unreachable block (ram,0x004d3947) */
/* WARNING: Removing unreachable block (ram,0x004d3956) */
/* WARNING: Removing unreachable block (ram,0x004d3a13) */
/* WARNING: Removing unreachable block (ram,0x004d3b94) */

void FUN_004d3700(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int unaff_ESI;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar7 = ExceptionList;
  iVar2 = DAT_012587e4;
  puStack_c = &LAB_00b46678;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(unaff_ESI + 0x27c) = 0;
  iVar6 = DAT_012588e8;
  if ((*(int *)(unaff_ESI + 0x5c) != 0) &&
     (*(char *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(unaff_ESI + 0x5c) * 4) + 0xcf4) != '\0')) {
    *(undefined4 *)(unaff_ESI + 0x280) = 0;
    *(undefined4 *)(unaff_ESI + 0x284) = 0x2d2d2d;
    *(undefined4 *)(unaff_ESI + 0x288) = 0;
    ExceptionList = pvVar7;
    return;
  }
  local_8 = 0;
  iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(unaff_ESI + 0x5c) * 4) + 0xbe4);
  iVar8 = *(int *)(unaff_ESI + 0x4c) - *(int *)(unaff_ESI + 0x48) >> 2;
  local_1c = 0;
  if (0 < iVar8) {
    do {
      iVar3 = *(int *)(*(int *)(unaff_ESI + 0x48) + local_1c * 4);
      if (iVar3 == iVar2) {
        *(undefined4 *)(unaff_ESI + 0x288) = 0;
        *(undefined4 *)(unaff_ESI + 0x280) = 0;
        *(undefined4 *)(unaff_ESI + 0x284) = 0x2d2d2d;
        ExceptionList = local_10;
        return;
      }
      iVar3 = *(int *)(*(int *)(iVar6 + 0xacc) + iVar3 * 4);
      iVar9 = *(int *)(iVar3 + 0x14c) - *(int *)(iVar3 + 0x148) >> 3;
      local_14 = 0;
      if (0 < iVar9) {
        do {
          iVar1 = *(int *)(iVar3 + 0x148) + local_14 * 8;
          if (((*(int *)(unaff_ESI + 0x5c) != *(int *)(iVar1 + 4)) &&
              (iVar4 = *(int *)(DAT_012587e4 + 4),
              *(char *)(*(int *)(iVar4 + *(int *)(iVar1 + 4) * 4) + 0x1544) != '\0')) &&
             (*(int *)(*(int *)(iVar4 + *(int *)(unaff_ESI + 0x5c) * 4) + 0xe64) !=
              *(int *)(*(int *)(iVar4 + *(int *)(iVar1 + 4) * 4) + 0xe64))) {
            for (piVar5 = *(int **)(*(int *)(iVar4 + *(int *)(unaff_ESI + 0x5c) * 4) + 0xe54);
                piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
              if (*piVar5 == *(int *)(*(int *)(iVar4 + *(int *)(iVar1 + 4) * 4) + 0xe64))
              goto LAB_004d38d5;
            }
            FUN_004d61d0();
          }
LAB_004d38d5:
          local_14 = local_14 + 1;
        } while (local_14 < iVar9);
      }
      local_1c = local_1c + 1;
    } while (local_1c < iVar8);
  }
  if (*(char *)(unaff_ESI + 0x27c) == '\0') {
    *(undefined4 *)(unaff_ESI + 0x280) = 0;
    *(undefined4 *)(unaff_ESI + 0x284) = 0x2d2d2d;
    *(undefined4 *)(unaff_ESI + 0x288) = 0;
  }
  ExceptionList = local_10;
  return;
}

