// FUN_00a5bea0 @ 00a5bea0 body=[[00a5bea0, 00a5bf44]]


void FUN_00a5bea0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  switch(param_2) {
  case 0x4b:
    FUN_009a1e10();
    return;
  default:
    FUN_009ecfa0(param_1,param_2);
    return;
  case 0x84:
    FUN_009a1750(in_ECX + 0x68,0);
    return;
  case 0x8a:
    FUN_009a1de0();
    return;
  case 0xb4:
    FUN_009a1750(in_ECX + 0xa0,0);
    return;
  case 0xb5:
    FUN_009a1750(in_ECX + 0xbc,0);
    return;
  case 0xbf:
    FUN_009a1750(in_ECX + 300,0);
    return;
  }
}

