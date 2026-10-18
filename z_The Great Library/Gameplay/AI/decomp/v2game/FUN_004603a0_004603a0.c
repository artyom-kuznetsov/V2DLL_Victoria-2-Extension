// FUN_004603a0 @ 004603a0 body=[[004603a0, 004603c8]]


void FUN_004603a0(void)

{
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00409350("news_layout.txt",0xf);
  return;
}

