// FUN_006a33d0 @ 006a33d0 body=[[006a33d0, 006a341d]]


int FUN_006a33d0(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  
  if (in_EAX != param_1) {
    iVar2 = in_EAX + 0x20;
    do {
      FUN_00408ed0(iVar2 + -0x20,0,0xffffffff);
      *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(iVar2 + -4);
      FUN_00408ed0(iVar2,0,0xffffffff);
      *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(iVar2 + 0x1c);
      iVar1 = iVar2 + 0x20;
      in_ECX = in_ECX + 0x40;
      iVar2 = iVar2 + 0x40;
    } while (iVar1 != param_1);
  }
  return in_ECX;
}

