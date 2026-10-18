// FUN_005d0650 @ 005d0650  (requested 005D0650, first bytes: 8B 49 38 33 C0 85 C9 74)


int FUN_005d0650(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ECX + 0x38); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

