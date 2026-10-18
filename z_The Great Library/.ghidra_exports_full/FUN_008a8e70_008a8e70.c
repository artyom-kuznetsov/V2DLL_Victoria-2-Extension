// FUN_008a8e70 @ 008a8e70 body=[[008a8e70, 008a8eff]]


int * FUN_008a8e70(int *param_1)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 local_10 [3];
  
  piVar1 = param_1;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
    piVar1 = piVar1 + 1;
  }
  local_10[0] = 0x2d2d2d;
  piVar1 = param_1 + 1;
  param_1[0x41] = 0;
  param_1[0x42] = 0x2d2d2d;
  param_1[0x43] = 0;
  iVar2 = FUN_00aaf0c5(piVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_00aaf0c5(piVar1);
    param_1[0x41] = iVar2;
    return param_1;
  }
  if (*param_1 == 0xf) {
    piVar1 = (int *)FUN_0055c6c0(DAT_012587e4,local_10,piVar1);
    param_1[0x42] = *piVar1;
    param_1[0x43] = piVar1[1];
  }
  return param_1;
}

