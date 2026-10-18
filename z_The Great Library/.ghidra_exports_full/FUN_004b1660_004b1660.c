// FUN_004b1660 @ 004b1660 body=[[004b1660, 004b178c] [004b1790, 004b1798] [004b17a2, 004b17e5]]


uint FUN_004b1660(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined **ppuStack_38;
  int iStack_34;
  int aiStack_2c [3];
  undefined1 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b51e18;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x188) + 0x24))();
  if ((char)uVar3 == '\0') {
    ExceptionList = pvStack_14;
    return uVar3 & 0xffffff00;
  }
  iStack_34 = *(int *)(DAT_012587e4 + 4);
  iVar4 = FUN_0050e450();
  piVar6 = *(int **)(*(int *)(param_1 + 0x188) + 0x48);
  iVar7 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x188) + 0x4c) - (int)piVar6 >> 2;
  if (0 < iVar5) {
    do {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4);
      if (*(int *)(iVar1 + 0xe8) == iVar4) {
        ExceptionList = pvStack_14;
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < iVar5);
  }
  aiStack_2c[0] = 0;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_c = 0;
  ppuStack_38 = CInCountryPathFind::vftable;
  cVar2 = FUN_005b8cc0(&ppuStack_38,param_1 + 0x128,
                       *(undefined4 *)
                        (*(int *)(DAT_012588e8 + 0xacc) +
                        *(int *)(*(int *)(iStack_34 + *(int *)(param_1 + 300) * 4) + 0xbe4) * 4),
                       aiStack_2c,0);
  if (aiStack_2c[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(aiStack_2c[0]);
  }
  ExceptionList = pvStack_14;
  return (uint)(cVar2 != '\0');
}

