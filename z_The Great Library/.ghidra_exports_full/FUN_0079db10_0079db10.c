// FUN_0079db10 @ 0079db10 body=[[0079db10, 0079dc65]]


void FUN_0079db10(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb7b;
  local_14 = ExceptionList;
  if ((*(int *)(in_ECX + 0x2b8) == 0) && (*(int *)(in_ECX + 700) == 0)) {
    ExceptionList = &local_14;
    DAT_0131ca68 = FUN_009c12d0();
    iVar2 = DAT_01258a9c + 1;
    DAT_01258a9c = iVar2;
    *(uint *)(in_ECX + 0x2b8) = DAT_01258a90 + 0x1268;
    *(int *)(in_ECX + 700) = iVar2;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x3c))();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(in_ECX + 0x28) + 0x40))();
    }
    iVar2 = FUN_00aae9af();
    uStack_c = 0;
    if (iVar2 != 0) {
      FUN_0057db30(iVar2,*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0xc0),
                   *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0xc4));
    }
    uStack_c = 0xffffffff;
    iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))();
    *(undefined1 *)(in_ECX + 0x2c0) = 1;
  }
  ExceptionList = local_14;
  return;
}

