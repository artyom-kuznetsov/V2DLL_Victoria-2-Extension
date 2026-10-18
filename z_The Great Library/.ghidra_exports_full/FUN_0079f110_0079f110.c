// FUN_0079f110 @ 0079f110 body=[[0079f110, 0079f159]]


undefined4 * FUN_0079f110(int param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 *in_ECX;
  int iVar2;
  
  if (in_EAX != param_1) {
    iVar2 = in_EAX + 0xc;
    do {
      *in_ECX = *(undefined4 *)(iVar2 + -0xc);
      in_ECX[1] = *(undefined4 *)(iVar2 + -8);
      in_ECX[2] = *(undefined4 *)(iVar2 + -4);
      FUN_00408ed0(iVar2,0,0xffffffff);
      in_ECX[10] = *(undefined4 *)(iVar2 + 0x1c);
      iVar1 = iVar2 + 0x20;
      in_ECX = in_ECX + 0xb;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 != param_1);
  }
  return in_ECX;
}

