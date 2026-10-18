// FUN_00401280 @ 00401280 body=[[00401280, 004012db]]


int * FUN_00401280(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00408be0(param_1);
  uVar2 = 0;
  if ((*(byte *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1) + 0x34))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | uVar2;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_00401120(uVar2,0);
  }
  return param_1;
}

