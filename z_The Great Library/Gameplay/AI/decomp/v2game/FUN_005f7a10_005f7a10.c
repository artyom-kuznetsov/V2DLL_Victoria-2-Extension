// FUN_005f7a10 @ 005f7a10 body=[[005f7a10, 005f7a24] [005f7a28, 005f7a43]]


void FUN_005f7a10(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x6c));
  }
  *(undefined4 *)(in_ECX + 0x80) = 0xf;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined1 *)(in_ECX + 0x6c) = 0;
  FUN_00459820();
  return;
}

