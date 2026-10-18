// FUN_006cbd00 @ 006cbd00 body=[[006cbd00, 006cbd6e]]


void FUN_006cbd00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (1 < param_2 - param_1 >> 2) {
    local_8 = param_2 - param_1 >> 2;
    local_c = local_8 / 2;
    while (0 < local_c) {
      local_c = local_c + -1;
      local_10 = *(undefined4 *)(param_1 + local_c * 4);
      FUN_006cd300(param_1,local_c,local_8,&local_10,param_3,param_4);
    }
  }
  return;
}

