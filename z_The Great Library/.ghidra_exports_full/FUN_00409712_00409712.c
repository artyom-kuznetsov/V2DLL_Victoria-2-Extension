// FUN_00409712 @ 00409712 body=[[00409712, 00409740] [00409744, 0040976f]]


void FUN_00409712(void)

{
  size_t _Size;
  undefined4 *puVar1;
  int unaff_EBP;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  
  _Size = *(size_t *)(unaff_EBP + 0xc);
  if (_Size != 0) {
    puVar1 = unaff_EDI;
    if (0xf < (uint)unaff_EDI[5]) {
      puVar1 = (undefined4 *)*unaff_EDI;
    }
    FID_conflict__memcpy(*(void **)(unaff_EBP + 8),puVar1,_Size);
  }
  if ((uint)unaff_EDI[5] < 0x10) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)unaff_EDI = 0;
    *unaff_EDI = puVar1;
    unaff_EDI[5] = unaff_ESI;
    unaff_EDI[4] = _Size;
    if (0xf < unaff_ESI) {
      unaff_EDI = puVar1;
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    *(undefined1 *)((int)unaff_EDI + _Size) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*unaff_EDI);
}

