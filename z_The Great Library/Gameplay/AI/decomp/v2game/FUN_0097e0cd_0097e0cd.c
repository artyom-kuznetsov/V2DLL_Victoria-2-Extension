// Catch@0097e0cd @ 0097e0cd body=[[0097e0cd, 0097e1b8]]


undefined4 Catch_0097e0cd(void)

{
  undefined4 uVar1;
  LPCSTR lpText;
  int unaff_EBP;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  (**(code **)(**(int **)(unaff_EBP + -0x728) + 4))();
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  FUN_00988fa0();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  *(undefined1 **)(unaff_EBP + 0x10) = auStack_20;
  FUN_00401320();
  *(undefined1 *)(unaff_EBP + -4) = 0x8a;
  uVar1 = FUN_004015b0(unaff_EBP + -0xf60,0x1f6,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0x8b;
  *(undefined1 *)(unaff_EBP + -4) = 0x8c;
  uVar1 = FUN_004238b0(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  FUN_00401650();
  FUN_00408ad0();
  lpText = *(LPCSTR *)(unaff_EBP + -0xb00);
  if (*(uint *)(unaff_EBP + -0xaec) < 0x10) {
    lpText = (LPCSTR)(unaff_EBP + -0xb00);
  }
  uStack_18 = 0x97e1a8;
  MessageBoxA((HWND)0x0,lpText,"Error!",0x30);
  FUN_00408ad0();
  return 0x97ddc8;
}

