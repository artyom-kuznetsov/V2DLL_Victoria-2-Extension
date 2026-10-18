// FUN_00640590 @ 00640590 body=[[00640590, 006405f3]]


void FUN_00640590(void)

{
  code *pcVar1;
  int *unaff_ESI;
  int in_XMM0_Da;
  
  pcVar1 = *(code **)(*unaff_ESI + 0x180);
  unaff_ESI[0xd1] = in_XMM0_Da;
  unaff_ESI[0xd2] = in_XMM0_Da;
  unaff_ESI[0xba] = 0;
  unaff_ESI[0xbb] = in_XMM0_Da;
  unaff_ESI[0xbc] = 0;
  (*pcVar1)(unaff_ESI + 0xbd);
  (**(code **)(*unaff_ESI + 0x17c))(unaff_ESI + 0xba);
  if (DAT_012588dc != 0) {
    *(undefined4 *)(DAT_012588dc + 0x3654) = 0;
  }
  return;
}

