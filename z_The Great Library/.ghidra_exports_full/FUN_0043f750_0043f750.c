// FUN_0043f750 @ 0043f750 body=[[0043f750, 0043f7cc]]


void FUN_0043f750(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  
  if (in_ECX < 0) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xadc) + in_ECX * 4) + 0x20) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd80);
  piVar2 = *(int **)(iVar1 + 0x18);
  if ((int)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd84) - iVar1 & 0xfffffffcU) < 0x19) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar3 != '\0') goto LAB_0043f7ad;
  }
  FUN_00624f20(0);
LAB_0043f7ad:
  FUN_00624580(piVar2);
  if (cVar3 == '\0') {
    FUN_0066bd60(6,0);
  }
  return;
}

