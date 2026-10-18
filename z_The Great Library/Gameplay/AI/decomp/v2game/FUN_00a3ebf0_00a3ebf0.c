// FUN_00a3ebf0 @ 00a3ebf0 body=[[00a3ebf0, 00a3ecdb]]


void FUN_00a3ebf0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x5a) {
    if (param_2 == 0x59) {
      FUN_009a1750(in_ECX + 0xc4,0);
      return;
    }
    if (param_2 == 0x1b) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%u",in_ECX + 0x94);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      return;
    }
    if (param_2 == 0x24) {
      FUN_009a1750(in_ECX + 0x78,0);
      return;
    }
    if (param_2 == 0x2e) {
      FUN_009a1e10();
      return;
    }
  }
  else {
    if (param_2 == 0x83) {
      FUN_009a1e10();
      return;
    }
    if (param_2 == 0x166) {
      FUN_009a1bb0(in_ECX + 0xfc);
      return;
    }
    if (param_2 == 0x199) {
      FUN_009a1bb0(in_ECX + 0xfd);
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

