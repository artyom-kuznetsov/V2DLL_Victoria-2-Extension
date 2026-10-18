// FUN_00a0fbf0 @ 00a0fbf0 body=[[00a0fbf0, 00a0fc12] [00a0fc16, 00a0fc30] [00a0fc34, 00a0fc3a]]


void FUN_00a0fbf0(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_00a16170();
  *in_ECX = CCommand::vftable;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

