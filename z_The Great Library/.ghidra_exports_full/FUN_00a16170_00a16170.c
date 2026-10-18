// FUN_00a16170 @ 00a16170 body=[[00a16170, 00a1618e] [00a16192, 00a161a3] [00a161a7, 00a161ca] [00a161ce, 00a161e6] [00a161ea, 00a1620b] [00a16211, 00a1621d]]


void FUN_00a16170(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[6];
  *in_ECX = &PTR_FUN_00e3f050;
  if (iVar1 != 0) {
    FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (0xf < (uint)in_ECX[0x21]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1c]);
  }
  in_ECX[0x21] = 0xf;
  in_ECX[0x20] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  if (0xf < (uint)in_ECX[0x17]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x12]);
  }
  in_ECX[0x17] = 0xf;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x12) = 0;
  if (0xf < (uint)in_ECX[0x10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xb]);
  }
  in_ECX[0x10] = 0xf;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0xb) = 0;
  if (in_ECX[2] != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}

