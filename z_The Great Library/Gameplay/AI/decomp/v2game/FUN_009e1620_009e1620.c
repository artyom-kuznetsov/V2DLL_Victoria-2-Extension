// FUN_009e1620 @ 009e1620 body=[[009e1620, 009e1662] [009e1666, 009e1680]]


void FUN_009e1620(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = in_ECX + 6;
  *in_ECX = &PTR_FUN_00e3bf88;
  *puVar1 = &PTR_FUN_00e3c028;
  *puVar1 = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(in_ECX[0x13] + 0x98) == puVar1) {
    *(undefined4 *)(in_ECX[0x13] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)in_ECX[0x10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xb]);
  }
  in_ECX[0x10] = 0xf;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0xb) = 0;
  FUN_009e6690();
  return;
}

