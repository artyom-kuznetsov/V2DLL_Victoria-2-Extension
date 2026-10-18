// FUN_005c5a60 @ 005c5a60 body=[[005c5a60, 005c5a9c]]


int FUN_005c5a60(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  
  if (in_EAX != param_1) {
    iVar2 = in_EAX + 8;
    do {
      *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(iVar2 + -4);
      FUN_009d5f10(iVar2);
      *(undefined2 *)(in_ECX + 0x18) = *(undefined2 *)(iVar2 + 0x10);
      iVar1 = iVar2 + 0x14;
      in_ECX = in_ECX + 0x1c;
      iVar2 = iVar2 + 0x1c;
    } while (iVar1 != param_1);
  }
  return in_ECX;
}

