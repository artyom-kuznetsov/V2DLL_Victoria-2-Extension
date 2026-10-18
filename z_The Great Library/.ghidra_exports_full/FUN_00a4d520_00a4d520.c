// FUN_00a4d520 @ 00a4d520 body=[[00a4d520, 00a4d5a8]]


undefined4 FUN_00a4d520(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
    iVar3 = FUN_00aad56b(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 4));
    *(int *)(unaff_EDI + 0x3c) = iVar3;
    if (iVar3 == 0) {
      return 0x8007000e;
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        uVar4 = (**(code **)(**(int **)(unaff_EDI + 0x1c) + 0x3c))
                          (*(int **)(unaff_EDI + 0x1c),uVar5);
        iVar3 = D3DXFrameFind(*(undefined4 *)(param_1 + 0xa8),uVar4);
        if (iVar3 == 0) {
          return 0x80004005;
        }
        *(int *)(*(int *)(unaff_EDI + 0x3c) + uVar5 * 4) = iVar3 + 0x50;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  return 0;
}

