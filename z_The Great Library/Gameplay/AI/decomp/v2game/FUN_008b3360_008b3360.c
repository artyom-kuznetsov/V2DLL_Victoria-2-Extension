// FUN_008b3360 @ 008b3360 body=[[008b3360, 008b339e]]


void FUN_008b3360(undefined4 param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  
  (**(code **)(*in_ECX + 0x20))(param_1);
  iVar2 = 0;
  iVar1 = in_ECX[3] - in_ECX[2] >> 2;
  if (0 < iVar1) {
    do {
      FUN_008b3360(param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

