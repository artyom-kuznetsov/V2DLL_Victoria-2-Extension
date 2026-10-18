// Catch_All@00aa8ece @ 00aa8ece body=[[00aa8ece, 00aa8edc] [00aa8ee0, 00aa8ef9]]


void Catch_All_00aa8ece(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar3 != iVar1) {
    uVar2 = *(undefined4 *)(unaff_EBP + 0x14);
    do {
      FUN_00aa8e30(uVar2,iVar3);
      iVar3 = iVar3 + 0x14;
    } while (iVar3 != iVar1);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

