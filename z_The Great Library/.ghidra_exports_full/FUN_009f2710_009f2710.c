// FUN_009f2710 @ 009f2710 body=[[009f2710, 009f2755]]


void FUN_009f2710(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xe0) {
    FUN_009a1750(in_ECX + 0x24,0);
    return;
  }
  if (param_2 != 0xe1) {
    FUN_009a0f40();
    return;
  }
  FUN_009a1750(in_ECX + 8,0);
  return;
}

