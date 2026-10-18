// FUN_0040a7c0 @ 0040a7c0 body=[[0040a7c0, 0040a7d7] [0040a7db, 0040a7eb]]


void FUN_0040a7c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CCommand::vftable;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

