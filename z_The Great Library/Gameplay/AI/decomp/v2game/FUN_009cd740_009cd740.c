// FUN_009cd740 @ 009cd740 body=[[009cd740, 009cd77f]]


void FUN_009cd740(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 0xc,0);
    return;
  }
  if (param_2 != 0x58) {
    FUN_009a0f40();
    return;
  }
  FUN_009a1bb0(in_ECX + 8);
  return;
}

