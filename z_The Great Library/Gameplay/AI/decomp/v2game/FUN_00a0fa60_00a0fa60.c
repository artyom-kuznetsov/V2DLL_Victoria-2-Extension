// FUN_00a0fa60 @ 00a0fa60 body=[[00a0fa60, 00a0fabe]]


void FUN_00a0fa60(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xe7) {
    (**(code **)(*(int *)(in_ECX + 0x74) + 0xc))(param_1);
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

