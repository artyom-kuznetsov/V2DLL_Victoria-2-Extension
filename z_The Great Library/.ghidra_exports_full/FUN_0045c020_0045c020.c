// FUN_0045c020 @ 0045c020 body=[[0045c020, 0045c057] [0045c05b, 0045c072]]


undefined4 FUN_0045c020(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[1];
  iVar2 = (iVar1 - *unaff_EDI) / 0x1c;
  if (iVar2 == 0) {
    return 0;
  }
  if (*unaff_EDI != iVar1) {
    if (0xf < *(uint *)(iVar1 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(iVar1 + -0x1c));
    }
    iVar2 = 0;
    *(undefined4 *)(iVar1 + -8) = 0xf;
    *(undefined4 *)(iVar1 + -0xc) = 0;
    *(undefined1 *)(iVar1 + -0x1c) = 0;
    unaff_EDI[1] = unaff_EDI[1] + -0x1c;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

