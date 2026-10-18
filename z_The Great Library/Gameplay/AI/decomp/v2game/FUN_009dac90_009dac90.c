// FUN_009dac90 @ 009dac90 body=[[009dac90, 009dad21]]


void FUN_009dac90(int param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  
  switch(param_2) {
  case 0x1a:
    FUN_009a1750(in_ECX + 0x14,0);
    return;
  default:
    FUN_009a0f40();
    return;
  case 0x92:
    FUN_009a1ce0();
    return;
  case 0x116:
    iVar1 = in_ECX + 0xc;
    break;
  case 0x117:
    iVar1 = in_ECX + 0x10;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar1);
  if (iVar1 != 0) {
    return;
  }
  FUN_009a1140();
  return;
}

