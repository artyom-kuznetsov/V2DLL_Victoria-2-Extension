// FUN_008b33a0 @ 008b33a0 body=[[008b33a0, 008b33de]]


void FUN_008b33a0(undefined4 param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  
  (**(code **)(*in_ECX + 0x1c))(param_1);
  iVar2 = 0;
  iVar1 = in_ECX[3] - in_ECX[2] >> 2;
  if (0 < iVar1) {
    do {
      FUN_008b33a0(param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

