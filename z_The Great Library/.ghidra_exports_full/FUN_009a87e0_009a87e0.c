// FUN_009a87e0 @ 009a87e0 body=[[009a87e0, 009a8960]]


void FUN_009a87e0(int *param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(char *)(in_ECX + 0x142) == '\0') {
    return;
  }
  if ((param_1[2] == 0) && (*(char *)(in_ECX + 0x38) != '\0')) {
    if (*(char *)(in_ECX + 0x141) == '\0') {
      return;
    }
    if (param_1[4] != 3) {
      return;
    }
    if (param_1[5] != 1) {
      if (param_1[5] != 2) {
        return;
      }
      puVar2 = *(undefined4 **)(in_ECX + 0x58);
      if (puVar2 != (undefined4 *)0x0) {
        do {
          (**(code **)(*(int *)*puVar2 + 0x14))();
          puVar2 = (undefined4 *)puVar2[2];
        } while (puVar2 != (undefined4 *)0x0);
        *(undefined1 *)(in_ECX + 0x140) = 1;
        *(undefined1 *)(param_1 + 6) = 1;
        return;
      }
      goto LAB_009a894f;
    }
    iVar1 = *(int *)(in_ECX + 0x6c);
    if ((iVar1 == 0) || (iVar1 == 2)) {
      *(undefined4 *)(in_ECX + 0x6c) = 1;
      goto LAB_009a8930;
    }
  }
  else {
    if (param_1[2] != 1) {
      return;
    }
    if ((*(int *)(in_ECX + 0xe8) == 0) && (*(int *)(in_ECX + 0xec) == 0)) {
      return;
    }
    if ((*param_1 == 0) && (param_1[1] == 0)) {
      return;
    }
    if (*(char *)(in_ECX + 0x141) == '\0') {
      return;
    }
    if (*param_1 != *(int *)(in_ECX + 0xe8)) {
      return;
    }
    if (param_1[1] != *(int *)(in_ECX + 0xec)) {
      return;
    }
    if (*(char *)(DAT_01258a80 + 0x10) == '\0') {
      return;
    }
    iVar1 = *(int *)(in_ECX + 0x6c);
    if ((iVar1 == 0) || (iVar1 == 2)) {
      *(undefined4 *)(in_ECX + 0x6c) = 1;
LAB_009a8930:
      FUN_009a7a00();
      FUN_009a79c0();
      FUN_009a7a20();
      FUN_009a8d90();
      goto LAB_009a894f;
    }
  }
  if ((iVar1 == 1) && (*(char *)(in_ECX + 0xe4) == '\0')) {
    *(undefined4 *)(in_ECX + 0x6c) = 0;
    FUN_009a79e0();
    FUN_009a7a20();
    FUN_009a8d50();
    *(undefined1 *)(in_ECX + 0x140) = 1;
    *(undefined1 *)(param_1 + 6) = 1;
    return;
  }
LAB_009a894f:
  *(undefined1 *)(in_ECX + 0x140) = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

