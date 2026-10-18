// FUN_00a10a60 @ 00a10a60 body=[[00a10a60, 00a10af0]]


void FUN_00a10a60(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xe7) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%u",in_ECX + 0xac);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    return;
  }
  if (param_2 == 0x11c) {
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  }
  if (param_2 == 0xe8) {
    FUN_009a1750(in_ECX + 0x3c,0);
    return;
  }
  if (param_2 != 0xe9) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  FUN_009a1750(in_ECX + 0x58,0);
  return;
}

