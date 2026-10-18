// FUN_008ae150 @ 008ae150  (requested 008AE150, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_008ae150(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if ((*(char *)(in_ECX + 0x58) != '\0') &&
     (piVar1 = *(int **)(in_ECX + 0xb4), piVar1 != (int *)0x0)) {
    while (iVar2 = *piVar1, piVar1 = (int *)piVar1[2], *(char *)(iVar2 + 0x38) == '\0') {
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af();
    local_8 = 0;
    if (iVar2 != 0) {
      FUN_008a88d0();
      FUN_00907d40(iVar2,*(undefined4 *)(in_ECX + 0xc));
    }
    local_8 = 0xffffffff;
    iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))();
    *(undefined1 *)(in_ECX + 0x58) = 0;
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  ExceptionList = local_10;
  return;
}

