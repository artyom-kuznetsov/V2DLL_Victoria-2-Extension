// FUN_006f7ef0 @ 006f7ef0 body=[[006f7ef0, 006f7f77]]


void FUN_006f7ef0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  
  iVar1 = *(int *)(param_1 + 0x3b8);
  iVar2 = *(int *)(iVar1 + 4);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x67) != '\0')) {
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 8) = 0x2d2d2d;
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x3b8);
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 8) = *unaff_EDI;
    *(undefined4 *)(iVar1 + 0xc) = unaff_EDI[1];
    FUN_00477ad0(iVar1);
    (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + 0x34))();
    (**(code **)(**(int **)(iVar1 + 4) + 0x2c))();
  }
  return;
}

