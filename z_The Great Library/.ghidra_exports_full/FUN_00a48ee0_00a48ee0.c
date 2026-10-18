// FUN_00a48ee0 @ 00a48ee0 body=[[00a48ee0, 00a48f71]]


void FUN_00a48ee0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0x1b:
    break;
  default:
    FUN_00a20b80(param_1,param_2);
    return;
  case 0x24:
    FUN_009a1750(in_ECX + 0x5c,0);
    return;
  case 0x2e:
    FUN_009a1e10();
    return;
  case 0x41:
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%u",in_ECX + 0x78);
  if (iVar1 != 0) {
    return;
  }
  FUN_009a1140();
  return;
}

