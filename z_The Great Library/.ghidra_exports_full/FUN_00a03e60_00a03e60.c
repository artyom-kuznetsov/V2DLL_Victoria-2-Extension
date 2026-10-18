// FUN_00a03e60 @ 00a03e60 body=[[00a03e60, 00a03ef3]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a03e60(undefined4 param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  if ((_DAT_013f29dc & 1) == 0) {
    _DAT_013f29dc = _DAT_013f29dc | 1;
    _DAT_013f29d8 = &PTR_FUN_00e38318;
    _atexit((_func_4879 *)&LAB_00c873c0);
  }
  if (param_2 == 0xd9) {
    FUN_009a1bb0(in_ECX + 0x80);
    return;
  }
  if (param_2 - 0xcfU < 0x84) {
    piVar1 = (int *)FUN_009f3a90(param_2 - 0xcfU);
  }
  else {
    piVar1 = (int *)0x0;
  }
  *(int **)(in_ECX + 0x84) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(param_1);
    return;
  }
  FUN_009a2620(param_1,param_2);
  return;
}

