// FUN_00915fc0 @ 00915fc0 body=[[00915fc0, 0091601b]]


void FUN_00915fc0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x8cb) {
    FUN_009a1bb0(in_ECX + 0x68);
    return;
  }
  if (param_2 != 0x9e4) {
    if (param_2 != 0x8d9) {
      FUN_00911470(param_1,param_2);
      return;
    }
    (**(code **)(*(int *)(in_ECX + 0x28) + 0xc))(param_1);
    return;
  }
  FUN_009a1bb0(in_ECX + 0x69);
  return;
}

