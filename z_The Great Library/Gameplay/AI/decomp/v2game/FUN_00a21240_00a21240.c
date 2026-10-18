// FUN_00a21240 @ 00a21240 body=[[00a21240, 00a21319]]


void FUN_00a21240(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x151) {
    if (param_2 == 0x150) {
      FUN_00a21320();
      return;
    }
    if (param_2 == 0x21) {
      FUN_009a1750(in_ECX + 0x78,0);
      return;
    }
    if (param_2 != 0x55) {
LAB_00a212c0:
      if (param_2 == 0x1a) {
        FUN_009a1750(in_ECX + 0xc,0);
        return;
      }
      if (param_2 != 0x58) {
        FUN_009a0f40();
        return;
      }
      FUN_009a1bb0(in_ECX + 8);
      return;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%x",in_ECX + 0x38);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  else {
    if (param_2 != 0x19a) goto LAB_00a212c0;
    FUN_00a21320();
  }
  return;
}

