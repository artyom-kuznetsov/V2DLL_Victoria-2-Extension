// FUN_007221b0 @ 007221b0 body=[[007221b0, 007221cf]]


void FUN_007221b0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(unaff_EDI + 0x5c);
  while (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    FUN_0071b3b0(uVar2);
  }
  *(undefined4 *)(unaff_EDI + 0x70) = 0;
  return;
}

