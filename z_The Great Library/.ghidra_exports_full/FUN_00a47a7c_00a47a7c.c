// Catch_All@00a47a7c @ 00a47a7c body=[[00a47a7c, 00a47abe]]


void Catch_All_00a47a7c(void)

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
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      if ((uint)(*(int *)(iVar2 + 8) * 2) <= *(uint *)(iVar2 + 0xc)) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
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

