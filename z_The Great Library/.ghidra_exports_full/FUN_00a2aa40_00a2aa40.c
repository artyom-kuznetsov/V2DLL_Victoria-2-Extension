// FUN_00a2aa40 @ 00a2aa40 body=[[00a2aa40, 00a2aac4]]


void FUN_00a2aa40(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x19) {
    FUN_009a1750(in_ECX + 0x24,0);
    FUN_00989720(in_ECX + 0x24,&DAT_00dedc68);
  }
  else {
    if (param_2 == 0x1a) {
      FUN_009a1750(in_ECX + 8,0);
      return;
    }
    if (param_2 != 0x41) {
      FUN_009a0f40();
      return;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",in_ECX + 0x40);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  return;
}

