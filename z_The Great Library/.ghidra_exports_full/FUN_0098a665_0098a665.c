// FUN_0098a665 @ 0098a665 body=[[0098a665, 0098a695] [0098a69c, 0098a6c3]]


void FUN_0098a665(void)

{
  undefined4 *_Src;
  int iVar1;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar1 = 0;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    _Src = unaff_EDI;
    if (7 < (uint)unaff_EDI[5]) {
      _Src = (undefined4 *)*unaff_EDI;
    }
    FID_conflict__memcpy(unaff_EBX,_Src,*(int *)(unaff_EBP + 0x10) * 2);
    iVar1 = *(int *)(unaff_EBP + 0x10);
  }
  if ((uint)unaff_EDI[5] < 8) {
    *unaff_EDI = unaff_EBX;
    unaff_EDI[5] = unaff_ESI;
    unaff_EDI[4] = iVar1;
    if (7 < unaff_ESI) {
      unaff_EDI = unaff_EBX;
    }
    *(undefined2 *)((int)unaff_EDI + iVar1 * 2) = 0;
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*unaff_EDI);
}

