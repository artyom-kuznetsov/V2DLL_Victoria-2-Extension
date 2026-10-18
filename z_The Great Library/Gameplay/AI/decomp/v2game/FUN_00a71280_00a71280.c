// FUN_00a71280 @ 00a71280 body=[[00a71280, 00a712c7]]


void FUN_00a71280(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  FUN_009ef9e0();
  iVar1 = *(int *)(in_ECX + 0x160);
  iVar2 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x164) - iVar1 & 0xfffffffcU)) {
    do {
      (**(code **)(**(int **)(iVar1 + iVar2 * 4) + 0x5c))(3);
      iVar1 = *(int *)(in_ECX + 0x160);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x164) - iVar1 >> 2);
  }
  return;
}

