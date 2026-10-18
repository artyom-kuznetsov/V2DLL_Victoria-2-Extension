// FUN_00a46a10 @ 00a46a10 body=[[00a46a10, 00a46a52]]


void FUN_00a46a10(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 != 0x2e) {
    FUN_00a20b80(param_1,param_2);
    return;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x5c);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

