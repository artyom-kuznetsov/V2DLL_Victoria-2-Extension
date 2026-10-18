// FUN_009a6660 @ 009a6660 body=[[009a6660, 009a66b1] [009a66b5, 009a66df] [009a66e3, 009a6700] [009a6704, 009a6738] [009a673c, 009a6755]]


void FUN_009a6660(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3be9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e38738;
  local_8 = 3;
  FUN_009963d0(in_ECX[0x28]);
  if (0xf < (uint)in_ECX[0x3c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x37]);
  }
  in_ECX[0x3c] = 0xf;
  in_ECX[0x3b] = 0;
  *(undefined1 *)(in_ECX + 0x37) = 0;
  if (0xf < (uint)in_ECX[0x24]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1f]);
  }
  in_ECX[0x24] = 0xf;
  in_ECX[0x23] = 0;
  *(undefined1 *)(in_ECX + 0x1f) = 0;
  if (0xf < (uint)in_ECX[0x1d]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x18]);
  }
  in_ECX[0x1d] = 0xf;
  in_ECX[0x1c] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  *in_ECX = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(in_ECX[0xd] + 0x98) == in_ECX) {
    *(undefined4 *)(in_ECX[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[10] = 0xf;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  ExceptionList = local_10;
  return;
}

