// FUN_0064f040 @ 0064f040 body=[[0064f040, 0064f164]]


void FUN_0064f040(char param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  
  if ((((*(char *)(in_ECX + 0x5c) == '\0') && (0 < *(int *)(in_ECX + 0x178))) &&
      (DAT_00f07da6 != '\0')) && (iVar2 = FUN_00475500(), *(char *)(iVar2 + 0xa1) != '\0')) {
    return;
  }
  if (*(char *)(in_ECX + 0xe9) == '\0') {
    return;
  }
  if (*(char *)(in_ECX + 0x1538) == '\0') {
    FUN_00408ed0(param_2,0,0xffffffff);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar3 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    *(double *)(in_ECX + 0x1da8) = (double)fVar3;
    *(undefined4 *)(in_ECX + 0x1db0) = 0x1e;
  }
  if ((param_1 == '\0') && (*(char *)(in_ECX + 0x1539) == '\0')) {
    if ((*(int *)(in_ECX + 0x1db0) != 0) && (cVar1 = FUN_00416db0(), cVar1 == '\0')) {
      return;
    }
    *(bool *)(in_ECX + 0x1538) = *(char *)(in_ECX + 0x1538) == '\0';
    return;
  }
  if (*(char *)(in_ECX + 0x1539) == '\0') {
    if (param_1 != '\0') goto LAB_0064f156;
  }
  else {
    if (param_1 == '\0') {
      return;
    }
    if (*(char *)(in_ECX + 0x1538) != '\0') {
      *(undefined2 *)(in_ECX + 0x1538) = 0;
      return;
    }
  }
  if (param_1 == '\0') {
    return;
  }
LAB_0064f156:
  *(undefined2 *)(in_ECX + 0x1538) = 0x101;
  return;
}

