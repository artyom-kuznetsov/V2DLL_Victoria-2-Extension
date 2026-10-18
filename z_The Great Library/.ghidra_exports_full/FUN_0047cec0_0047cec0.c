// FUN_0047cec0 @ 0047cec0 body=[[0047cec0, 0047cf1f]]


undefined4 * FUN_0047cec0(int param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != in_EAX) {
    iVar2 = in_EAX + 0x20;
    puVar3 = in_ECX;
    do {
      in_ECX = puVar3 + -0x13;
      *in_ECX = *(undefined4 *)(iVar2 + -0x6c);
      FUN_00408ed0(iVar2 + -0x68,0,0xffffffff);
      FUN_00408ed0(iVar2 + -0x4c,0,0xffffffff);
      puVar3[-4] = *(undefined4 *)(iVar2 + -0x30);
      puVar3[-3] = *(undefined4 *)(iVar2 + -0x2c);
      *(undefined1 *)(puVar3 + -2) = *(undefined1 *)(iVar2 + -0x28);
      iVar1 = iVar2 + -0x6c;
      puVar3[-1] = *(undefined4 *)(iVar2 + -0x24);
      iVar2 = iVar2 + -0x4c;
      puVar3 = in_ECX;
    } while (iVar1 != param_1);
  }
  return in_ECX;
}

