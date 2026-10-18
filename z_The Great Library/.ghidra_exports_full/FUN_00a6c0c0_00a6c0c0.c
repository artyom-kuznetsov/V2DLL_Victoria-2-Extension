// FUN_00a6c0c0 @ 00a6c0c0 body=[[00a6c0c0, 00a6c12e]]


void FUN_00a6c0c0(undefined4 param_1)

{
  int in_ECX;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  
  local_10 = (int)(short)param_1;
  *(undefined4 *)(in_ECX + 0x98) = param_1;
  local_c = (int)*(short *)(in_ECX + 0x9a);
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0xcc))(&local_10);
  if (*(int *)(in_ECX + 0xa8) != 0) {
    uStack_14 = CONCAT22(param_1._2_2_ + 10,(short)param_1 + 0x1e);
    FUN_009e7350(uStack_14);
  }
  return;
}

