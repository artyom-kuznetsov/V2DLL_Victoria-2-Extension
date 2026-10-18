// FUN_009eb310 @ 009eb310 body=[[009eb310, 009eb346]]


void FUN_009eb310(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = DAT_00fc0c60;
  in_ECX[1] = param_1 * 100;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    (**(code **)(*in_ECX + 0x50))(iVar1,param_1 * 100);
  }
  return;
}

