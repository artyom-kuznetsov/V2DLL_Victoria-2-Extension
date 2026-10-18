// FUN_00a14060 @ 00a14060 body=[[00a14060, 00a140d1]]


void FUN_00a14060(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xe0) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x3c);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    return;
  }
  if (param_2 == 0x6b) {
    FUN_009a1ce0();
    return;
  }
  if (param_2 == 0xf4) {
    FUN_009a1bb0(in_ECX + 0x44);
    return;
  }
  FUN_009a2620(param_1,param_2);
  return;
}

