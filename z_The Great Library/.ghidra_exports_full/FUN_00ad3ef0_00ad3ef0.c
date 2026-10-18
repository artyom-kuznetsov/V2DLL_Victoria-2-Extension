// FUN_00ad3ef0 @ 00ad3ef0 body=[[00ad3ef0, 00ad3f2b]]


void FUN_00ad3ef0(int param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = *(undefined4 *)(*in_ECX + param_1 * 4);
  param_1 = uVar1;
  FUN_00b09030(&param_1);
  FUN_00b09030(&param_1);
  (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(uVar1,0);
  return;
}

