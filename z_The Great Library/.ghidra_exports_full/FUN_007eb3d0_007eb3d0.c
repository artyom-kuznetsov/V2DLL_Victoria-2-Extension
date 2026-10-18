// FUN_007eb3d0 @ 007eb3d0 body=[[007eb3d0, 007eb4ca]]


void FUN_007eb3d0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0x271) {
    if (param_2 == 0x270) {
      FUN_009a1bb0(in_ECX + 0xb5);
      return;
    }
    if (param_2 == 0x24) {
      FUN_009a1750(in_ECX + 0x98,0);
      return;
    }
    if (param_2 == 0x2e) {
      FUN_009a1de0();
      return;
    }
    if (param_2 == 0x6c) {
      FUN_009a1de0();
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x271:
      FUN_009a1bb0(in_ECX + 0xb4);
      return;
    case 0x272:
      FUN_009a1de0();
      return;
    case 0x273:
      FUN_009a1de0();
      return;
    case 0x274:
      FUN_009a1de0();
      return;
    case 0x275:
      FUN_009a1de0();
      return;
    case 0x276:
      FUN_009a1de0();
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

