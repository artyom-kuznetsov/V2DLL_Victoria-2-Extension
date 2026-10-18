// FUN_00a5ea90 @ 00a5ea90 body=[[00a5ea90, 00a5eaf4]]


short * FUN_00a5ea90(short *param_1)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)(in_ECX + 0x198);
  local_8 = *(undefined4 *)(in_ECX + 0x19c);
  (**(code **)(**(int **)(in_ECX + 0x1bc) + 0x34))
            (in_ECX + 0x150,*(undefined4 *)(in_ECX + 0x1a0),*(undefined4 *)(in_ECX + 0x1a4),&local_c
             ,param_1);
  if ((int)*param_1 < *(int *)(in_ECX + 0x1a0)) {
    *param_1 = *(short *)(in_ECX + 0x1a0);
  }
  return param_1;
}

