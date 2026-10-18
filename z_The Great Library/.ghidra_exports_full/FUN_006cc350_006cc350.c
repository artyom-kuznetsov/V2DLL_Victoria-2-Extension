// FUN_006cc350 @ 006cc350 body=[[006cc350, 006cc3ba]]


void FUN_006cc350(int param_1,int param_2,undefined4 param_3)

{
  undefined2 local_10 [2];
  int local_c;
  int local_8;
  
  if (1 < param_2 - param_1 >> 1) {
    local_8 = param_2 - param_1 >> 1;
    local_c = local_8 / 2;
    while (0 < local_c) {
      local_c = local_c + -1;
      local_10[0] = *(undefined2 *)(param_1 + local_c * 2);
      FUN_006cd960(param_1,local_c,local_8,local_10,param_3);
    }
  }
  return;
}

