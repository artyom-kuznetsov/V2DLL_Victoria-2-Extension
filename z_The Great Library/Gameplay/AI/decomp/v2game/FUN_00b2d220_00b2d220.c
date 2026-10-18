// FUN_00b2d220 @ 00b2d220 body=[[00b2d220, 00b2d2ab]]


undefined4 FUN_00b2d220(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  uVar1 = FUN_00b2ce20(param_1,param_2,&local_8,&local_c,&local_10,&local_14,&local_18,&local_1c,
                       param_3,param_4);
  (**(code **)(param_4 + 4))(local_8);
  (**(code **)(param_4 + 4))(local_c);
  (**(code **)(param_4 + 4))(local_10);
  (**(code **)(param_4 + 4))(local_14);
  (**(code **)(param_4 + 4))(local_18);
  (**(code **)(param_4 + 4))(local_1c);
  return uVar1;
}

