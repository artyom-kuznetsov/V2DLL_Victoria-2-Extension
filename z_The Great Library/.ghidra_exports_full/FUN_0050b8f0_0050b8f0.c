// FUN_0050b8f0 @ 0050b8f0 body=[[0050b8f0, 0050b9aa]]


void FUN_0050b8f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_ESI;
  longlong lVar5;
  
  piVar1 = *(int **)(unaff_ESI + 0xe54);
  iVar2 = *(int *)(*(int *)(unaff_ESI + 0xe64) + 8);
  uVar4 = *(uint *)(*(int *)(unaff_ESI + 0x1330) + iVar2 * 4);
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(int *)(iVar3 + 8) != iVar2) {
      uVar4 = uVar4 + *(int *)(*(int *)(unaff_ESI + 0x1330) + *(int *)(iVar3 + 8) * 4);
    }
  }
  lVar5 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,
                   *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x108),
                   *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x10c));
  *(longlong *)(unaff_ESI + 0x1480) = lVar5;
  if (((int)((ulonglong)lVar5 >> 0x20) < 1) &&
     ((lVar5 < 0 || (*(uint *)(unaff_ESI + 0x1480) < 0x8000)))) {
    *(undefined4 *)(unaff_ESI + 0x1480) = 0x8000;
    *(undefined4 *)(unaff_ESI + 0x1484) = 0;
  }
  uVar4 = *(uint *)(unaff_ESI + 0x1480) >> 0xf | *(int *)(unaff_ESI + 0x1484) << 0x11;
  *(uint *)(unaff_ESI + 0x1488) = uVar4;
  iVar2 = *(int *)(*(int *)(unaff_ESI + 0xbcc) + 0x280);
  if (iVar2 < (int)uVar4) {
    *(int *)(unaff_ESI + 0x1488) = iVar2;
  }
  return;
}

