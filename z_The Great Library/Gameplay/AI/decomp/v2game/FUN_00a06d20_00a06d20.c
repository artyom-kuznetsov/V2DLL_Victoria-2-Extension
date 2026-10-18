// FUN_00a06d20 @ 00a06d20 body=[[00a06d20, 00a06d80]]


void FUN_00a06d20(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xd4) {
    FUN_009a1750(in_ECX + 0x90,0);
    return;
  }
  if (param_2 != 0xd9) {
    if (param_2 != 0xe7) {
      FUN_00a09cb0(param_1,param_2);
      return;
    }
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  }
  FUN_009a1bb0(in_ECX + 0xac);
  return;
}

