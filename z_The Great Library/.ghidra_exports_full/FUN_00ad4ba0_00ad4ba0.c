// FUN_00ad4ba0 @ 00ad4ba0 body=[[00ad4ba0, 00ad4c76]]


uint FUN_00ad4ba0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(in_ECX + 0x84);
  piVar6 = (int *)0x0;
  if (uVar2 != 0) {
    param_1 = param_1 * 0x20;
    uVar8 = 0;
    do {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x80) + uVar8 * 4);
      iVar4 = *(int *)(iVar3 + 0x1c);
      if ((*(int *)(iVar4 + 4 + param_1) != 0) &&
         (puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar4 + 4 + param_1) + 0x10))(),
         puVar5 != (undefined4 *)0x0)) {
        uVar7 = 0;
        if (puVar5[1] != 0) {
          piVar6 = (int *)*puVar5;
          do {
            if (*(int *)(*piVar6 + 0x20) == param_2) goto LAB_00ad4c5f;
            uVar7 = uVar7 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar7 < (uint)puVar5[1]);
        }
      }
      iVar3 = *(int *)(iVar3 + 0x1c);
      piVar6 = (int *)(iVar3 + 8 + param_1);
      if ((*(int *)(iVar3 + 0xc + param_1) != 0) &&
         (piVar6 = (int *)(**(code **)(*(int *)piVar6[1] + 0x10))(), piVar6 != (int *)0x0)) {
        puVar1 = (uint *)(piVar6 + 1);
        uVar7 = 0;
        if (*puVar1 != 0) {
          piVar6 = (int *)*piVar6;
          do {
            if (*(int *)(*piVar6 + 0x20) == param_2) {
LAB_00ad4c5f:
              return CONCAT31((int3)((uint)piVar6 >> 8),1);
            }
            uVar7 = uVar7 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar7 < *puVar1);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return (uint)piVar6 & 0xffffff00;
}

