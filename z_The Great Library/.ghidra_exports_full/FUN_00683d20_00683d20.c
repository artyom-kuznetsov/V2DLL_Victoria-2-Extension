// FUN_00683d20 @ 00683d20 body=[[00683d20, 00683d35] [00683d40, 00683dea]]


uint FUN_00683d20(int param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  
  puVar5 = param_2;
  uVar7 = *param_2;
  while ((*param_2 <= uVar7 && (uVar7 < param_2[1]))) {
    puVar3 = *(uint **)(uVar7 + 4);
    uVar7 = uVar7 + 8;
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar3 * 4);
    piVar8 = *(int **)(iVar4 + 0x9d8);
    puVar5 = puVar3;
    while ((*(int **)(iVar4 + 0x9d8) <= piVar8 && (piVar8 < *(int **)(iVar4 + 0x9dc)))) {
      puVar5 = *(uint **)(*(int *)(param_1 + 0xacc) + *piVar8 * 4);
      puVar2 = puVar5 + 0x4d;
      piVar8 = piVar8 + 1;
      if ((uint *)*puVar2 != puVar3) {
        puVar5 = (uint *)*param_3;
        while (((uint *)*param_3 <= puVar5 && (puVar5 < (uint *)param_3[1]))) {
          puVar6 = puVar5 + 2;
          puVar1 = puVar5 + 1;
          puVar5 = puVar6;
          if ((uint *)*puVar1 == (uint *)*puVar2) {
            return CONCAT31((int3)((uint)puVar6 >> 8),1);
          }
        }
      }
    }
  }
  return (uint)puVar5 & 0xffffff00;
}

