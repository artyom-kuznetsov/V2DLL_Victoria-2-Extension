// FUN_007e8fe0 @ 007e8fe0 body=[[007e8fe0, 007e9075]]


void FUN_007e8fe0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0x5a) {
    if (param_2 == 0x59) {
      FUN_009a1750(in_ECX + 500,0);
      return;
    }
    if (param_2 == 0x25) {
      FUN_009a1750(in_ECX + 0x1c0,0);
      return;
    }
    if (param_2 == 0x26) {
      FUN_009a1750(in_ECX + 0x1a4,0);
      return;
    }
  }
  else {
    if (param_2 == 0x192) {
      FUN_009a1bb0(in_ECX + 0x244);
      return;
    }
    if (param_2 == 0x193) {
      FUN_009a1bb0(in_ECX + 0x245);
      return;
    }
  }
  FUN_00a28bb0(param_1,param_2);
  return;
}

