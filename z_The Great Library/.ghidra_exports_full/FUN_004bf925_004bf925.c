// Catch_All@004bf925 @ 004bf925 body=[[004bf925, 004bf948]]


void Catch_All_004bf925(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    FUN_004bf870(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

