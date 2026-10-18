// FUN_009ff5b0 @ 009ff5b0 body=[[009ff5b0, 009ff5f6]]


void FUN_009ff5b0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  }
  if (param_2 != 0xd4) {
    FUN_00a09cb0(param_1,param_2);
    return;
  }
  FUN_009a1750(in_ECX + 0x90,0);
  return;
}

