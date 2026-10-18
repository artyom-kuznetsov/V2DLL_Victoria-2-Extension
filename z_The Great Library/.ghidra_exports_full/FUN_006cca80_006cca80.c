// FUN_006cca80 @ 006cca80 body=[[006cca80, 006ccaf0]]


void FUN_006cca80(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (1 < param_2 - param_1 >> 2) {
    uVar1 = FUN_00a3c430();
    local_8 = param_2 - param_1 >> 2;
    local_c = local_8 / 2;
    while (0 < local_c) {
      local_c = local_c + -1;
      local_10 = *(undefined4 *)(param_1 + local_c * 4);
      FUN_006cdb90(param_1,local_c,local_8,&local_10,param_3,uVar1);
    }
  }
  return;
}

