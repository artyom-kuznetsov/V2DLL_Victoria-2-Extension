// FUN_005be2b0 @ 005be2b0 body=[[005be2b0, 005be2fd] [005be301, 005be327] [005be32b, 005be347]]


void FUN_005be2b0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b45ff3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CSubUnit::vftable;
  if (in_ECX[0xc] != 0) {
    FUN_004be200();
    in_ECX[0xc] = 0;
  }
  if (0xf < (uint)in_ECX[0x16]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  in_ECX[0x16] = 0xf;
  in_ECX[0x15] = 0;
  *(undefined1 *)(in_ECX + 0x11) = 0;
  *in_ECX = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0xf;
  *(undefined1 *)(in_ECX + 5) = 0;
  ExceptionList = local_10;
  return;
}

