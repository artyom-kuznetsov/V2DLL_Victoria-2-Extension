// FUN_004648c0 @ 004648c0 body=[[004648c0, 00464973] [0046499e, 004649cd]]


void FUN_004648c0(undefined4 param_1,int param_2)

{
  if (param_2 < 0x9cf) {
    if (param_2 == 0x9ce) {
      FUN_004651f0();
      return;
    }
    if (param_2 == 0x1a) {
      FUN_009a1750();
      return;
    }
    if (param_2 == 0xd9) {
      FUN_009a1750();
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x9cf:
      FUN_00465270();
      return;
    case 0x9d0:
      FUN_009885d0();
      FUN_004652f0(param_1);
      return;
    case 0x9d1:
      FUN_004653b0();
      return;
    case 0xa31:
      FUN_009a1ce0();
    }
  }
  return;
}

