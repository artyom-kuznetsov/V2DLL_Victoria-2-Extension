// FUN_00a30230 @ 00a30230 body=[[00a30230, 00a3034d]]


void FUN_00a30230(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x5a) {
    if (param_2 == 0x59) {
      FUN_009a1750(in_ECX + 0xd4,0);
      return;
    }
    switch(param_2) {
    case 0x1b:
      FUN_009a1c10();
      return;
    case 0x1d:
      FUN_009a1750(in_ECX + 0x114,0);
      return;
    case 0x24:
      FUN_009a1750(in_ECX + 0x9c,0);
      return;
    case 0x58:
      FUN_009a1750(in_ECX + 0xb8,0);
      return;
    }
  }
  else if (param_2 < 0x180) {
    if (param_2 == 0x17f) {
      FUN_009a1810();
      return;
    }
    if (param_2 == 0x5c) {
      FUN_009a1de0();
      return;
    }
    if (param_2 == 0x161) {
      FUN_009a1de0();
      return;
    }
  }
  else if (param_2 == 0x182) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",in_ECX + 0x104);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    return;
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

