// FUN_00a711e0 @ 00a711e0 body=[[00a711e0, 00a71227]]


void FUN_00a711e0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  FUN_009ef8e0();
  iVar1 = *(int *)(in_ECX + 0x160);
  iVar2 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x164) - iVar1 & 0xfffffffcU)) {
    do {
      (**(code **)(**(int **)(iVar1 + iVar2 * 4) + 0x5c))(1);
      iVar1 = *(int *)(in_ECX + 0x160);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x164) - iVar1 >> 2);
  }
  return;
}

