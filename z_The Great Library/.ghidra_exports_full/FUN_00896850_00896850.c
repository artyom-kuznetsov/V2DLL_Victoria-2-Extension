// FUN_00896850 @ 00896850 body=[[00896850, 00896888]]


void FUN_00896850(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x10);
    *piVar1 = *piVar1 + *(int *)(in_ECX + 0x20);
    if (*piVar1 < 0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      return;
    }
    if (100000 < *(int *)(iVar2 + 0x10)) {
      *(undefined4 *)(iVar2 + 0x10) = 100000;
    }
  }
  return;
}

