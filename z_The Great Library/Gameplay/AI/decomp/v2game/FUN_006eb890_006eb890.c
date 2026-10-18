// FUN_006eb890 @ 006eb890 body=[[006eb890, 006eb949]]


void FUN_006eb890(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + iVar4 * 4);
      iVar2 = *(int *)(iVar1 + 0x80);
      if (((iVar2 != 0) && (iVar3 = *(int *)(iVar1 + 0x84), iVar3 != 0)) &&
         (*(int *)(iVar3 + 0x138) < *(int *)(iVar2 + 0x138))) {
        *(int *)(iVar1 + 0x80) = iVar3;
        *(int *)(iVar1 + 0x84) = iVar2;
      }
      iVar2 = *(int *)(iVar1 + 0x2c);
      if (((iVar2 != DAT_012587f0 + 0x48) && (iVar2 != 0)) && (*(int *)(iVar1 + 0x80) != 0)) {
        FUN_006e7d70(iVar2,*(int *)(iVar1 + 0x80));
      }
      iVar2 = *(int *)(iVar1 + 0x2c);
      if (((iVar2 != DAT_012587f0 + 0x48) && (iVar2 != 0)) && (*(int *)(iVar1 + 0x84) != 0)) {
        FUN_006e7d70(iVar2,*(int *)(iVar1 + 0x84));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) >> 2);
  }
  return;
}

