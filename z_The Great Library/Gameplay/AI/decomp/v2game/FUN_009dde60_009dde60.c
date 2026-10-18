// FUN_009dde60 @ 009dde60 body=[[009dde60, 009ddeb8]]


void FUN_009dde60(void)

{
  short sVar1;
  int *in_ECX;
  
  sVar1 = (**(code **)(*in_ECX + 0x68))();
  if (sVar1 == 2) {
    FUN_00409350(&DAT_00e1a0dc,4);
    return;
  }
  if (sVar1 != 3) {
    if (sVar1 != 4) {
      FUN_00409350(&DAT_00e12e7c,2);
      return;
    }
    FUN_00409350("disable",7);
    return;
  }
  FUN_00409350(&DAT_00e1a0d4,4);
  return;
}

