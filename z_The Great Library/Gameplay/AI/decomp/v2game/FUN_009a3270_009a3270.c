// FUN_009a3270 @ 009a3270 body=[[009a3270, 009a327c] [009a3280, 009a3299]]


void FUN_009a3270(void)

{
  undefined4 *puVar1;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 0x238) = 1;
  for (puVar1 = *(undefined4 **)(unaff_EDI + 0x5c);
      (*(undefined4 **)(unaff_EDI + 0x5c) <= puVar1 && (puVar1 < *(undefined4 **)(unaff_EDI + 0x60))
      ); puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x30))();
  }
  return;
}

