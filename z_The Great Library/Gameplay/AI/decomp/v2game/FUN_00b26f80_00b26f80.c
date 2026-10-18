// FUN_00b26f80 @ 00b26f80 body=[[00b26f80, 00b26fd7]]


int FUN_00b26f80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00b26eb0();
  iVar1 = FUN_00b26dc0();
  if (iVar1 != 0) {
    iVar2 = FUN_00b27360(param_1);
    if (iVar2 == 0) {
      (*DAT_013f3ab0)();
      return 0;
    }
    if (*(int *)(iVar1 + 4) != 0) {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  (*DAT_013f3ab0)();
  return iVar1;
}

