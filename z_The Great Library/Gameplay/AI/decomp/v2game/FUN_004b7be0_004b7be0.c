// FUN_004b7be0 @ 004b7be0 body=[[004b7be0, 004b7c47]]


void FUN_004b7be0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if ((*(char *)(iVar1 + 0x2a) == '\0') &&
     (iVar1 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24, 0 < iVar1)) {
    do {
      FUN_004b7c50();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

