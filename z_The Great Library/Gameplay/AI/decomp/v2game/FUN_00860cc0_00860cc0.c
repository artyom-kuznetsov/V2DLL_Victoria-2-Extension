// FUN_00860cc0 @ 00860cc0 body=[[00860cc0, 00860d22]]


void FUN_00860cc0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x1fb) {
    (**(code **)(*(int *)(in_ECX + 0x60) + 0xc))(param_1);
    return;
  }
  if (param_2 != 0x4f0) {
    if (param_2 != 0xa91) {
      FUN_009a0f40();
      return;
    }
    (**(code **)(*(int *)(in_ECX + 8) + 0xc))(param_1);
    return;
  }
  FUN_009a1d40();
  return;
}

