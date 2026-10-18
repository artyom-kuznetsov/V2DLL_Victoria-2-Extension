// FUN_0045eed0 @ 0045eed0 body=[[0045eed0, 0045ef39]]


void FUN_0045eed0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0xda) {
    if (param_2 == 0xd9) {
      FUN_009a1750(in_ECX + 0x24,0);
      return;
    }
    if (param_2 == 0x1a) {
      FUN_009a1750(in_ECX + 8,0);
      return;
    }
    if (param_2 == 0x58) {
      (**(code **)(*(int *)(in_ECX + 0x5c) + 0xc))(param_1);
      return;
    }
  }
  else if (param_2 == 0x3b6) {
    (**(code **)(*(int *)(in_ECX + 0x40) + 0xc))(param_1);
  }
  return;
}

