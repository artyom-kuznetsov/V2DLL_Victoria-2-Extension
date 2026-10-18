// FUN_006cdc60 @ 006cdc60 body=[[006cdc60, 006cdca9]]


void FUN_006cdc60(undefined4 *param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  uVar1 = FUN_00a3c430();
  local_8 = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -4) = *param_1;
  FUN_006cdb90(param_1,0,(param_2 + -4) - (int)param_1 >> 2,&local_8,param_3,uVar1);
  return;
}

