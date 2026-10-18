// Catch_All@00816275 @ 00816275 body=[[00816275, 00816294]]


void Catch_All_00816275(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  uVar3 = *(uint *)(unaff_EBP + -0x14);
  uVar1 = *(uint *)(iVar2 + 0x10);
  while (uVar3 < uVar1) {
    FUN_00815a40();
    uVar1 = *(uint *)(iVar2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

