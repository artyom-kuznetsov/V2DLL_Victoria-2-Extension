// FUN_00a7b4e0 @ 00a7b4e0 body=[[00a7b4e0, 00a7b4f8] [00a7b4fc, 00a7b519] [00a7b51d, 00a7b52c]]


void FUN_00a7b4e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e37db4;
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
  in_ECX[6] = 0;
  in_ECX[7] = 0xf;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

