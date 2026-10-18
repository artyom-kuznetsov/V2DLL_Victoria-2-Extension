// Catch_All@00690002 @ 00690002 body=[[00690002, 00690024]]


void Catch_All_00690002(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    FUN_0068ff60();
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

