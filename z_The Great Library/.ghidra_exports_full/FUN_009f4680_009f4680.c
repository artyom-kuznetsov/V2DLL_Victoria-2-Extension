// FUN_009f4680 @ 009f4680 body=[[009f4680, 009f470f]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f4680(undefined4 param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  if ((_DAT_013f29e4 & 1) == 0) {
    _DAT_013f29e4 = _DAT_013f29e4 | 1;
    _DAT_013f29e0 = &PTR_FUN_00e38318;
    _atexit((_func_4879 *)&LAB_00c87260);
  }
  if (param_2 == 0x14a) {
    FUN_0072d580();
    return;
  }
  if (param_2 - 0xcfU < 0x84) {
    piVar1 = (int *)FUN_009f3a90(param_2 - 0xcfU);
  }
  else {
    piVar1 = (int *)0x0;
  }
  *(int **)(in_ECX + 100) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(param_1);
    return;
  }
  FUN_009a2620(param_1,param_2);
  return;
}

