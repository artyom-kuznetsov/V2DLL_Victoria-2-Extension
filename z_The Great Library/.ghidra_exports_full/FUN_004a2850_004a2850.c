// FUN_004a2850 @ 004a2850 body=[[004a2850, 004a28ca]]


void FUN_004a2850(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x224c) - *(int *)(in_ECX + 0x2248) & 0xfffffffcU)) {
    do {
      FUN_0044be50(*(undefined4 *)(*(int *)(in_ECX + 0x2248) + iVar1 * 4));
      FUN_004d7120(*(undefined4 *)(*(int *)(in_ECX + 0x2248) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x224c) - *(int *)(in_ECX + 0x2248) >> 2);
  }
  for (puVar2 = *(undefined4 **)(in_ECX + 0x2a78);
      (*(undefined4 **)(in_ECX + 0x2a78) <= puVar2 && (puVar2 < *(undefined4 **)(in_ECX + 0x2a7c)));
      puVar2 = puVar2 + 1) {
    FUN_0044be50(*puVar2);
  }
  return;
}

