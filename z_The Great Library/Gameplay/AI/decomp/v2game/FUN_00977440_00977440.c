// FUN_00977440 @ 00977440 body=[[00977440, 00977453] [00977457, 0097746e] [00977472, 00977498] [0097749c, 009774ac]]


void FUN_00977440(void)

{
  undefined4 *in_EAX;
  
  if (in_EAX[0x16] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_EAX[0x16]);
  }
  in_EAX[0x16] = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x18] = 0;
  if (0xf < (uint)in_EAX[0x11]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_EAX[0xc]);
  }
  in_EAX[0x11] = 0xf;
  in_EAX[0x10] = 0;
  *(undefined1 *)(in_EAX + 0xc) = 0;
  *in_EAX = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)in_EAX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_EAX[5]);
  }
  in_EAX[9] = 0;
  in_EAX[10] = 0xf;
  *(undefined1 *)(in_EAX + 5) = 0;
  return;
}

