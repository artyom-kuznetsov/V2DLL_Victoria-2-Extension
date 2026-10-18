// FUN_0069fc50 @ 0069fc50 body=[[0069fc50, 0069fcf8]]


void FUN_0069fc50(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x24) == '\0') {
    return;
  }
  if (((*(char *)(*(int *)(in_ECX + 0x28) + 0x67) != '\0') &&
      ((**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x18) + 0x38))(),
      *(char *)(in_ECX + 0x38) == '\0')) &&
     (cVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x158))(), cVar3 != '\0')) {
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x15c))();
  }
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd80);
  piVar2 = *(int **)(iVar1 + 0x18);
  if ((int)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd84) - iVar1 & 0xfffffffcU) < 0x19) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar3 != '\0') goto LAB_0069fcd9;
  }
  FUN_00624f20(0);
LAB_0069fcd9:
  FUN_00624580(piVar2);
  if (cVar3 == '\0') {
    FUN_0066bd60(6,0);
  }
  return;
}

