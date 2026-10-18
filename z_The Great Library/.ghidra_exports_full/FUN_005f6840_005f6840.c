// FUN_005f6840 @ 005f6840 body=[[005f6840, 005f6872]]


void FUN_005f6840(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = __stricmp("yes",(char *)(in_EAX + 4));
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_EDI + 0x11) = 1;
    return;
  }
  iVar1 = __stricmp("no",(char *)(in_EAX + 4));
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_EDI + 0x11) = 0;
  }
  return;
}

