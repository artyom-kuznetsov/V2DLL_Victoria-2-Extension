// FUN_00a2f770 @ 00a2f770 body=[[00a2f770, 00a2f88c]]


void FUN_00a2f770(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0x59) {
    if (param_2 == 0x58) {
      FUN_009a1750(in_ECX + 0x120,0);
      return;
    }
    switch(param_2) {
    case 0x1e:
      FUN_009a1de0();
      return;
    case 0x24:
      FUN_009a1750(in_ECX + 0x94,0);
      return;
    case 0x2e:
      FUN_009a1de0();
      return;
    case 0x55:
      (**(code **)(*(int *)(in_ECX + 0xb4) + 0xc))(param_1);
      return;
    case 0x57:
      FUN_009a1de0();
      return;
    }
  }
  else {
    switch(param_2) {
    case 0xb5:
      FUN_009a1de0();
      return;
    case 0xd9:
      FUN_009a1c10();
      return;
    case 0x132:
      FUN_009a1750(in_ECX + 0x100,0);
      return;
    case 0x133:
      (**(code **)(*(int *)(in_ECX + 0xd0) + 0xc))(param_1);
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

