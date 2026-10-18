// FUN_006cd6e0 @ 006cd6e0 body=[[006cd6e0, 006cd73c]]


void FUN_006cd6e0(undefined4 *param_1,int param_2,undefined1 param_3)

{
  undefined4 local_8;
  
  for (; 1 < param_2 - (int)param_1 >> 2; param_2 = param_2 + -4) {
    local_8 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    FUN_006cdda0(param_1,0,(param_2 + -4) - (int)param_1 >> 2,&local_8,param_3);
  }
  return;
}

