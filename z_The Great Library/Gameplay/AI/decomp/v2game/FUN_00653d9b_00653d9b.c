// FUN_00653d9b @ 00653d9b body=[[00653d9b, 00653f51] [00653f55, 00653f7d] [00653f81, 00653f93]]


void FUN_00653d9b(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_EDI;
  
  (**(code **)(**(int **)(unaff_EDI[0x5fa] + 0xe4) + 0x10))(0);
  if (DAT_00f07da6 == '\0') {
    (**(code **)(*unaff_EDI + 0x58))(unaff_EBP + -200);
    FUN_0055dd40();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_009885d0();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_009885d0();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_009896d0(unaff_EBP + -0xa0);
    FUN_00408ad0();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00408ad0();
    FUN_009885d0();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    uVar1 = FUN_0043b0d0(DAT_012588e8 + 0xb0c,unaff_EBP + -0x104);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00988f20(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_00988f20(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    uVar1 = FUN_00988f20(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_00408ed0(uVar1,0,0xffffffff);
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00408ad0();
    piVar2 = (int *)FUN_009a71d0();
    (**(code **)(*piVar2 + 0x2c))(unaff_EBP + -0x84,unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00408ad0();
  }
  if ((char)unaff_EDI[0x17] != '\0') {
    iVar3 = FUN_00aae9af(0x40);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0072d2f0(iVar3,0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar3 = (**(code **)(*unaff_EDI + 0x44))();
    (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar1);
  }
  if (0xf < *(uint *)(unaff_EBP + -0x70)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x84));
  }
  *(undefined4 *)(unaff_EBP + -0x70) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined1 *)(unaff_EBP + -0x84) = 0;
  if (0xf < *(uint *)(unaff_EBP + -0xa8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xbc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

