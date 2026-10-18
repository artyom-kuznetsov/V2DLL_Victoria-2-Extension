// FUN_00aa8f50 @ 00aa8f50 body=[[00aa8f50, 00aa8f6e] [00aa8f72, 00aa8f87]]


void FUN_00aa8f50(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00aa8f10(*in_ECX,in_ECX[1],in_ECX + 3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}

