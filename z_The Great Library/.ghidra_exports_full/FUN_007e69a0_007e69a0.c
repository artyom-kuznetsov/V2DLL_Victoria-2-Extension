// FUN_007e69a0 @ 007e69a0 body=[[007e69a0, 007e69fb]]


void FUN_007e69a0(undefined4 param_1,int param_2)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 != 0x2e) {
    FUN_00a20b80(param_1,param_2);
    return;
  }
  local_c = 0;
  local_8 = 0;
  FUN_009a1f40(&local_c);
  *(undefined4 *)(in_ECX + 0xa0) = local_c;
  *(undefined4 *)(in_ECX + 0xa4) = local_8;
  return;
}

