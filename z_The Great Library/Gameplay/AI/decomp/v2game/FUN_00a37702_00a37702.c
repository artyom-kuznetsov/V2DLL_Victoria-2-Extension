// Catch_All@00a37702 @ 00a37702 body=[[00a37702, 00a37722]]


void Catch_All_00a37702(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  uVar3 = *(uint *)(unaff_EBP + -0x14);
  uVar1 = *(uint *)(iVar2 + 0x10);
  while (uVar3 < uVar1) {
    FUN_00a36ed0();
    uVar1 = *(uint *)(iVar2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

