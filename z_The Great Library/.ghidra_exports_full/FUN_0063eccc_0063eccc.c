// Catch_All@0063eccc @ 0063eccc body=[[0063eccc, 0063ed8c]]


void Catch_All_0063eccc(void)

{
  undefined4 uVar1;
  LPCSTR lpText;
  int unaff_EBP;
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  *(undefined1 **)(unaff_EBP + 8) = auStack_1c;
  FUN_00401320();
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  uVar1 = FUN_004015b0(unaff_EBP + -0x12f8,0x52f,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  uVar1 = FUN_004238b0(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  FUN_00401650();
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  FUN_00408ad0();
  lpText = *(LPCSTR *)(unaff_EBP + -0xf64);
  if (*(uint *)(unaff_EBP + -0xf50) < 0x10) {
    lpText = (LPCSTR)(unaff_EBP + -0xf64);
  }
  uStack_14 = 0x63ed84;
  MessageBoxA((HWND)0x0,lpText,"Unknown exception!",0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8();
}

