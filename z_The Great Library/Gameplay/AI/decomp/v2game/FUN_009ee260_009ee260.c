// FUN_009ee260 @ 009ee260 body=[[009ee260, 009ee40e]]


void FUN_009ee260(int *param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  
  if (((*(char *)((int)in_ECX + 0x4f) != '\0') && (*(char *)((int)param_1 + 0x19) != '\0')) &&
     (cVar2 = (**(code **)(*in_ECX + 8))(), cVar2 == '\0')) {
    return;
  }
  if (in_ECX[0x1c] == 3) {
    if (*(char *)((int)in_ECX + 0x4f) == '\0') {
      return;
    }
    if (*(char *)((int)in_ECX + 0x6d) == '\0') goto LAB_009ee3eb;
  }
  else if ((param_1[2] == 0) && ((char)in_ECX[0xe] != '\0')) {
    if ((char)in_ECX[0x24] == '\0') {
      return;
    }
    iVar1 = param_1[4];
    if ((iVar1 == 3) && (param_1[5] == 1)) {
      in_ECX[0x1c] = 1;
      FUN_009ee550();
    }
    else if ((iVar1 == 4) && (param_1[5] == 1)) {
      if (in_ECX[0x1c] == 1) {
        in_ECX[0x1c] = 2;
        FUN_009ee510();
        FUN_009ee530();
        if (DAT_01258ac0 != (code *)0x0) {
          (*DAT_01258ac0)();
        }
        FUN_009ee570();
        (**(code **)(*in_ECX + 0x110))();
        FUN_009ee150();
      }
    }
    else if (iVar1 == 5) {
      in_ECX[0x1c] = 0;
      FUN_009ee590();
      FUN_009ee5b0();
      (**(code **)(*in_ECX + 0x110))();
    }
    else if ((iVar1 == 3) && (param_1[5] == 2)) {
      in_ECX[0x1f] = 1;
    }
    else {
      if ((iVar1 != 4) || ((param_1[5] != 2 || (in_ECX[0x1f] != 1)))) goto LAB_009ee3eb;
      in_ECX[0x1f] = 0;
      FUN_009ee5d0();
    }
  }
  else {
    if ((((param_1[2] != 1) || ((in_ECX[0x20] == 0 && (in_ECX[0x21] == 0)))) ||
        ((*param_1 == 0 && (param_1[1] == 0)))) || (*(char *)(DAT_01258a80 + 0x10) == '\0'))
    goto LAB_009ee3eb;
    if ((char)in_ECX[0x24] == '\0') {
      return;
    }
    if ((*param_1 != in_ECX[0x20]) || (param_1[1] != in_ECX[0x21])) goto LAB_009ee3eb;
    FUN_009ee510();
    FUN_009ee530();
  }
  *(undefined1 *)(param_1 + 6) = 1;
LAB_009ee3eb:
  if (((*(char *)((int)in_ECX + 0x4f) != '\0') &&
      (cVar2 = (**(code **)(*in_ECX + 8))(), cVar2 != '\0')) &&
     (*(char *)((int)param_1 + 0x19) == '\0')) {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}

