// FUN_0085b460 @ 0085b460 body=[[0085b460, 0085b574] [0085b578, 0085b7ec] [0085b7f0, 0085b86e]]


void FUN_0085b460(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int in_ECX;
  char local_238 [256];
  undefined4 local_138;
  char local_134 [256];
  undefined4 local_34 [5];
  uint local_20;
  int local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  local_14 = *(char *)(in_ECX + 0x18);
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_009a0940(param_1);
  local_138 = 0xe;
  puVar5 = &DAT_00dfbbd0;
  if (local_14 == '\0') {
    puVar5 = &DAT_00dfbbd4;
  }
  _sprintf(local_134,"%s",puVar5);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x1a);
  FUN_009a0940(param_1);
  local_138 = 0xe;
  puVar5 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar5 = &DAT_00dfbbd4;
  }
  _sprintf(local_134,"%s",puVar5);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_0043acd0(in_ECX + 0x10,local_34);
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (local_20 < 0x10) {
    cVar1 = *(char *)(in_ECX + 0x19);
    FUN_009a0940(param_1);
    local_138 = 0xe;
    puVar5 = &DAT_00dfbbd0;
    if (cVar1 == '\0') {
      puVar5 = &DAT_00dfbbd4;
    }
    _sprintf(local_134,"%s",puVar5);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
    switch(*(undefined4 *)(in_ECX + 0x1c)) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    default:
    }
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
    puVar2 = *(undefined4 **)(in_ECX + 0x30);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x20);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x130);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x40);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x78);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x94);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xe8);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
      in_ECX = local_18;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x5c);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
      in_ECX = local_18;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xb0);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
      in_ECX = local_18;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xcc);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
      in_ECX = local_18;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x140);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
      in_ECX = local_18;
    }
    iVar4 = *(int *)(in_ECX + 0x150);
    if (iVar4 != 0) {
      FUN_009a0940(param_1);
      _sprintf(local_238,"%d",iVar4);
      FUN_0099ff90(param_1);
      FUN_004013e0(param_1);
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

