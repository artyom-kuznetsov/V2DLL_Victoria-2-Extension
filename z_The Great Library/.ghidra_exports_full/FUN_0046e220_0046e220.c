// FUN_0046e220 @ 0046e220 body=[[0046e220, 0046e267] [0046e26b, 0046e2e7]]


void FUN_0046e220(int param_1)

{
  int iVar1;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar1 = *(int *)(unaff_EDI + 0x3c);
  ExceptionList = &local_10;
  if (iVar1 != 0) {
    ExceptionList = &local_10;
    if (*(int *)(iVar1 + 4) != 0) {
      ExceptionList = &local_10;
      (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + 0x38))();
    }
    iVar1 = *(int *)(unaff_EDI + 0x3c);
    if (iVar1 != 0) {
      FUN_0046d420(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  }
  if (param_1 != 0) {
    iVar1 = FUN_00aae9af(0x44);
    local_8 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0046d360(iVar1,*(undefined4 *)(unaff_EDI + 8));
    }
    local_8 = 0xffffffff;
    *(int *)(unaff_EDI + 0x3c) = iVar1;
    if (*(int *)(iVar1 + 4) != 0) {
      (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + 0x34))();
      (**(code **)(**(int **)(iVar1 + 4) + 0x2c))();
    }
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  ExceptionList = local_10;
  return;
}

