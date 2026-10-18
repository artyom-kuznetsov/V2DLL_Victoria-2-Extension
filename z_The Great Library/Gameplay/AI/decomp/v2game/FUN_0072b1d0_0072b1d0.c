// FUN_0072b1d0 @ 0072b1d0 body=[[0072b1d0, 0072b237]]


void FUN_0072b1d0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x435) {
    FUN_009a1bb0(in_ECX + 0x3c);
    return;
  }
  if (param_2 == 0x2a1) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_1);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    *(int *)(in_ECX + 0x40) = param_1;
    return;
  }
  FUN_009a2620(param_1,param_2);
  return;
}

