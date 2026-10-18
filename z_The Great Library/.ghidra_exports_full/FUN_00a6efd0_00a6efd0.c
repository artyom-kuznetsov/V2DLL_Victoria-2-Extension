// FUN_00a6efd0 @ 00a6efd0 body=[[00a6efd0, 00a6efe7] [00a6efeb, 00a6f010] [00a6f014, 00a6f01a]]


void FUN_00a6efd0(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x88)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x74));
  }
  *(undefined4 *)(in_ECX + 0x88) = 0xf;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined1 *)(in_ECX + 0x74) = 0;
  FUN_006467c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

