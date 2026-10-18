// FUN_00414910 @ 00414910 body=[[00414910, 004149ce]]


void FUN_00414910(void)

{
  int in_EAX;
  undefined4 in_ECX;
  undefined1 *unaff_ESI;
  
  switch(in_ECX) {
  case 1:
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00408ed0(in_EAX + 0x90,0,0xffffffff);
    return;
  case 2:
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00408ed0(in_EAX + 0xac,0,0xffffffff);
    return;
  case 3:
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00408ed0(in_EAX + 200,0,0xffffffff);
    return;
  case 4:
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00408ed0(in_EAX + 0x74,0,0xffffffff);
    return;
  default:
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00409350(&DAT_00ded94d,0);
    return;
  }
}

