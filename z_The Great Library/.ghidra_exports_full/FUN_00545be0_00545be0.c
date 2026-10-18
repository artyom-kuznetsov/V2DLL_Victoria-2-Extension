// FUN_00545be0 @ 00545be0 body=[[00545be0, 00545f16]]


int FUN_00545be0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_8;
  
  iVar4 = param_1;
  if (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(param_1 + 0x1404)) {
    *(undefined4 *)(param_1 + 0x15c4) = 0;
    *(undefined4 *)(param_1 + 0x15c0) = 0;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x16c);
  iVar6 = *(int *)(param_1 + 0x170);
  *(int *)(param_1 + 0x15c4) = *(int *)(*(int *)(param_1 + 0xbcc) + 0x5c) / 1000;
  piVar5 = (int *)FUN_0051f8c0(0);
  iVar6 = __alldiv((longlong)(iVar6 * 1000) * (longlong)(1000 - *piVar5),1000,0);
  iVar7 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xec) *
                   (longlong)(iVar7 * 1000 + iVar6),1000,0);
  piVar5 = *(int **)(param_1 + 0x149c);
  local_8 = 0;
  *(int *)(param_1 + 0x15c4) =
       *(int *)(param_1 + 0x15c4) + iVar7 / 1000 + *(int *)(param_1 + 0x15c8);
  if (piVar5 != (int *)0x0) {
    do {
      iVar7 = 0;
      piVar11 = (int *)(*piVar5 + 0x98);
      do {
        if (*piVar11 == *(int *)(param_1 + 0x20)) {
          iVar7 = *(int *)(*piVar5 + 0xa0 + iVar7 * 0x1c);
          goto LAB_00545cff;
        }
        iVar7 = iVar7 + 1;
        piVar11 = piVar11 + 7;
      } while (iVar7 < 4);
      iVar7 = 0;
LAB_00545cff:
      piVar5 = (int *)piVar5[2];
      local_8 = local_8 + iVar7 * 1000;
    } while (piVar5 != (int *)0x0);
  }
  iVar7 = *(int *)(DAT_012586dc + 0x40);
  iVar6 = *(int *)(iVar7 + 0x110);
  iVar2 = *(int *)(iVar7 + 0x114);
  iVar3 = *(int *)(iVar7 + 0x11c);
  iVar7 = *(int *)(iVar7 + 0x118);
  puVar1 = (undefined4 *)(param_1 + 0xe44);
  param_1 = 0;
  piVar5 = (int *)*puVar1;
  while (piVar5 != (int *)0x0) {
    piVar11 = (int *)piVar5[2];
    iVar8 = *piVar5;
    iVar9 = *(int *)(iVar8 + 0x84);
    piVar5 = piVar11;
    if (0 < iVar9) {
      if (iVar9 == 1) {
        FUN_00401000(((float)(*(int *)(iVar8 + 0x4c) - *(int *)(iVar8 + 0x48) >> 2) + 0.0005) *
                     1000.0);
        iVar8 = FUN_00b31c00();
        iVar8 = __alldiv((longlong)iVar8 * (longlong)iVar6,1000,0);
        param_1 = param_1 + iVar8;
      }
      else if (iVar9 == 2) {
        FUN_00401000(((float)(*(int *)(iVar8 + 0x4c) - *(int *)(iVar8 + 0x48) >> 2) + 0.0005) *
                     1000.0);
        iVar9 = FUN_00b31c00();
        iVar9 = __alldiv((longlong)iVar9 * (longlong)iVar2,1000,0);
        FUN_00401000(((float)*(int *)(iVar8 + 0x68) + 0.0005) * 1000.0);
        iVar10 = FUN_00b31c00();
        iVar10 = __alldiv((longlong)iVar10 * (longlong)iVar7,1000,0);
        iVar10 = iVar10 + iVar9;
        for (piVar11 = *(int **)(iVar8 + 0x48);
            (param_1 = param_1 + iVar10, *(int **)(iVar8 + 0x48) <= piVar11 &&
            (piVar11 < *(int **)(iVar8 + 0x4c))); piVar11 = piVar11 + 1) {
          iVar10 = __alldiv((longlong)
                            *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar11 * 4) + 0x2b8
                                    ) * (longlong)iVar3,1000,0);
        }
      }
    }
  }
  FUN_00401000(0x43fa4001);
  iVar7 = FUN_00b31c00();
  iVar7 = iVar7 + param_1 + local_8;
  *(int *)(iVar4 + 0x15c0) = iVar7 / 1000;
  return iVar7 * 0x10624dd3;
}

