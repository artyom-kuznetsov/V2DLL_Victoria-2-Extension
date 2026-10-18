// FUN_00974c80 @ 00974c80 body=[[00974c80, 00974c98] [00974c9c, 00974cb9] [00974cbd, 00974cd6] [00974cda, 00974ce5]]


void FUN_00974c80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CIssueGroup::vftable;
  if (0xf < (uint)in_ECX[0x12]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd]);
  }
  in_ECX[0x12] = 0xf;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  if (0xf < (uint)in_ECX[0xb]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[6]);
  }
  in_ECX[0xb] = 0xf;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  if (in_ECX[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}

