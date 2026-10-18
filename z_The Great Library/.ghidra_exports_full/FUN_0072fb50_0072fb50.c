// FUN_0072fb50 @ 0072fb50 body=[[0072fb50, 0072fbcf]]


void FUN_0072fb50(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x16) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x40);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    return;
  }
  if (param_2 != 0x2a1) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_1);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  *(int *)(in_ECX + 0x3c) = param_1;
  return;
}

