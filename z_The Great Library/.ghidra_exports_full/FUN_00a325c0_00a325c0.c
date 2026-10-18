// FUN_00a325c0 @ 00a325c0 body=[[00a325c0, 00a32626] [00a32630, 00a3271d] [00a32724, 00a3274d]]


void FUN_00a325c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int *piVar6;
  undefined4 *puVar7;
  uint *puVar8;
  
  iVar3 = *(int *)(unaff_ESI + 0xbc) - *(int *)(unaff_ESI + 0xb8) >> 5;
  iVar4 = 0;
  if (0 < iVar3) {
    piVar6 = *(int **)(unaff_ESI + 0xb8);
    while (*piVar6 != param_1) {
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 8;
      if (iVar3 <= iVar4) {
        return;
      }
    }
    iVar3 = (*(int *)(unaff_ESI + 0xcc) - *(int *)(unaff_ESI + 200)) / 0x54;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(*(int *)(unaff_ESI + 200) + 0x34 + iVar5);
        FUN_00a331f0(*(int *)(unaff_ESI + 200) + iVar5,1);
        if ((iVar4 < (*(int *)(unaff_ESI + 0xcc) - *(int *)(unaff_ESI + 200)) / 0x54) &&
           (*(int *)(*(int *)(unaff_ESI + 200) + 0x34 + iVar5) != iVar1)) {
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + -0x54;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x54;
      } while (iVar4 < iVar3);
    }
    iVar3 = 0;
    iVar4 = *(int *)(unaff_ESI + 0xbc) - *(int *)(unaff_ESI + 0xb8) >> 5;
    if (0 < iVar4) {
      piVar6 = *(int **)(unaff_ESI + 0xb8);
      while (*piVar6 != param_1) {
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 8;
        if (iVar4 <= iVar3) {
          return;
        }
      }
      puVar2 = *(undefined4 **)(unaff_ESI + 0xbc);
      for (puVar7 = (undefined4 *)(iVar3 * 0x20 + *(int *)(unaff_ESI + 0xb8) + 0x20);
          puVar7 != puVar2; puVar7 = puVar7 + 8) {
        puVar7[-8] = *puVar7;
        FUN_00408ed0(puVar7 + 1,0,0xffffffff);
      }
      iVar4 = *(int *)(unaff_ESI + 0xbc);
      iVar3 = iVar4 + -0x20;
      if (iVar3 != iVar4) {
        puVar8 = (uint *)(iVar4 + -8);
        do {
          if (0xf < *puVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puVar8[-5]);
          }
          *puVar8 = 0xf;
          puVar8[-1] = 0;
          *(undefined1 *)(puVar8 + -5) = 0;
          iVar3 = iVar3 + 0x20;
          puVar8 = puVar8 + 8;
        } while (iVar3 != iVar4);
      }
      *(int *)(unaff_ESI + 0xbc) = *(int *)(unaff_ESI + 0xbc) + -0x20;
    }
  }
  return;
}

