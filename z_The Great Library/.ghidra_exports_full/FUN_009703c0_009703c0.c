// FUN_009703c0 @ 009703c0 body=[[009703c0, 0097040d]]


int FUN_009703c0(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  
  if (in_EAX != param_1) {
    iVar2 = in_EAX + 8;
    do {
      *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(iVar2 + -4);
      FUN_0096fa80();
      *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(iVar2 + 0x14);
      FUN_009beeb0(iVar2 + 0x18);
      iVar1 = iVar2 + 0x28;
      in_ECX = in_ECX + 0x30;
      iVar2 = iVar2 + 0x30;
    } while (iVar1 != param_1);
  }
  return in_ECX;
}

