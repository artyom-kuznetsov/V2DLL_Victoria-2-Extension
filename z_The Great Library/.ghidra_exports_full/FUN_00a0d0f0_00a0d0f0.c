// FUN_00a0d0f0 @ 00a0d0f0 body=[[00a0d0f0, 00a0d136]]


void FUN_00a0d0f0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xd9) {
    FUN_009a1bb0(in_ECX + 0x90);
    return;
  }
  if (param_2 != 0xe0) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  FUN_009a1750(in_ECX + 0x74,0);
  return;
}

