// FUN_004ede10 @ 004ede10 body=[[004ede10, 004edecc] [004eded0, 004edf12]]


void FUN_004ede10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  if (param_2 == 0x42e) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0xc);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  else {
    if (param_2 != 0x841) {
      FUN_009a0f40();
      return;
    }
    FUN_009a1440(param_1);
    iVar1 = FUN_00aaf0c5(*(int *)(param_1 + 0x1c) + 0x10);
    FUN_009a1440(param_1);
    iVar2 = FUN_00aaf0c5(*(int *)(param_1 + 0x1c) + 0x10);
    FUN_009a1440(param_1);
    iVar3 = FUN_00aaf0c5(*(int *)(param_1 + 0x1c) + 0x10);
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    iVar3 = *(int *)(iVar3 * 0x10 +
                    *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 0x194));
    iVar1 = iVar3;
    for (iVar4 = iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar1 = *(int *)(iVar1 + 0x27c);
    }
    if (iVar1 != 0) {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar3 = *(int *)(iVar3 + 0x27c);
      }
      *(int *)(in_ECX + 8) = iVar3;
    }
  }
  return;
}

