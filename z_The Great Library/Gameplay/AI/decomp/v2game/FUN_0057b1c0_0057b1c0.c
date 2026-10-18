// FUN_0057b1c0 @ 0057b1c0 body=[[0057b1c0, 0057b1f5] [0057b1f9, 0057b214] [0057b218, 0057b22a] [0057b231, 0057b23e]]


void FUN_0057b1c0(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*in_EAX;
  iVar2 = in_EAX[1] - (int)piVar3 >> 2;
  if (iVar2 != 0) {
    piVar1 = piVar3 + iVar2;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        if (0xf < *(uint *)(iVar2 + 0x38)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*(undefined4 *)(iVar2 + 0x24));
        }
        *(undefined4 *)(iVar2 + 0x38) = 0xf;
        *(undefined4 *)(iVar2 + 0x34) = 0;
        *(undefined1 *)(iVar2 + 0x24) = 0;
        if (0xf < *(uint *)(iVar2 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*(undefined4 *)(iVar2 + 8));
        }
        *(undefined4 *)(iVar2 + 0x1c) = 0xf;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined1 *)(iVar2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
    }
  }
  return;
}

