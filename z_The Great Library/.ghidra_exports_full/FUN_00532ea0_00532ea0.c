// FUN_00532ea0 @ 00532ea0 body=[[00532ea0, 00532f52]]


undefined8 * FUN_00532ea0(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar4 = param_1;
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x28);
  iVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x854) - *(int *)(param_1 + 0x850) >> 2;
  param_1 = 0;
  if (0 < iVar6) {
    do {
      cVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x850) + iVar7 * 4) + 0x34))();
      if ((cVar3 != '\0') &&
         (iVar2 = *(int *)(*(int *)(iVar4 + 0x850) + iVar7 * 4),
         *(char *)(*(int *)(iVar2 + 0x54) + 0x58) != '\0')) {
        param_1 = param_1 + *(int *)(iVar2 + 0x1b4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  iVar4 = __alldiv((longlong)(param_1 * 1000) *
                   (longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x2c),1000,0);
  uVar5 = iVar4 + iVar1;
  uVar8 = __alldiv(uVar5 * 0x40000000,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
  *param_2 = uVar8;
  return param_2;
}

