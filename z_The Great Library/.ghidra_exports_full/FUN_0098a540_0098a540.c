// FUN_0098a540 @ 0098a540 body=[[0098a540, 0098a588]]


bool FUN_0098a540(void)

{
  undefined4 *in_EAX;
  uint unaff_ESI;
  
  if (0x7ffffffe < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  if ((uint)in_EAX[5] < unaff_ESI) {
    FUN_0098a590();
    return unaff_ESI != 0;
  }
  if (unaff_ESI == 0) {
    in_EAX[4] = 0;
    if (7 < (uint)in_EAX[5]) {
      in_EAX = (undefined4 *)*in_EAX;
    }
    *(undefined2 *)in_EAX = 0;
  }
  return unaff_ESI != 0;
}

