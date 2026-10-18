// FUN_004b89d0 @ 004b89d0 body=[[004b89d0, 004b8a2f]]


void FUN_004b89d0(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x40) != 0) {
    iVar1 = FUN_0068bba0(DAT_012588e8,unaff_ESI,*(int *)(unaff_ESI + 0x40));
    if (iVar1 != 0) {
      if (*(char *)(unaff_ESI + 0x48) != '\0') {
        FUN_004b5730(unaff_ESI,iVar1 + 0x54,DAT_012588e8 + 0xb0c,0);
      }
      if (((*(char *)(unaff_ESI + 0x130) == 'R') && (*(char *)(unaff_ESI + 0x131) == 'E')) &&
         (*(char *)(unaff_ESI + 0x132) == 'B')) {
        FUN_004e5210(*(undefined4 *)(unaff_ESI + 0x58));
      }
    }
  }
  return;
}

