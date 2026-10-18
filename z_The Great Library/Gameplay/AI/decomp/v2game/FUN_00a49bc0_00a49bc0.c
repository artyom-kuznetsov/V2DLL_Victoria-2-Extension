// FUN_00a49bc0 @ 00a49bc0 body=[[00a49bc0, 00a49c7d]]


void FUN_00a49bc0(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  char *_Format;
  
  switch(param_2) {
  case 0x1e:
    iVar1 = in_ECX + 0x50;
    _Format = "%u";
    break;
  default:
    if (param_2 == 0x1a) {
      FUN_009a1750(in_ECX + 0xc,0);
      return;
    }
    if (param_2 == 0x58) {
      FUN_009a1bb0(in_ECX + 8);
      return;
    }
    FUN_009a0f40();
    return;
  case 0x21:
    FUN_009a1750(in_ECX + 0x34,0);
    return;
  case 0x22:
    FUN_009a1750(in_ECX + 0x54,0);
    return;
  case 0x55:
    iVar1 = in_ECX + 0x70;
    _Format = "%i";
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),_Format,iVar1);
  if (iVar1 != 0) {
    return;
  }
  FUN_009a1140();
  return;
}

