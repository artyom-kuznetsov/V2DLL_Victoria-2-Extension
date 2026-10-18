// FUN_00592800 @ 00592800 body=[[00592800, 0059282d]]


void FUN_00592800(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 != 0x1aa) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  (**(code **)(*(int *)(in_ECX + 0x3c) + 0xc))(param_1);
  return;
}

