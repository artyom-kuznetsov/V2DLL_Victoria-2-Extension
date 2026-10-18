// FUN_008d4b40 @ 008d4b40 body=[[008d4b40, 008d4bc8] [008d4bd0, 008d4beb]]


undefined4 FUN_008d4b40(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int local_c;
  
  if ((*(char *)(in_ECX + 0x18) == '\0') && (*(char *)(in_ECX + 0x19) == '\0')) {
    iVar2 = FUN_005db9b0();
    if (iVar2 < *(int *)(in_ECX + 0x1c)) {
      return 0;
    }
  }
  else {
    FUN_008a8dc0();
    if (*(char *)(in_ECX + 0x19) != '\0') {
      local_c = *(int *)(param_1 + 0x30);
    }
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) +
                      0xec);
    do {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(int *)(iVar2 + 0xc4) != local_c);
  }
  return 1;
}

