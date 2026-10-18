// FUN_00a17800 @ 00a17800 body=[[00a17800, 00a17870]]


void FUN_00a17800(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 0x18,0);
  }
  else {
    if (param_2 == 0xd4) {
      FUN_009a1750(in_ECX + 0x38,0);
      return;
    }
    if (param_2 == 0xd9) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_1);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      *(int *)(in_ECX + 0x34) = param_1;
      return;
    }
  }
  return;
}

