// FUN_00414d70 @ 00414d70 body=[[00414d70, 00414e15]]


void FUN_00414d70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_48 [17];
  
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  if (0 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar4 * 4);
      if (*piVar1 != 0) {
        piVar1 = (int *)*piVar1;
        piVar1[1] = 0;
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 0x80))();
          (**(code **)(*(int *)*piVar1 + 0x38))();
          FUN_00408b00();
          FUN_00408b00();
          (**(code **)(*(int *)*piVar1 + 0xa4))(auStack_48);
          puVar5 = auStack_48;
          puVar6 = (undefined4 *)(*piVar1 + 0x94);
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        **(undefined4 **)(*(int *)(param_1 + 8) + iVar4 * 4) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

