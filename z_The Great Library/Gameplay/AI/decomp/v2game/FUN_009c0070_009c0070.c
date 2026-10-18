// FUN_009c0070 @ 009c0070 body=[[009c0070, 009c00c3]]


void FUN_009c0070(void)

{
  int iVar1;
  int in_EAX;
  int unaff_ESI;
  uint unaff_EDI;
  
  if (unaff_EDI < (uint)((*(int *)(in_EAX + 0x160) - *(int *)(in_EAX + 0x15c)) / 0x1c)) {
    iVar1 = *(int *)(in_EAX + 0x15c) + unaff_EDI * 0x1c;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_ESI + 4);
    *(undefined8 *)(iVar1 + 8) = *(undefined8 *)(unaff_ESI + 8);
    *(undefined8 *)(iVar1 + 0x10) = *(undefined8 *)(unaff_ESI + 0x10);
    *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(unaff_ESI + 0x18);
  }
  return;
}

