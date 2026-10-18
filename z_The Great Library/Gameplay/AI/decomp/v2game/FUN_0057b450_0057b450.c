// FUN_0057b450 @ 0057b450 body=[[0057b450, 0057b4a8]]


void FUN_0057b450(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x455) {
    FUN_009a1d40();
    return;
  }
  if (param_2 != 0x82c) {
    if (param_2 != 0x83c) {
      FUN_009a0f40();
      return;
    }
    FUN_009a1bb0(in_ECX + 0x10);
    return;
  }
  FUN_009a1bb0(in_ECX + 0x11);
  return;
}

