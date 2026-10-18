// FUN_00a59ba0 @ 00a59ba0 body=[[00a59ba0, 00a59d56]]


void FUN_00a59ba0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x138) {
    if (param_2 == 0x137) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x158);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      return;
    }
    switch(param_2) {
    case 0x2e:
      FUN_009a1e10();
      return;
    case 0x4b:
      FUN_009a1e10();
      return;
    case 0x83:
      FUN_009a1e10();
      return;
    case 0x84:
      FUN_009a1750(in_ECX + 0x84,0);
      return;
    case 0x89:
      FUN_009a1750(in_ECX + 0x160,0);
      return;
    case 0x8a:
      FUN_009a1de0();
      return;
    case 0x96:
      FUN_009a1bb0(in_ECX + 0x15c);
      return;
    case 0x99:
      FUN_009a1750(in_ECX + 0xa0,0);
      return;
    case 0xb4:
      FUN_009a1750(in_ECX + 0xbc,0);
      return;
    case 0xb5:
      FUN_009a1750(in_ECX + 0xd8,0);
      return;
    case 0xb7:
      FUN_009a1c10();
      return;
    case 0xbf:
      FUN_009a1750(in_ECX + 0x68,0);
      return;
    }
  }
  else {
    if (param_2 == 0x138) {
      FUN_009a1750(in_ECX + 0x17c,0);
      return;
    }
    if (param_2 == 0x161) {
      FUN_009a1e10();
      return;
    }
    if (param_2 == 0x166) {
      FUN_009a1bb0(in_ECX + 0x198);
      return;
    }
  }
  FUN_009ecfa0(param_1,param_2);
  return;
}

