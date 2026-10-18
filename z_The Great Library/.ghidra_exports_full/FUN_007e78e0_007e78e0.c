// FUN_007e78e0 @ 007e78e0 body=[[007e78e0, 007e7900] [007e7904, 007e7934] [007e7938, 007e793e]]


void FUN_007e78e0(byte param_1)

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
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

