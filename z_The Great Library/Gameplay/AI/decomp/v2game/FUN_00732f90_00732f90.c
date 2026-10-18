// FUN_00732f90 @ 00732f90 body=[[00732f90, 00733079]]


void FUN_00732f90(void)

{
  int iVar1;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  local_14 = ExceptionList;
  if ((*(uint *)(in_ECX + 0x78) != 0) || (*(int *)(in_ECX + 0x7c) != 0)) {
    iVar1 = DAT_01258a94;
    if (*(uint *)(in_ECX + 0x78) < 0x1269) {
      iVar1 = DAT_01258a98;
    }
    if ((iVar1 != 0) && (ExceptionList = &local_14, iVar1 = FUN_009c1d40(), iVar1 != 0)) {
      iVar1 = FUN_00aae9af();
      local_c = 0;
      if (iVar1 != 0) {
        FUN_0057e6b0(iVar1,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                     *(undefined4 *)(DAT_012588e8 + 0xb60));
      }
      local_c = 0xffffffff;
      iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))();
    }
  }
  ExceptionList = local_14;
  return;
}

