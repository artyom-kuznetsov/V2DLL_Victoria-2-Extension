// FUN_009a92a0 @ 009a92a0 body=[[009a92a0, 009a92f6]]


void FUN_009a92a0(void)

{
  int in_EAX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  if (in_EAX == 0) {
    FUN_00409350("SINGULAR",8);
    return;
  }
  if (in_EAX != 1) {
    FUN_00409350(&DAT_00ded94d,0);
    return;
  }
  FUN_00409350("PLURAL",6);
  return;
}

