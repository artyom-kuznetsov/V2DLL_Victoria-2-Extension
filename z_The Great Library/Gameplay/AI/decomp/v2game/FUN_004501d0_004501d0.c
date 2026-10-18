// FUN_004501d0 @ 004501d0 body=[[004501d0, 00450213]]


/* WARNING: Removing unreachable block (ram,0x004501f2) */
/* WARNING: Removing unreachable block (ram,0x004501f3) */
/* WARNING: Removing unreachable block (ram,0x00450207) */

void FUN_004501d0(void)

{
  int iVar1;
  int in_EAX;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x2d4 + in_EAX * 0x10);
  if (iVar1 != *(int *)(unaff_EDI + 0x2d8 + in_EAX * 0x10)) {
    *(int *)(unaff_EDI + in_EAX * 0x10 + 0x2d8) = iVar1;
  }
  *(undefined1 *)(unaff_EDI + 0x3bb) = 1;
  return;
}

