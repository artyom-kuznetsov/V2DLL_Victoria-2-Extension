// FUN_00a28bb0 @ 00a28bb0 body=[[00a28bb0, 00a28ca1]]


void FUN_00a28bb0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x5a) {
    if (param_2 == 0x59) {
      FUN_009a1750(in_ECX + 0x5c,0);
      return;
    }
    if (param_2 == 0x1b) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%u",in_ECX + 0x94);
      if (iVar1 != 0) {
        return;
      }
      FUN_009a1140();
      return;
    }
    if (param_2 == 0x24) {
      FUN_009a1750(in_ECX + 0x78,0);
      return;
    }
    if (param_2 == 0x41) {
      FUN_009a1de0();
      return;
    }
  }
  else {
    if (param_2 == 0x13a) {
      FUN_009a1bb0(in_ECX + 0x170);
      *(undefined1 *)(in_ECX + 0x171) = 1;
      return;
    }
    if (param_2 == 0x143) {
      FUN_009a1750(in_ECX + 0x17c,0);
      return;
    }
    if (param_2 == 0x166) {
      FUN_009a1bb0(in_ECX + 0x178);
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

