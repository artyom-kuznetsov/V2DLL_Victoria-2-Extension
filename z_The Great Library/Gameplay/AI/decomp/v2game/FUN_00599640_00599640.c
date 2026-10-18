// FUN_00599640 @ 00599640 body=[[00599640, 0059969d]]


void FUN_00599640(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  FUN_00593880(unaff_ESI,in_EAX);
  *unaff_ESI = CLandCombatant::vftable;
  unaff_ESI[0x5b] = 0;
  unaff_ESI[0x5c] = 0;
  unaff_ESI[0x5d] = 0;
  *(undefined1 *)(unaff_ESI + 0x5e) = 0;
  unaff_ESI[0x5f] = 0;
  unaff_ESI[0x60] = 0;
  unaff_ESI[0x61] = 0;
  *(undefined1 *)(unaff_ESI + 0x62) = 0;
  *(undefined1 *)(unaff_ESI + 99) = 0;
  puVar1 = unaff_ESI + 0x3b;
  iVar2 = 0x20;
  do {
    puVar1[-0x20] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

