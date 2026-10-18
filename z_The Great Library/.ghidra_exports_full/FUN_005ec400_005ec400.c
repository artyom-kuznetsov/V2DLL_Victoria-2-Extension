// FUN_005ec400 @ 005ec400 body=[[005ec400, 005ec460]]


void FUN_005ec400(char param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (param_1 == '\0') {
    *(undefined4 *)(iVar1 + 0x15c8) = *(undefined4 *)(in_ECX + 0x14);
  }
  else {
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(iVar1 + 0x15c8);
    *(undefined4 *)(iVar1 + 0x15c8) = *(undefined4 *)(in_ECX + 0x10);
  }
  return;
}

