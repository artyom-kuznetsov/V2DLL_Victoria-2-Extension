// FUN_009db4a0 @ 009db4a0 body=[[009db4a0, 009db4cd] [009db4d1, 009db4f2] [009db4f6, 009db505]]


void FUN_009db4a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3ba98;
  if ((FILE *)in_ECX[0xd] != (FILE *)0x0) {
    _fclose((FILE *)in_ECX[0xd]);
  }
  in_ECX[0xd] = 0;
  if (0xf < (uint)in_ECX[0x13]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xe]);
  }
  in_ECX[0x13] = 0xf;
  in_ECX[0x12] = 0;
  *(undefined1 *)(in_ECX + 0xe) = 0;
  *in_ECX = &PTR_FUN_00e3b540;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0xf;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}

