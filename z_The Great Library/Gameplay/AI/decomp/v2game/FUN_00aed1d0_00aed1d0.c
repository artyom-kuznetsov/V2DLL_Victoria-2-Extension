// FUN_00aed1d0 @ 00aed1d0 body=[[00aed1d0, 00aed205]]


void FUN_00aed1d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 in_ECX;
  
  if ((*(byte *)(param_3 + 0x9c) >> 3 & 1) == 0) {
    FUN_00aecf00(param_1,param_2,param_3,in_ECX);
    return;
  }
  FUN_00aec4a0(param_1,param_2,param_3,in_ECX);
  return;
}

