// FUN_0040c9d0 @ 0040c9d0 body=[[0040c9d0, 0040ca7c] [0040ca80, 0040cb81]]


void FUN_0040c9d0(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int in_ECX;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x14);
  if (*(int *)(*(int *)(in_ECX + 0xc) + 0x218) == *(int *)(DAT_012588e8 + 0xb60)) {
    ExceptionList = &local_10;
    if (*(char *)(iVar1 + 0x142) != '\0') goto LAB_0040ca31;
    ExceptionList = &local_10;
    *(undefined1 *)(iVar1 + 0x142) = 1;
  }
  else {
    ExceptionList = &local_10;
    if (*(char *)(iVar1 + 0x142) == '\0') goto LAB_0040ca31;
    ExceptionList = &local_10;
    *(undefined1 *)(iVar1 + 0x142) = 0;
  }
  FUN_009a8550(iVar1);
LAB_0040ca31:
  uVar2 = FUN_00405af0(*(undefined4 *)(in_ECX + 0xc));
  local_8 = 0;
  FUN_00408ed0(uVar2,0,0xffffffff);
  FUN_00a5ecc0(uVar2,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  (**(code **)(**(int **)(in_ECX + 0x24) + 0xd4))(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x218));
  if (*(char *)(*(int *)(in_ECX + 0xc) + 0x1f0) == '\0') {
    if (*(char *)((int)*(int **)(in_ECX + 0x28) + 0x4f) != '\0') {
      (**(code **)(**(int **)(in_ECX + 0x28) + 0x38))();
    }
  }
  else {
    if (*(char *)((int)*(int **)(in_ECX + 0x28) + 0x4f) == '\0') {
      (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))();
    }
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x48))
              ((*(char *)(*(int *)(in_ECX + 0xc) + 0x1cc) == '\0') + '\x01');
  }
  if (*(char *)(*(int *)(in_ECX + 0xc) + 0x1f0) == '\0') {
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x1c) + 0x34);
  }
  else {
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x1c) + 0x38);
  }
  (*pcVar3)();
  iVar1 = *(int *)(in_ECX + 0xc);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x1f0) != '\0')) &&
     (*(int *)(iVar1 + 0x218) == *(int *)(*(int *)(in_ECX + 0x104) + 0x3a4))) {
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))
              ((*(char *)(*(int *)(in_ECX + 0xc) + 0x21d) == '\0') + '\x01');
    ExceptionList = local_10;
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x38))();
  ExceptionList = local_10;
  return;
}

