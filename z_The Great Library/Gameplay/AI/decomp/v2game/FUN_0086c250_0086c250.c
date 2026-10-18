// FUN_0086c250 @ 0086c250 body=[[0086c250, 0086c2b0]]


uint FUN_0086c250(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int in_ECX;
  
  pbVar1 = (byte *)**(int **)(in_ECX + 0x20);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (pbVar1 < pbVar1 + **(int **)(in_ECX + 0x30)) {
    return (uint)*pbVar1;
  }
  if ((((*(byte *)(in_ECX + 0x40) & 4) == 0) &&
      (pbVar2 = (byte *)**(undefined4 **)(in_ECX + 0x24), pbVar2 != (byte *)0x0)) &&
     ((pbVar1 < pbVar2 || (pbVar1 < *(byte **)(in_ECX + 0x3c))))) {
    if (*(byte **)(in_ECX + 0x3c) < pbVar2) {
      *(byte **)(in_ECX + 0x3c) = pbVar2;
    }
    **(int **)(in_ECX + 0x30) = *(int *)(in_ECX + 0x3c) - **(int **)(in_ECX + 0x20);
    return (uint)*(byte *)**(undefined4 **)(in_ECX + 0x20);
  }
  return 0xffffffff;
}

