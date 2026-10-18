// FUN_009ac890 @ 009ac890 body=[[009ac890, 009ac907]]


undefined4 FUN_009ac890(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int in_ECX;
  undefined8 local_18 [2];
  
  uVar1 = FUN_009ad930();
  piVar2 = (int *)FUN_00a72680(param_2,in_ECX + 0x24);
  (**(code **)(*piVar2 + 8))(local_18,param_3);
  FUN_009ab9f0(uVar1,param_1,param_2,*param_3,local_18[0]);
  return param_1;
}

