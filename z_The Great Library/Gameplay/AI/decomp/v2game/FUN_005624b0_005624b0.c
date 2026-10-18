// FUN_005624b0 @ 005624b0 body=[[005624b0, 00562531]]


void FUN_005624b0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0x4a2) {
    if (param_2 == 0x4a1) {
      (**(code **)(*(int *)(in_ECX + 0x400) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0x58) {
      (**(code **)(*(int *)(in_ECX + 0x70) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0x455) {
      (**(code **)(*(int *)(in_ECX + 0x54) + 0xc))(param_1);
      return;
    }
  }
  else if (param_2 == 0xa21) {
    FUN_009a1bb0(in_ECX + 0x434);
    return;
  }
  FUN_0044bef0(param_1,param_2);
  return;
}

