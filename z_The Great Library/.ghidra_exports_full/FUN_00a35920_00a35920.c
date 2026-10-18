// FUN_00a35920 @ 00a35920 body=[[00a35920, 00a359a8]]


void FUN_00a35920(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0xb:
    break;
  default:
    FUN_009a2620(param_1,param_2);
    return;
  case 0xd8:
    FUN_00a36310(param_1,in_ECX + 0x3c);
    return;
  case 0xe0:
    FUN_0045be80(param_1,in_ECX + 0x4c);
    return;
  case 0xeb:
    FUN_005e5a20(param_1,in_ECX + 0x5c);
    return;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x6c);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

