// FUN_00418870 @ 00418870 body=[[00418870, 00418904]]


/* WARNING: Removing unreachable block (ram,0x004188e0) */

void FUN_00418870(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = param_1;
  piVar2 = param_1 + 1;
  iVar1 = *param_1;
  param_1 = (int *)0x0;
  if (0 < (int)(*piVar2 - iVar1 & 0xfffffff8U)) {
    do {
      piVar2 = *(int **)(*piVar3 + (int)param_1 * 8);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x38))();
        uVar4 = (**(code **)(*piVar2 + 0x44))();
        FUN_009962f0(uVar4);
        *(undefined4 *)(*piVar3 + (int)param_1 * 8) = 0;
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < piVar3[1] - *piVar3 >> 3);
  }
  if (*piVar3 != piVar3[1]) {
    piVar3[1] = *piVar3;
  }
  piVar3[4] = 0;
  return;
}

