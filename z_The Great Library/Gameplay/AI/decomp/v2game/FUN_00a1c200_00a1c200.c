// FUN_00a1c200 @ 00a1c200 body=[[00a1c200, 00a1c254]]


int FUN_00a1c200(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return -0x66;
  }
  if ((*(int *)(unaff_ESI + 0x18) != 0) &&
     (iVar1 = *(int *)(unaff_ESI + 0x10) + 1, iVar1 != *(int *)(unaff_ESI + 4))) {
    *(int *)(unaff_ESI + 0x14) =
         *(int *)(unaff_ESI + 0x14) +
         *(int *)(unaff_ESI + 0x50) + *(int *)(unaff_ESI + 0x4c) + 0x2e + *(int *)(unaff_ESI + 0x48)
    ;
    *(int *)(unaff_ESI + 0x10) = iVar1;
    iVar1 = FUN_00a1bf60(unaff_ESI + 0x28,unaff_ESI + 0x78,0);
    *(uint *)(unaff_ESI + 0x18) = (uint)(iVar1 == 0);
    return iVar1;
  }
  return -100;
}

