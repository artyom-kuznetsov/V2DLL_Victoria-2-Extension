// FUN_00b00a40 @ 00b00a40 body=[[00b00a40, 00b00b1b]]


undefined4 FUN_00b00a40(undefined4 param_1,uint param_2,undefined4 param_3)

{
  short *psVar1;
  short *psVar2;
  int in_ECX;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  psVar1 = (short *)(**(int **)(in_ECX + 4) + (param_2 + 1 & 0xffff) * 0xc);
  local_20 = (float)(int)*psVar1 * 3.051851e-05;
  local_1c = (float)(int)psVar1[1] * 3.051851e-05;
  local_18 = (float)(int)psVar1[2] * 3.051851e-05;
  psVar2 = (short *)(**(int **)(in_ECX + 4) + (param_2 & 0xffff) * 0xc);
  local_14 = (float)(int)psVar1[3] * 3.051851e-05;
  local_10 = (float)(int)*psVar2 * 3.051851e-05;
  local_c = (float)(int)psVar2[1] * 3.051851e-05;
  local_8 = (float)(int)psVar2[2] * 3.051851e-05;
  local_4 = (float)(int)psVar2[3] * 3.051851e-05;
  FUN_00adff20(param_1,&local_20,param_3);
  return param_1;
}

