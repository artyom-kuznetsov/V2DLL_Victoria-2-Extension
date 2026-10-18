// FUN_00861650 @ 00861650 body=[[00861650, 00861661] [00861665, 00861684] [00861688, 0086169a]]


void FUN_00861650(void)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0xc]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[7]);
  }
  in_ECX[0xc] = 0xf;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  if (0xf < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*in_ECX);
  }
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 0;
  return;
}

