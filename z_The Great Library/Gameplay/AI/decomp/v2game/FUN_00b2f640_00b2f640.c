// FUN_00b2f640 @ 00b2f640 body=[[00b2f640, 00b2f69b]]


undefined4
FUN_00b2f640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10 [3];
  
  iVar2 = 0;
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  uVar1 = FUN_00b2f370(param_1,param_2,param_3,param_4,param_5,param_6,local_10);
  do {
    (**(code **)(param_6 + 4))(local_10[iVar2]);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return uVar1;
}

