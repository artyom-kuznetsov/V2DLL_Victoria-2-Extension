// FUN_009e6c70 @ 009e6c70 body=[[009e6c70, 009e6c98] [009e6c9c, 009e6cb2]]


uint FUN_009e6c70(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_EDI;
  
  uVar2 = *unaff_EDI;
  uVar1 = unaff_EDI[1];
  if ((uVar1 - uVar2 & 0xffffffe0) == 0) {
    return uVar2 & 0xffffff00;
  }
  if (uVar2 != uVar1) {
    if (0xf < *(uint *)(uVar1 - 0xc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(uVar1 - 0x20));
    }
    uVar2 = 0;
    *(undefined4 *)(uVar1 - 0xc) = 0xf;
    *(undefined4 *)(uVar1 - 0x10) = 0;
    *(undefined1 *)(uVar1 - 0x20) = 0;
    unaff_EDI[1] = unaff_EDI[1] - 0x20;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

