// FUN_007e7890 @ 007e7890 body=[[007e7890, 007e78ad] [007e78b1, 007e78d6]]


void FUN_007e7890(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CSmallAvatarBase::vftable;
  if (0xf < (uint)in_ECX[0x43]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3e]);
  }
  in_ECX[0x43] = 0xf;
  in_ECX[0x42] = 0;
  *(undefined1 *)(in_ECX + 0x3e) = 0;
  *in_ECX = C3dObject::vftable;
  FUN_009f8f70();
  return;
}

