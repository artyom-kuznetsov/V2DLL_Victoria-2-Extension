// FUN_0047b5a0 @ 0047b5a0 body=[[0047b5a0, 0047b61e]]


void FUN_0047b5a0(int *param_1)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[1] - *param_1 >> 5;
  if (in_EAX < uVar2) {
    if (*param_1 + in_EAX * 0x20 != param_1[1]) {
      iVar1 = FUN_006a2070(param_1);
      param_1[1] = iVar1;
      return;
    }
  }
  else if (uVar2 < in_EAX) {
    FUN_0047b690();
    FUN_0047bdb0(param_1);
    param_1[1] = (in_EAX - (param_1[1] - *param_1 >> 5)) * 0x20 + param_1[1];
  }
  return;
}

