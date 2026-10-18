// FUN_00a2d830 @ 00a2d830 body=[[00a2d830, 00a2d89f]]


void FUN_00a2d830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x6c))();
  if ((char)in_ECX[0x6f] != '\0') {
    FUN_00a51ea0(in_ECX[0x4f],in_ECX + 99,in_ECX[0x71],in_ECX[0x73]);
    return;
  }
  (**(code **)(*(int *)in_ECX[0x3e] + 0x20))(param_1,param_2,param_3,param_4,param_5,in_ECX[0x5b]);
  return;
}

