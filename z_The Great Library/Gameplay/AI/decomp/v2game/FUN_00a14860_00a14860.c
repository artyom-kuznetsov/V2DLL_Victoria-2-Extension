// FUN_00a14860 @ 00a14860 body=[[00a14860, 00a14918] [00a1491c, 00a1492e]]


void FUN_00a14860(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 0x38) != 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0xa0);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00a13810(iVar2,in_ECX,*(undefined4 *)(in_ECX + 0x90));
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x8c) + 0x38) + 0x18))(uVar3);
    iVar2 = *(int *)(in_ECX + 0x30);
    if (iVar2 != 0) {
      if (*(char *)(in_ECX + 0x3c) != '\0') {
        *(undefined1 *)(iVar2 + 0x44) = 1;
        ExceptionList = local_10;
        return;
      }
      iVar1 = *(int *)(iVar2 + 0x40);
      *(int *)(in_ECX + 0x30) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(in_ECX + 0x34) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3c) = 0;
      }
      if (iVar2 != 0) {
        FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + -1;
    }
  }
  ExceptionList = local_10;
  return;
}

