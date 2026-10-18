// FUN_00a66ca5 @ 00a66ca5 body=[[00a66ca5, 00a66d5f]]


void FUN_00a66ca5(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  FUN_00a89eb0(*unaff_ESI,unaff_ESI[1] - *unaff_ESI,1);
  iVar1 = FUN_00a89f70(*(undefined4 *)(*(int *)(unaff_EDI + 0x18) + 0x20));
  if (iVar1 == -1) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x38) = unaff_EBX;
    *(char *)(unaff_EBP + -0x48) = (char)unaff_EBX;
    FUN_00409350("server.cpp",10);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_004015b0(unaff_EBP + -0x48,0x736,0x301);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar2 = FUN_00987d20();
    FUN_00401280(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00987ac0(unaff_EBP + -0x90);
    *(undefined ***)(unaff_EBP + -0x90) = std::ios_base::vftable;
    FUN_00aad52d(unaff_EBP + -0x90);
    if (0xf < *(uint *)(unaff_EBP + -0x34)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x48));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(char *)(unaff_EDI + 0xf0) = (char)unaff_EBX;
  return;
}

