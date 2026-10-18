// FUN_009c2f40 @ 009c2f40 body=[[009c2f40, 009c2faa] [009c2fae, 009c2fca]]


void FUN_009c2f40(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bc88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3a5b8;
  in_ECX[0x15] = &PTR_LAB_00e3a6c4;
  local_8 = 0;
  in_ECX[0x15] = &PTR_FUN_00e3a598;
  FUN_009c3b40();
  *in_ECX = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(in_ECX[0xd] + 0x98) == in_ECX) {
    *(undefined4 *)(in_ECX[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
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

