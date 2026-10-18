// FUN_00a56130 @ 00a56130 body=[[00a56130, 00a5621d]]


void FUN_00a56130(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0x5a) {
    if (param_2 == 0x59) {
      FUN_009a1750(in_ECX + 0x5c,0);
      return;
    }
    switch(param_2) {
    case 0x25:
      FUN_009a1750(in_ECX + 0xb0,0);
      return;
    case 0x26:
      FUN_009a1750(in_ECX + 0xcc,0);
      return;
    case 0x2e:
      FUN_009a1e10();
      return;
    case 0x55:
      (**(code **)(*(int *)(in_ECX + 0x78) + 0xc))(param_1);
      return;
    }
  }
  else {
    if (param_2 == 0x96) {
      FUN_009a1bb0(in_ECX + 0x120);
      return;
    }
    if (param_2 == 0x133) {
      (**(code **)(*(int *)(in_ECX + 0x94) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0x166) {
      FUN_009a1bb0(in_ECX + 0x174);
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

