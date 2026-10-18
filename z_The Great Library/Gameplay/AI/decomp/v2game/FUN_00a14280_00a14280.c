// FUN_00a14280 @ 00a14280 body=[[00a14280, 00a1429f] [00a142a3, 00a142d0] [00a142d4, 00a14312] [00a14316, 00a14326]]


void FUN_00a14280(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3eec8;
  if (0xf < (uint)in_ECX[0x33]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2e]);
  }
  in_ECX[0x33] = 0xf;
  in_ECX[0x32] = 0;
  *(undefined1 *)(in_ECX + 0x2e) = 0;
  if (0xf < (uint)in_ECX[0x2a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x25]);
  }
  in_ECX[0x2a] = 0xf;
  in_ECX[0x29] = 0;
  *(undefined1 *)(in_ECX + 0x25) = 0;
  FUN_009d6f00();
  FUN_00a15810(in_ECX + 0xc);
  *in_ECX = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0xf;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}

