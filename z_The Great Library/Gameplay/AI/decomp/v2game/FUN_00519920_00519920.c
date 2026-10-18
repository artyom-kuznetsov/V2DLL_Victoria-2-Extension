// FUN_00519920 @ 00519920 body=[[00519920, 00519a3a]]


undefined4 FUN_00519920(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  *(undefined2 *)(unaff_ESI + 0xcf4) = 0;
  *(undefined4 *)(unaff_ESI + 0xcf8) = 0x2d2d2d;
  *(undefined4 *)(unaff_ESI + 0xcfc) = 0;
  iVar1 = *(int *)(unaff_ESI + 0xbe8);
  iVar4 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xbec) - iVar1 & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(iVar1 + iVar4 * 4);
      if (*(int **)(iVar1 + 0x24) != (int *)0x0) {
        iVar2 = (**(code **)(**(int **)(iVar1 + 0x24) + 0x1c))();
        if (iVar2 != 0x336) {
          iVar2 = (**(code **)(**(int **)(iVar1 + 0x24) + 0x1c))();
          if (iVar2 != 0x93a) goto LAB_005199c9;
        }
        iVar2 = DAT_012587e4;
        if (*(int *)(*(int *)(iVar1 + 0x24) + 0xc) == *(int *)(iVar1 + 0xc)) {
          *(undefined1 *)(unaff_ESI + 0xcf5) = 1;
          iVar2 = *(int *)(*(int *)(iVar2 + 4) + iVar4 * 4);
          *(undefined4 *)(unaff_ESI + 0xcf8) = *(undefined4 *)(iVar2 + 0x1c);
          *(undefined4 *)(unaff_ESI + 0xcfc) = *(undefined4 *)(iVar2 + 0x20);
        }
      }
LAB_005199c9:
      if (*(int **)(iVar1 + 0x24) != (int *)0x0) {
        iVar3 = (**(code **)(**(int **)(iVar1 + 0x24) + 0x1c))();
        iVar2 = DAT_012587e4;
        if (iVar3 == 0x93a) {
          if (*(int *)(*(int *)(iVar1 + 0x24) + 0xc) == *(int *)(iVar1 + 0xc)) {
            *(undefined1 *)(unaff_ESI + 0xcf4) = 1;
            iVar1 = *(int *)(*(int *)(iVar2 + 4) + iVar4 * 4);
            *(undefined4 *)(unaff_ESI + 0xcf8) = *(undefined4 *)(iVar1 + 0x1c);
            *(undefined4 *)(unaff_ESI + 0xcfc) = *(undefined4 *)(iVar1 + 0x20);
          }
        }
      }
      iVar1 = *(int *)(unaff_ESI + 0xbe8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0xbec) - iVar1 >> 2);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

