// FUN_00418990 @ 00418990 body=[[00418990, 00418a23]]


void FUN_00418990(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_48 [17];
  
  piVar2 = param_1;
  piVar1 = param_1 + 1;
  iVar3 = *param_1;
  param_1 = (int *)0x0;
  if (0 < (int)(*piVar1 - iVar3 & 0xfffffff8U)) {
    do {
      piVar1 = (int *)(*piVar2 + (int)param_1 * 8);
      piVar1[1] = 0;
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x80))();
        (**(code **)(*(int *)*piVar1 + 0x38))();
        FUN_00408b00();
        FUN_00408b00();
        (**(code **)(*(int *)*piVar1 + 0xa4))(local_48);
        puVar4 = local_48;
        puVar5 = (undefined4 *)(*piVar1 + 0x94);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < piVar2[1] - *piVar2 >> 3);
  }
  piVar2[4] = 0;
  return;
}

