// FUN_005989c0 @ 005989c0 body=[[005989c0, 005989dc] [005989e0, 00598a20]]


int FUN_005989c0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  iVar1 = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0x70) - *(int *)(unaff_EDI + 0x6c) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x6c) + iVar2 * 4) + 0x5c);
      if ((((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 4)) &&
         (iVar1 = FUN_00967f50(), iVar1 == param_1)) {
        local_8 = local_8 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = local_8;
    } while (iVar2 < *(int *)(unaff_EDI + 0x70) - *(int *)(unaff_EDI + 0x6c) >> 2);
  }
  return iVar1;
}

