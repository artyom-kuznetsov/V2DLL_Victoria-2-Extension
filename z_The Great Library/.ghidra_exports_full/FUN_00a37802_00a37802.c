// Catch_All@00a37802 @ 00a37802 body=[[00a37802, 00a37822]]


void Catch_All_00a37802(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  uVar3 = *(uint *)(unaff_EBP + -0x14);
  uVar1 = *(uint *)(iVar2 + 0x10);
  while (uVar3 < uVar1) {
    FUN_00868640();
    uVar1 = *(uint *)(iVar2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

