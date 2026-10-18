// FUN_0078e7d0 @ 0078e7d0 body=[[0078e7d0, 0078e81e]]


void FUN_0078e7d0(void)

{
  char cVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  cVar1 = (**(code **)(**(int **)(unaff_EDI + 600) + 0x38))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(int **)(unaff_EDI + 600) + 0x2c))();
    if (*(int *)(iVar2 + 0x1b4) == 0) {
      uVar3 = (**(code **)(**(int **)(unaff_EDI + 600) + 0x2c))();
      FUN_00790d40(uVar3);
      FUN_00791430(in_EAX);
    }
  }
  return;
}

