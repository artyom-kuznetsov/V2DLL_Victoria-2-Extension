// FUN_00b2d410 @ 00b2d410 body=[[00b2d410, 00b2d4a0]]


undefined4
FUN_00b2d410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined1 local_34 [32];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  FUN_00b2f880(local_34);
  uVar1 = FUN_00b2d2b0(param_1,param_2,param_3,param_4,param_5,local_34,&local_8,&local_c,&local_10,
                       &local_14,param_6);
  FUN_00b2f8b0(local_34,*(undefined4 *)(param_6 + 4));
  (**(code **)(param_6 + 4))(local_8);
  (**(code **)(param_6 + 4))(local_c);
  (**(code **)(param_6 + 4))(local_10);
  (**(code **)(param_6 + 4))(local_14);
  return uVar1;
}

