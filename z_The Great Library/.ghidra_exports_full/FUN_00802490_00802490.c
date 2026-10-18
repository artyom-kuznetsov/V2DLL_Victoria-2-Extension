// FUN_00802490 @ 00802490 body=[[00802490, 008024d3] [008024e0, 0080268c]]


void FUN_00802490(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = DAT_012588e8;
  iVar4 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  iVar6 = 1;
  if (1 < iVar4) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 * 4) + 0xc);
      uVar5 = FUN_009b6df0();
      if (((*(int *)(iVar1 + 0x164) != 0) && (iVar1 = **(int **)(iVar1 + 0x15c), iVar1 != 0)) &&
         (cVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) +
                                                  *(int *)(iVar2 + 0xb60) * 0x10) +
                                         *(int *)(iVar1 + 0x6c) * 4) + 0x34))(), cVar3 != '\0')) {
        uVar5 = FUN_009b6df0();
      }
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar6 * 4) = uVar5;
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 4) = uVar5;
    } while (iVar6 < iVar4);
  }
  return;
}

