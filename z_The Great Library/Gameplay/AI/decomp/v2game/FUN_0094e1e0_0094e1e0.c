// FUN_0094e1e0 @ 0094e1e0 body=[[0094e1e0, 0094e29c] [0094e2a0, 0094e2e5] [0094e2e9, 0094e355] [0094e359, 0094e3c5] [0094e3c9, 0094e48b] [0094e48f, 0094e4c4]]


void FUN_0094e1e0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  char local_148 [256];
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58740;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x28) != 0) {
    ExceptionList = &local_10;
    FUN_009a0940();
    _sprintf(local_148,"%d");
    FUN_0099ff90();
    FUN_004013e0();
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x1c))();
    if (cVar1 != '\0') {
      FUN_009a0940();
      FUN_0099f770(param_1);
    }
  }
  if (*(int *)(in_ECX + 0x14) != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    pcVar2 = (char *)(in_ECX + 0x10);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x10));
    local_8 = 0;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(int *)(in_ECX + 0x1c) != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    pcVar2 = (char *)(in_ECX + 0x18);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x18));
    local_8 = 1;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(int *)(in_ECX + 0x24) != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    pcVar2 = (char *)(in_ECX + 0x20);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x20));
    local_8 = 2;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_009a0940();
    _sprintf(local_148,"%d");
    FUN_0099ff90();
    FUN_004013e0();
  }
  cVar1 = FUN_00952f10();
  if (cVar1 != '\0') {
    FUN_0099f1e0();
    FUN_0099f1e0();
    FUN_0043acd0(in_ECX + 0x34);
    local_8 = 3;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_0099f470();
  }
  ExceptionList = local_10;
  return;
}

