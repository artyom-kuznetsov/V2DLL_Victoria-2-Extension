// FUN_00adb700 @ 00adb700 body=[[00adb700, 00adb7de]]


void FUN_00adb700(char *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  pcVar2 = param_1;
  if (*param_1 == '\0') {
    if (param_1[3] == '\x01') {
      param_1[3] = '\0';
    }
    if (param_1[1] == '\0') {
      param_1[6] = '\0';
    }
  }
  if (param_1[9] == '\0') {
    if (*param_1 == '\x01') {
      uVar4 = *(uint *)(param_1 + 0x20);
      uVar3 = 0;
      if (uVar4 != 0) {
        piVar5 = *(int **)(param_1 + 0x1c);
        do {
          if (*piVar5 == 2) {
            if (uVar3 != 0xffffffff) goto LAB_00adb772;
            break;
          }
          uVar3 = uVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar3 < uVar4);
      }
      *(uint *)(param_1 + 0x20) = uVar4 + 1;
      if (*(uint *)(param_1 + 0x24) < uVar4 + 1) {
        FUN_00aeb6c0(uVar4 + 2);
      }
      puVar1 = (undefined4 *)(*(int *)(pcVar2 + 0x1c) + -4 + *(int *)(pcVar2 + 0x20) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 2;
      }
    }
LAB_00adb772:
    if (pcVar2[9] == '\0') goto LAB_00adb79e;
  }
  if (*pcVar2 != '\0') {
    uVar4 = 0;
    if (*(uint *)(pcVar2 + 0x20) != 0) {
      piVar5 = *(int **)(pcVar2 + 0x1c);
      do {
        if (*piVar5 == 2) {
          if (uVar4 != 0xffffffff) {
            pcVar2[9] = '\0';
          }
          break;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar4 < *(uint *)(pcVar2 + 0x20));
    }
  }
LAB_00adb79e:
  param_1 = (char *)0x5;
  FUN_00b09030(&param_1);
  param_1 = (char *)0x1;
  FUN_00b09030(&param_1);
  param_1 = (char *)0x0;
  FUN_00b09030(&param_1);
  return;
}

