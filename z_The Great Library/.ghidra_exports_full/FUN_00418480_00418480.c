// FUN_00418480 @ 00418480 body=[[00418480, 004185c1] [004185c5, 004185d4] [004185d8, 0041862f] [00418633, 0041865a]]


/* WARNING: Removing unreachable block (ram,0x004185fd) */
/* WARNING: Removing unreachable block (ram,0x00418600) */

void FUN_00418480(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar5 = 0;
  local_14 = 0;
  if (0 < (int)(unaff_ESI[1] - *unaff_ESI & 0xfffffff0U)) {
    do {
      local_10 = 0;
      if (0 < (int)(*(int *)(*unaff_ESI + 4 + iVar5) - *(int *)(*unaff_ESI + iVar5) & 0xfffffff0U))
      {
        iVar4 = 0;
        do {
          local_c = 0;
          if (0 < (*(int *)(*(int *)(*unaff_ESI + iVar5) + 4 + iVar4) -
                  *(int *)(*(int *)(*unaff_ESI + iVar5) + iVar4)) / 0x14) {
            local_8 = (undefined4 *)0x0;
            do {
              FUN_00418870(*(int *)(*(int *)(*unaff_ESI + iVar5) + iVar4) + (int)local_8);
              local_c = local_c + 1;
              local_8 = (undefined4 *)((int)local_8 + 0x14);
            } while (local_c < (*(int *)(*(int *)(*unaff_ESI + iVar5) + 4 + iVar4) -
                               *(int *)(*(int *)(*unaff_ESI + iVar5) + iVar4)) / 0x14);
          }
          iVar1 = *(int *)(*unaff_ESI + iVar5);
          FUN_00419570(iVar1 + iVar4,local_18,*(undefined4 *)(iVar1 + iVar4),
                       *(undefined4 *)(iVar1 + 4 + iVar4));
          local_10 = local_10 + 1;
          iVar4 = iVar4 + 0x10;
        } while (local_10 < *(int *)(*unaff_ESI + 4 + iVar5) - *(int *)(*unaff_ESI + iVar5) >> 4);
      }
      iVar4 = *unaff_ESI;
      FUN_004194a0(iVar4 + iVar5,local_1c,*(undefined4 *)(iVar4 + iVar5),
                   *(undefined4 *)(iVar4 + 4 + iVar5));
      local_14 = local_14 + 1;
      iVar5 = iVar5 + 0x10;
    } while (local_14 < unaff_ESI[1] - *unaff_ESI >> 4);
  }
  FUN_00419340(unaff_ESI,local_1c,*unaff_ESI,unaff_ESI[1]);
  iVar5 = 0;
  do {
    if (*(int *)(unaff_ESI[4] + iVar5) != 0) {
      piVar2 = *(int **)(unaff_ESI[4] + iVar5);
      if (piVar2 != (int *)0x0) {
        if (*piVar2 == 0) {
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar2);
      }
      *(undefined4 *)(iVar5 + unaff_ESI[4]) = 0;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x10);
  local_8 = (undefined4 *)unaff_ESI[8];
  if (local_8 != (undefined4 *)unaff_ESI[9]) {
    puVar3 = (undefined4 *)unaff_ESI[9];
    for (puVar6 = local_8; puVar6 != puVar3; puVar6 = puVar6 + 7) {
      if (0xf < (uint)puVar6[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar6);
      }
      puVar6[5] = 0xf;
      puVar6[4] = 0;
      *(undefined1 *)puVar6 = 0;
    }
    unaff_ESI[9] = (int)local_8;
  }
  *(undefined1 *)(unaff_ESI + 0xe) = 0;
  return;
}

