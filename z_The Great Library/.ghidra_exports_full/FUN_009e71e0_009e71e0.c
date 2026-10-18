// FUN_009e71e0 @ 009e71e0 body=[[009e71e0, 009e722e] [009e7232, 009e725f] [009e7263, 009e7286] [009e728a, 009e72a7] [009e72ab, 009e72df] [009e72e3, 009e72fc]]


void FUN_009e71e0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3dcca;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3c258;
  local_8 = 4;
  FUN_009963d0(in_ECX[0x16]);
  if (0xf < (uint)in_ECX[0x3e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x39]);
  }
  in_ECX[0x3e] = 0xf;
  in_ECX[0x3d] = 0;
  *(undefined1 *)(in_ECX + 0x39) = 0;
  if (0xf < (uint)in_ECX[0x2b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x26]);
  }
  in_ECX[0x2b] = 0xf;
  in_ECX[0x2a] = 0;
  *(undefined1 *)(in_ECX + 0x26) = 0;
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

