// FUN_008d2340 @ 008d2340 body=[[008d2340, 008d2375]]


uint FUN_008d2340(uint param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(param_1 + 0x10);
  if ((*piVar1 != 0) &&
     (param_1 = *(int *)(in_ECX + 0x1c) * 1000,
     (int)param_1 < *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar1 * 4) + 0x38))) {
    return CONCAT31((int3)(param_1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

