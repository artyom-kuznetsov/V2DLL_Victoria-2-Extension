// FUN_00a34ba0 @ 00a34ba0 body=[[00a34ba0, 00a34be2]]


void FUN_00a34ba0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 != 0xb) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x3c);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

