// FUN_0076beac @ 0076beac body=[[0076beac, 0076bf15]]


void FUN_0076beac(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int unaff_EBP;
  
  if (DAT_012589ac == 1) {
    iVar1 = FUN_00aae9af(0x48);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0072b360(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(unaff_EBX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

