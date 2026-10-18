// FUN_009f3440 @ 009f3440 body=[[009f3440, 009f349b]]


void FUN_009f3440(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xf3) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x54);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    return;
  }
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 0x58,0);
    return;
  }
  FUN_009f2d70(param_1,param_2);
  return;
}

