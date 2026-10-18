// FUN_00a35090 @ 00a35090 body=[[00a35090, 00a3510b]]


void FUN_00a35090(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  
  if (param_2 == 0xb) {
    iVar1 = in_ECX + 0x3c;
  }
  else if (param_2 == 0xd8) {
    iVar1 = in_ECX + 0x40;
  }
  else {
    if (param_2 != 0xfe) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    iVar1 = in_ECX + 0x44;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar1);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

