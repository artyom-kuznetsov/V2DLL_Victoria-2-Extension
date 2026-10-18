// FUN_004c8b40 @ 004c8b40 body=[[004c8b40, 004c8ba1]]


int FUN_004c8b40(void)

{
  int in_ECX;
  int iVar1;
  int unaff_ESI;
  
  if (((in_ECX < (*(int *)(unaff_ESI + 0xcc) - *(int *)(unaff_ESI + 200)) / 0x24) &&
      (in_ECX < *(int *)(unaff_ESI + 0x88) - *(int *)(unaff_ESI + 0x84) >> 4)) &&
     ((iVar1 = in_ECX * 0x10 + *(int *)(unaff_ESI + 0x84), *(float *)(iVar1 + 8) != 0.0 ||
      (*(float *)(iVar1 + 0xc) != 0.0)))) {
    return iVar1;
  }
  return 0;
}

