// Catch@0063ebe4 @ 0063ebe4 body=[[0063ebe4, 0063eccb]]


void Catch_0063ebe4(void)

{
  undefined4 uVar1;
  LPCSTR lpText;
  int unaff_EBP;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  (**(code **)(**(int **)(unaff_EBP + -0x998) + 4))();
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  FUN_00988fa0();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  *(undefined1 **)(unaff_EBP + 8) = auStack_20;
  FUN_00401320();
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  uVar1 = FUN_004015b0(unaff_EBP + -0x1464,0x528,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  uVar1 = FUN_004238b0(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  FUN_00401650();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  FUN_00408ad0();
  lpText = *(LPCSTR *)(unaff_EBP + -0xf80);
  if (*(uint *)(unaff_EBP + -0xf6c) < 0x10) {
    lpText = (LPCSTR)(unaff_EBP + -0xf80);
  }
  uStack_18 = 0x63ecc3;
  MessageBoxA((HWND)0x0,lpText,"File exception!",0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8();
}

