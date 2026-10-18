// FUN_004be9e0 @ 004be9e0 body=[[004be9e0, 004be9f5] [004be9f9, 004bea0e] [004bea12, 004bea26] [004bea2a, 004bea31]]


void FUN_004be9e0(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x18));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  if (*(int *)(in_ECX + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

