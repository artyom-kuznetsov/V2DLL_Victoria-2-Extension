// FUN_00849ff0 @ 00849ff0 body=[[00849ff0, 0084a058]]


void FUN_00849ff0(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)
           FUN_00825e50(*(undefined4 *)(unaff_ESI + 0x34),*(undefined4 *)(unaff_ESI + 0x38));
  puVar1[0x19] = unaff_ESI;
  *puVar1 = CAIAdmiral::vftable;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  return;
}

