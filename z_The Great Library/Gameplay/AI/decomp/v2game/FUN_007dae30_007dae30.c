// FUN_007dae30 @ 007dae30 body=[[007dae30, 007db02d]]


void FUN_007dae30(undefined4 param_1,int param_2)

{
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 < 0x162) {
    if (param_2 == 0x161) {
      FUN_009a1810();
      return;
    }
    switch(param_2) {
    case 0x1b:
      FUN_009a1c10();
      return;
    case 0x1d:
      FUN_009a1750(in_ECX + 0x178,0);
      return;
    case 0x24:
      FUN_009a1750(in_ECX + 0xb4,0);
      return;
    case 0x26:
      FUN_009a1750(in_ECX + 0xd0,0);
      return;
    case 0x27:
      FUN_009a1750(in_ECX + 0xec,0);
      return;
    case 0x28:
      FUN_009a1750(in_ECX + 0x124,0);
      return;
    case 0x2e:
      FUN_009a1de0();
      return;
    case 0x58:
      FUN_009a1750(in_ECX + 0x140,0);
      return;
    case 0x59:
      FUN_009a1750(in_ECX + 0x15c,0);
      return;
    case 0x5c:
      FUN_009a1de0();
      return;
    }
  }
  else if (param_2 < 0x26c) {
    if (param_2 == 0x26b) {
      *(undefined1 *)(in_ECX + 0x1cc) = 1;
      FUN_009a1810();
      *(undefined4 *)(in_ECX + 0x1c4) = local_10;
      *(undefined4 *)(in_ECX + 0x1c8) = local_c;
      return;
    }
    if (param_2 == 0x17f) {
      FUN_009a1810();
      return;
    }
    if (param_2 == 0x180) {
      FUN_009a1810();
      return;
    }
  }
  else {
    if (param_2 == 0x471) {
      (**(code **)(*(int *)(in_ECX + 0x1d4) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0x472) {
      (**(code **)(*(int *)(in_ECX + 0x1f0) + 0xc))(param_1);
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

