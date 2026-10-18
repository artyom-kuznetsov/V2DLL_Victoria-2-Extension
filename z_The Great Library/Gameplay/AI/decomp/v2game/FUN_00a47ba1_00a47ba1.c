// Catch_All@00a47ba1 @ 00a47ba1 body=[[00a47ba1, 00a47bce]]


void Catch_All_00a47ba1(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  uVar3 = *(uint *)(unaff_EBP + -0x14);
  uVar4 = *(uint *)(iVar2 + 0x10);
  uVar1 = uVar4;
  while (uVar3 < uVar1) {
    if (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      *(uint *)(iVar2 + 0x10) = uVar4;
      if (uVar4 == 0) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
    }
    uVar1 = *(uint *)(iVar2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

