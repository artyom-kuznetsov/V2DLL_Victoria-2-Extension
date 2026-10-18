// FUN_00a5de90 @ 00a5de90 body=[[00a5de90, 00a5def8] [00a5df02, 00a5df28] [00a5df2c, 00a5df57] [00a5df5b, 00a5df81] [00a5df85, 00a5dfa8] [00a5dfac, 00a5dfc6] [00a5dfca, 00a5dfe1] [00a5dfe5, 00a5dffc] [00a5e000, 00a5e019]]


void FUN_00a5de90(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b3b61b;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e41ee0;
  local_8 = 5;
  for (piVar1 = (int *)in_ECX[0x3f]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  if (in_ECX[0x3f] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3f]);
  }
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  if (0xf < (uint)in_ECX[0x3c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x37]);
  }
  in_ECX[0x3c] = 0xf;
  in_ECX[0x3b] = 0;
  *(undefined1 *)(in_ECX + 0x37) = 0;
  if (0xf < (uint)in_ECX[0x2e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x29]);
  }
  in_ECX[0x2e] = 0xf;
  in_ECX[0x2d] = 0;
  *(undefined1 *)(in_ECX + 0x29) = 0;
  if (0xf < (uint)in_ECX[0x27]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x22]);
  }
  in_ECX[0x27] = 0xf;
  in_ECX[0x26] = 0;
  *(undefined1 *)(in_ECX + 0x22) = 0;
  if (0xf < (uint)in_ECX[0x20]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1b]);
  }
  in_ECX[0x20] = 0xf;
  in_ECX[0x1f] = 0;
  *(undefined1 *)(in_ECX + 0x1b) = 0;
  if (0xf < (uint)in_ECX[0x15]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x10]);
  }
  in_ECX[0x15] = 0xf;
  in_ECX[0x14] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  if (0xf < (uint)in_ECX[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
  in_ECX[0xe] = 0xf;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  ExceptionList = local_10;
  return;
}

