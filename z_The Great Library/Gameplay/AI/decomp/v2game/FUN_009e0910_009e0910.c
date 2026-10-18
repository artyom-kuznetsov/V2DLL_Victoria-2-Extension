// FUN_009e0910 @ 009e0910 body=[[009e0910, 009e0950]]


void FUN_009e0910(void)

{
  undefined1 *in_EAX;
  undefined1 *unaff_ESI;
  
  if (*(int *)(in_EAX + 4) == 0x102) {
    FUN_00988e80(unaff_ESI,*in_EAX);
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

