// FUN_00522910 @ 00522910 body=[[00522910, 00522b3d] [00522b40, 00522c0a] [00522c11, 00522ce9]]


/* WARNING: Removing unreachable block (ram,0x00522b3c) */
/* WARNING: Removing unreachable block (ram,0x00522b43) */
/* WARNING: Removing unreachable block (ram,0x00522b50) */
/* WARNING: Removing unreachable block (ram,0x00522b68) */
/* WARNING: Removing unreachable block (ram,0x00522b8d) */
/* WARNING: Removing unreachable block (ram,0x00522bcd) */
/* WARNING: Removing unreachable block (ram,0x00522bd2) */
/* WARNING: Removing unreachable block (ram,0x00522bd7) */
/* WARNING: Removing unreachable block (ram,0x00522bdb) */
/* WARNING: Removing unreachable block (ram,0x00522bdf) */
/* WARNING: Removing unreachable block (ram,0x00522be1) */
/* WARNING: Removing unreachable block (ram,0x00522be5) */
/* WARNING: Removing unreachable block (ram,0x00522be8) */
/* WARNING: Removing unreachable block (ram,0x00522bf7) */
/* WARNING: Removing unreachable block (ram,0x00522b40) */
/* WARNING: Removing unreachable block (ram,0x00522c05) */

undefined4 FUN_00522910(int param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9e7e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar5 = FUN_00523130(param_1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  if (cVar5 != '\0') {
    piVar6 = (int *)FUN_00522820(param_1,*(undefined4 *)(param_1 + 0x1c),
                                 *(undefined4 *)(param_1 + 0x20));
    param_3 = *piVar6;
    param_4 = piVar6[1];
  }
  iVar1 = *(int *)(DAT_012588e8 + 0xb60);
  bVar8 = *(int *)(param_1 + 0x20) == iVar1;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    FUN_0054c600(*(undefined4 *)(param_1 + 0xe8c),*(undefined4 *)(param_1 + 0xe90));
    piVar6 = *(int **)(param_1 + 0xe8c);
    iVar3 = param_3;
    iVar4 = param_4;
    while ((((param_4 = iVar4, param_3 = iVar3, *(int **)(param_1 + 0xe8c) <= piVar6 &&
             (piVar6 < *(int **)(param_1 + 0xe90))) && (-1 < param_4)) &&
           ((0 < param_4 || (param_3 != 0))))) {
      iVar2 = *piVar6;
      piVar6 = piVar6 + 1;
      cVar5 = FUN_00523130(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      iVar3 = param_3;
      iVar4 = param_4;
      if (cVar5 != '\0') {
        piVar7 = (int *)FUN_00522820(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc)
                                    );
        iVar3 = *piVar7;
        iVar4 = piVar7[1];
        if ((iVar1 == *(int *)(iVar2 + 0xc)) && ((iVar3 != param_3 || (iVar4 != param_4)))) {
          bVar8 = true;
        }
      }
    }
    FUN_0054c6e0(*(int *)(param_1 + 0xe8c),*(int *)(param_1 + 0xe90),
                 *(int *)(param_1 + 0xe90) - *(int *)(param_1 + 0xe8c) >> 2);
    if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
      local_8 = 0;
      FUN_009beeb0();
      FUN_0054c7e0(0,0);
      local_8 = 0xffffffff;
      if ((-1 < param_4) &&
         (((0 < param_4 || (param_3 != 0)) &&
          (cVar5 = FUN_00523130(param_1,0x2d2d2d,0), cVar5 != '\0')))) {
        piVar6 = (int *)FUN_00522820(param_1,0x2d2d2d,0);
        param_3 = *piVar6;
        param_4 = piVar6[1];
      }
    }
  }
  if (((bVar8) && (param_2 != '\0')) && (*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd7c) == 2)) {
    FUN_0060ca30();
  }
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}

