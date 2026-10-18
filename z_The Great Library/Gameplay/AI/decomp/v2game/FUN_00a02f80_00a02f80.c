// FUN_00a02f80 @ 00a02f80 body=[[00a02f80, 00a0304c]]


void FUN_00a02f80(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0xd4:
    FUN_009a1750(in_ECX + 0xbc,0);
    return;
  default:
    if (param_2 != 0xe8) {
      if (param_2 != 0xe9) {
        FUN_009a2620(param_1,param_2);
        return;
      }
      FUN_009a1750(in_ECX + 0x58,0);
      return;
    }
    FUN_009a1750(in_ECX + 0x3c,0);
    break;
  case 0xd8:
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  case 0xdc:
    FUN_0072d580();
    return;
  case 0xe0:
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%u",in_ECX + 0x90);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  return;
}

