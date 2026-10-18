// FUN_00a3c390 @ 00a3c390 body=[[00a3c390, 00a3c3ef]]


void FUN_00a3c390(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x24) {
    FUN_009a1750(in_ECX + 0x94,0);
    return;
  }
  if (param_2 != 0x2e) {
    if (param_2 != 0x4b) {
      FUN_00a20b80(param_1,param_2);
      return;
    }
    FUN_00a3c440(param_1,in_ECX + 200);
    return;
  }
  FUN_00a3c440(param_1,in_ECX + 0xb8);
  return;
}

