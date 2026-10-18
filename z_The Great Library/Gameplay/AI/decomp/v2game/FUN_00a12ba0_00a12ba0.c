// FUN_00a12ba0 @ 00a12ba0 body=[[00a12ba0, 00a12c1a]]


int FUN_00a12ba0(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  
  if (in_EAX != param_1) {
    iVar2 = in_EAX + 8;
    do {
      *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(iVar2 + -4);
      FUN_00408ed0(iVar2,0,0xffffffff);
      *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined1 *)(in_ECX + 0x28) = *(undefined1 *)(iVar2 + 0x20);
      *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(iVar2 + 0x30);
      *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(iVar2 + 0x34);
      *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(iVar2 + 0x38);
      *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(iVar2 + 0x3c);
      *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(iVar2 + 0x44);
      iVar1 = iVar2 + 0x48;
      in_ECX = in_ECX + 0x50;
      iVar2 = iVar2 + 0x50;
    } while (iVar1 != param_1);
  }
  return in_ECX;
}

