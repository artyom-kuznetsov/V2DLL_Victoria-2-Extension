// FUN_00892b80 @ 00892b80 body=[[00892b80, 00892c0f]]


void FUN_00892b80(int param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 300
                      );
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x38))();
    if ((cVar1 != '\0') && (iVar2 != 0)) {
      FUN_005e64f0(*(undefined4 *)(in_ECX + 0x20));
    }
  }
  return;
}

