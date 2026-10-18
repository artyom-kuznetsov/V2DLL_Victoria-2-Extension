// FUN_005d77a0 @ 005d77a0  (requested 005D77A0, first bytes: 8B 81 C4 00 00 00 3B 87)


uint FUN_005d77a0(void)

{
  int iVar1;
  int in_ECX;
  int unaff_EDI;
  undefined8 uVar2;
  
  if ((((*(uint *)(in_ECX + 0xc4) == *(uint *)(unaff_EDI + 0xc4)) && (*(int *)(in_ECX + 0x74) == 0))
      && (*(int *)(in_ECX + 0xec) < 1)) && (*(char *)(in_ECX + 0x104) == '\0')) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0xa4) + 600) / 1000;
    FUN_005dc560();
    uVar2 = FUN_005d0650();
    return CONCAT31((int3)((uint)iVar1 >> 8),(int)((ulonglong)uVar2 >> 0x20) + (int)uVar2 <= iVar1);
  }
  return *(uint *)(in_ECX + 0xc4) & 0xffffff00;
}

