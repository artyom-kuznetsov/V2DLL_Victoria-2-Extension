// FUN_00833650 @ 00833650 body=[[00833650, 008336b6]]


void FUN_00833650(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  
  puVar2 = (undefined4 *)
           FUN_00825e50(*(undefined4 *)(unaff_ESI + 0x30),*(undefined4 *)(unaff_ESI + 0x34));
  puVar2[0x1a] = 0;
  puVar2[0x1e] = 0;
  iVar1 = DAT_012588e8;
  *puVar2 = CAIForeignMinister::vftable;
  puVar2[0x19] = unaff_ESI;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0xffffffff;
  puVar2[0x1d] = 0x2d2d2d;
  puVar2[0x1f] = 0;
  puVar2[0x21] = *(undefined4 *)(iVar1 + 0xb0c);
  puVar2[0x22] = *(undefined4 *)(iVar1 + 0xb0c);
  return;
}

