// FUN_00a4e6a0 @ 00a4e6a0 body=[[00a4e6a0, 00a4e764]]


void FUN_00a4e6a0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x97) {
    if (param_2 == 0x96) {
      FUN_009a1bb0(in_ECX + 0xc0);
      return;
    }
    if (param_2 == 0x25) {
      FUN_009a1750(in_ECX + 0x78,0);
      return;
    }
    if (param_2 == 0x2e) {
      FUN_009a1e10();
      return;
    }
    if (param_2 == 0x59) {
      FUN_009a1750(in_ECX + 0x5c,0);
      return;
    }
  }
  else {
    if (param_2 == 0xb7) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0xa0);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      return;
    }
    if (param_2 == 0x166) {
      FUN_009a1bb0(in_ECX + 0x114);
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

