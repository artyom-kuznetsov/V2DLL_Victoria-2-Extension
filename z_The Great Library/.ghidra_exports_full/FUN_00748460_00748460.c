// FUN_00748460 @ 00748460 body=[[00748460, 0074854e]]


void FUN_00748460(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  uVar4 = 0;
  if (*(int *)(in_ECX + 0x23c) != 0) {
    ExceptionList = &local_14;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x23c) + 0x34))();
    if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x24) != 0)) {
      if ((*(int **)(in_ECX + 0x28) != (int *)0x0) &&
         (*(char *)(**(int **)(in_ECX + 0x28) + 0x67) != '\0')) {
        FUN_00748d40();
      }
      iVar2 = FUN_00aae9af(0x48);
      uStack_c = 0;
      if (iVar2 != 0) {
        if (*(int *)(*(int *)(in_ECX + 0x24) + 0x164) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = **(int **)(*(int *)(in_ECX + 0x24) + 0x15c);
        }
        uVar4 = FUN_00584a30(iVar2,*(undefined4 *)(iVar3 + 0x6c),
                             *(undefined4 *)(DAT_012588e8 + 0xb5c),
                             *(undefined4 *)(DAT_012588e8 + 0xb60));
      }
      uStack_c = 0xffffffff;
      iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar4);
      FUN_00740050();
    }
  }
  ExceptionList = local_14;
  return;
}

