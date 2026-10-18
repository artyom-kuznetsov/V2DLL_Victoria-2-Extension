// FUN_008ae250 @ 008ae250 body=[[008ae250, 008ae28f]]


void FUN_008ae250(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x18d;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  *(undefined2 *)(unaff_ESI + 6) = 0;
  *unaff_ESI = CMTTHModifier::vftable;
  *(undefined1 *)(unaff_ESI + 7) = 0;
  FUN_00401000(0x447a1fff);
  uVar1 = FUN_00b31c00();
  unaff_ESI[8] = uVar1;
  return;
}

