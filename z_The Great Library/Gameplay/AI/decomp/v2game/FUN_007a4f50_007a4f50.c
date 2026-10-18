// FUN_007a4f50 @ 007a4f50 body=[[007a4f50, 007a4f62] [007a4f66, 007a4f8e] [007a4f92, 007a4fa1]]


void FUN_007a4f50(void)

{
  undefined4 *in_EAX;
  
  if (0xf < (uint)in_EAX[0x12]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_EAX[0xd]);
  }
  in_EAX[0x12] = 0xf;
  in_EAX[0x11] = 0;
  *(undefined1 *)(in_EAX + 0xd) = 0;
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

