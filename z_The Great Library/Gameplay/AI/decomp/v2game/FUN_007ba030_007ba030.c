// FUN_007ba030 @ 007ba030 body=[[007ba030, 007ba07b]]


void FUN_007ba030(void)

{
  int in_EAX;
  int in_ECX;
  undefined1 *unaff_ESI;
  
  if (*(int *)(in_EAX + 0x48) - *(int *)(in_EAX + 0x44) >> 2 <= in_ECX) {
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00409350(&DAT_00ded94d,0);
    return;
  }
  FUN_007b9520(in_EAX,unaff_ESI,*(undefined4 *)(*(int *)(in_EAX + 0x44) + in_ECX * 4));
  return;
}

