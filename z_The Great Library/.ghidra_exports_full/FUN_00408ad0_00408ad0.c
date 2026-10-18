// FUN_00408ad0 @ 00408ad0 body=[[00408ad0, 00408ae0] [00408ae4, 00408af6]]


void FUN_00408ad0(void)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*in_ECX);
  }
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 0;
  return;
}

