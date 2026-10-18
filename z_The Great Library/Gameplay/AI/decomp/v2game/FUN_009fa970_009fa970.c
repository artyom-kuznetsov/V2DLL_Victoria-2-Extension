// FUN_009fa970 @ 009fa970 body=[[009fa970, 009fa988] [009fa98c, 009fa9a9] [009fa9ad, 009fa9ce] [009fa9d2, 009fa9e1]]


void FUN_009fa970(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3e55c;
  if (0xf < (uint)in_ECX[0x1b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x16]);
  }
  in_ECX[0x1b] = 0xf;
  in_ECX[0x1a] = 0;
  *(undefined1 *)(in_ECX + 0x16) = 0;
  if (0xf < (uint)in_ECX[0x14]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xf]);
  }
  in_ECX[0x14] = 0xf;
  in_ECX[0x13] = 0;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  *in_ECX = CCommand::vftable;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0xf;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

