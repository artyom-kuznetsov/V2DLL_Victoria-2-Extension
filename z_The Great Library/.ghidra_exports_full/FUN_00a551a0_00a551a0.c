// FUN_00a551a0 @ 00a551a0 body=[[00a551a0, 00a55255]]


void FUN_00a551a0(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  char *_Format;
  
  if (param_2 < 0x42) {
    if (param_2 == 0x41) {
      iVar1 = in_ECX + 0xa0;
      _Format = "%f";
    }
    else {
      if (param_2 != 0x1b) {
        if (param_2 == 0x24) {
          FUN_009a1750(in_ECX + 0x74,0);
          return;
        }
        goto LAB_00a5521b;
      }
      iVar1 = in_ECX + 0x94;
      _Format = "%u";
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),_Format,iVar1);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  else {
    if (param_2 != 0x59) {
      if (param_2 == 0x143) {
        FUN_009a1750(in_ECX + 0x128,0);
        return;
      }
LAB_00a5521b:
      FUN_00a20b80(param_1,param_2);
      return;
    }
    FUN_009a1750(in_ECX + 0xac,0);
  }
  return;
}

