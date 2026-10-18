// FUN_00a35330 @ 00a35330 body=[[00a35330, 00a35372]]


void FUN_00a35330(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 0x3c,0);
    return;
  }
  if (param_2 != 0xeb) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  FUN_005e5a20(param_1,in_ECX + 0x58);
  return;
}

