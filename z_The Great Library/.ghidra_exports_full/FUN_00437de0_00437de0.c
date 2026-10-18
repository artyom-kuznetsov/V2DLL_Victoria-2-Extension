// FUN_00437de0 @ 00437de0 body=[[00437de0, 00437f07]]


void FUN_00437de0(undefined4 param_1,int param_2)

{
  int in_ECX;
  undefined4 local_c;
  
  if (param_2 < 0x3bf) {
    if (param_2 == 0x3be) {
      FUN_009a1d40();
      return;
    }
    if (param_2 < 0x18a) {
      if (param_2 == 0x189) {
        FUN_009a1d40();
        return;
      }
      if (param_2 == 0x93) {
        FUN_009a1d40();
        return;
      }
      if (param_2 == 0x188) {
        FUN_009a1d40();
        return;
      }
    }
    else if (param_2 == 0x266) {
      FUN_009a1d40();
      return;
    }
  }
  else if (param_2 < 0x705) {
    if (param_2 == 0x704) {
      FUN_009a1d40();
      return;
    }
    if (param_2 == 0x618) {
      FUN_009a1c10();
      *(undefined4 *)(in_ECX + 0x4c) = local_c;
      return;
    }
    if (param_2 == 0x619) {
      FUN_009a1c10();
      *(undefined4 *)(in_ECX + 0x48) = local_c;
      return;
    }
  }
  else if (param_2 == 0x7d5) {
    FUN_009a1d40();
    return;
  }
  FUN_009a0f40();
  return;
}

