// FUN_00a1bf10 @ 00a1bf10 body=[[00a1bf10, 00a1bf43] [00a1bf47, 00a1bf54]]


undefined4 FUN_00a1bf10(void)

{
  int iVar1;
  int *in_EAX;
  
  if (in_EAX == (int *)0x0) {
    return 0xffffff9a;
  }
  if (in_EAX[0x1f] != 0) {
    FUN_00a1c810();
  }
  iVar1 = *in_EAX;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x10) != '\0') {
      CloseHandle(*(HANDLE *)(iVar1 + 4));
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  _free(in_EAX);
  return 0;
}

