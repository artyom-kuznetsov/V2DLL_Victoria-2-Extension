// FUN_00504700 @ 00504700 body=[[00504700, 00504748]]


void FUN_00504700(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_EDI + 4);
  *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(unaff_EDI + 8);
  FUN_00504750();
  FUN_00504750();
  *(undefined4 *)(unaff_ESI + 0x9c) = *(undefined4 *)(unaff_EDI + 0x9c);
  *(undefined4 *)(unaff_ESI + 0xa0) = *(undefined4 *)(unaff_EDI + 0xa0);
  *(undefined4 *)(unaff_ESI + 0xa4) = *(undefined4 *)(unaff_EDI + 0xa4);
  return;
}

