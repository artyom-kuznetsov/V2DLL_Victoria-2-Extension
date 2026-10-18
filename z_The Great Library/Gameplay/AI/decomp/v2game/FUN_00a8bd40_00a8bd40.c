// FUN_00a8bd40 @ 00a8bd40 body=[[00a8bd40, 00a8bd6d]]


void FUN_00a8bd40(void)

{
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x260) = 0xffffffff;
  _memset((void *)(unaff_ESI + 0x58),0,0x100);
  *(int *)(unaff_ESI + 0x26c) = *(int *)(unaff_ESI + 0x26c) + 1;
  return;
}

