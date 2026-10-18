// FUN_006cc4d0 @ 006cc4d0 body=[[006cc4d0, 006cc532]]


void FUN_006cc4d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8;
  
  for (; 1 < param_2 - (int)param_1 >> 2; param_2 = param_2 + -4) {
    local_8 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    FUN_006cd300(param_1,0,(param_2 + -4) - (int)param_1 >> 2,&local_8,param_3,param_4);
  }
  return;
}

