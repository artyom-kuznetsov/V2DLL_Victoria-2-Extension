// FUN_004577c0 @ 004577c0 body=[[004577c0, 00457828]]


void FUN_004577c0(void)

{
  int in_EAX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  if (in_EAX == 0) {
    FUN_00409350("large",5);
    return;
  }
  if (in_EAX != 1) {
    if (in_EAX != 2) {
      FUN_00409350(&DAT_00ded974,1);
      return;
    }
    FUN_00409350("small",5);
    return;
  }
  FUN_00409350("medium",6);
  return;
}

