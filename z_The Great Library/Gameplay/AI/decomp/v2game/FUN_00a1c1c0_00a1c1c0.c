// FUN_00a1c1c0 @ 00a1c1c0 body=[[00a1c1c0, 00a1c1fa]]


int FUN_00a1c1c0(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return -0x66;
  }
  *(undefined4 *)(unaff_ESI + 0x14) = *(undefined4 *)(unaff_ESI + 0x24);
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  iVar1 = FUN_00a1bf60(unaff_ESI + 0x28,unaff_ESI + 0x78,0);
  *(uint *)(unaff_ESI + 0x18) = (uint)(iVar1 == 0);
  return iVar1;
}

