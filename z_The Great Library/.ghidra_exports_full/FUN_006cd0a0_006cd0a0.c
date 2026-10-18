// FUN_006cd0a0 @ 006cd0a0 body=[[006cd0a0, 006cd100]]


void FUN_006cd0a0(undefined2 *param_1,int param_2,undefined4 param_3)

{
  undefined2 local_8 [2];
  
  for (; 1 < param_2 - (int)param_1 >> 1; param_2 = param_2 + -2) {
    local_8[0] = *(undefined2 *)(param_2 + -2);
    *(undefined2 *)(param_2 + -2) = *param_1;
    FUN_006cd960(param_1,0,(param_2 + -2) - (int)param_1 >> 1,local_8,param_3);
  }
  return;
}

