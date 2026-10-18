// FUN_004cb3c0 @ 004cb3c0 body=[[004cb3c0, 004cb3fa]]


void FUN_004cb3c0(void)

{
  undefined4 *in_EAX;
  int iVar1;
  int in_EDX;
  int *piVar2;
  int unaff_EDI;
  
  iVar1 = 0;
  piVar2 = (int *)(unaff_EDI + 0x98);
  do {
    if (*piVar2 == *(int *)(in_EDX + 4)) {
      *in_EAX = *(undefined4 *)(unaff_EDI + 0xa4 + iVar1 * 0x1c);
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 7;
  } while (iVar1 < 4);
  *in_EAX = DAT_01259abc;
  return;
}

