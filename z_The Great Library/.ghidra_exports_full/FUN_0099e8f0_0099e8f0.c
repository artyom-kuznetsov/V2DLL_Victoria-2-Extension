// FUN_0099e8f0 @ 0099e8f0 body=[[0099e8f0, 0099e923]]


void FUN_0099e8f0(undefined4 *param_1)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = *in_EAX;
  iVar1 = in_EAX[1] - iVar2 >> 2;
  if (iVar1 != 0) {
    iVar1 = iVar2 + iVar1 * 4;
    for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
      (*(code *)*param_1)();
    }
  }
  return;
}

