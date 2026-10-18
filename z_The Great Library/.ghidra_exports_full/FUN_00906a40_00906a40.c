// FUN_00906a40 @ 00906a40 body=[[00906a40, 00906a86]]


void FUN_00906a40(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x1aa) {
    (**(code **)(*(int *)(in_ECX + 0x58) + 0xc))(param_1);
    return;
  }
  if (param_2 != 0x72f) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  FUN_009a1750(in_ECX + 0x3c,0);
  return;
}

