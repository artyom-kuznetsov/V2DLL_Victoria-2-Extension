// FUN_009fc230 @ 009fc230 body=[[009fc230, 009fc2db]]


void FUN_009fc230(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  switch(param_2) {
  case 0x1a:
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  case 0xd4:
    FUN_009a1750(in_ECX + 0x90,0);
    return;
  case 0xd5:
    FUN_0072d580();
    return;
  case 0xe5:
    FUN_009a1750(in_ECX + 0xac,0);
    return;
  }
  if (param_2 != 0xe8) {
    if (param_2 != 0xe9) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_009a1750(in_ECX + 0x58,0);
    return;
  }
  FUN_009a1750(in_ECX + 0x3c,0);
  return;
}

