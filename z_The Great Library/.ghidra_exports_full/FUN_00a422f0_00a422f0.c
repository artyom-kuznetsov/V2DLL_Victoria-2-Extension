// FUN_00a422f0 @ 00a422f0 body=[[00a422f0, 00a423b6]]


undefined4 FUN_00a422f0(int param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined1 local_8 [4];
  
  iVar6 = *(int *)(in_ECX + 0x14c) - *(int *)(in_ECX + 0x148) >> 2;
  if (0 < iVar6) {
    iVar7 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x148) + iVar7 * 4) + 0x184))(param_1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  iVar6 = (int)*(short *)(*(int *)(in_ECX + 0x13c) + 0xbc);
  puVar2 = *(undefined1 **)(*(int *)(&DAT_013f0400 + param_1 * 0x10) + 8 + iVar6 * 0x14);
  puVar1 = (uint *)(*(int *)(&DAT_013f0400 + param_1 * 0x10) + 4 + iVar6 * 0x14);
  if (local_8 < puVar2) {
    puVar3 = (undefined1 *)*puVar1;
    if (puVar3 <= local_8) {
      if (puVar2 == (undefined1 *)puVar1[2]) {
        FUN_00a513f0();
      }
      puVar4 = (undefined4 *)puVar1[1];
      piVar5 = (int *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(*puVar1 + ((int)local_8 - (int)puVar3 >> 2) * 4);
        puVar1[1] = puVar1[1] + 4;
        return CONCAT31((int3)((uint)puVar4 >> 8),1);
      }
      goto LAB_00a423a8;
    }
  }
  if (puVar2 == (undefined1 *)puVar1[2]) {
    FUN_00a513f0();
  }
  piVar5 = (int *)puVar1[1];
  if (piVar5 != (int *)0x0) {
    *piVar5 = in_ECX;
  }
LAB_00a423a8:
  puVar1[1] = puVar1[1] + 4;
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}

