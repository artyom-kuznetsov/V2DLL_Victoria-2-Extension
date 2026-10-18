// FUN_00561330 @ 00561330 body=[[00561330, 005613e9]]


void FUN_00561330(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0x4f1) {
    if (param_2 == 0x4f0) {
      FUN_009a1bb0(in_ECX + 0x3c);
      return;
    }
    if (param_2 == 0x55) {
      (**(code **)(*(int *)(in_ECX + 0x40) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0x1ea) {
      FUN_009a1bb0(in_ECX + 0x2a);
      return;
    }
    if (param_2 == 0x2ad) {
      FUN_009a1d40();
      return;
    }
  }
  else {
    if (param_2 == 0x831) {
      FUN_009a1bb0(in_ECX + 0x28);
      return;
    }
    if (param_2 == 0x832) {
      FUN_009a1bb0(in_ECX + 0x29);
      return;
    }
    if (param_2 == 0x8f8) {
      FUN_009a1bb0(in_ECX + 0x3d);
      return;
    }
  }
  FUN_009a0f40();
  return;
}

