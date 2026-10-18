// FUN_0074fed0 @ 0074fed0 body=[[0074fed0, 0074ff41]]


void FUN_0074fed0(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_5;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd80);
  piVar2 = *(int **)(iVar1 + 0x18);
  if ((int)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd84) - iVar1 & 0xfffffffcU) < 0x19) {
    local_5 = '\0';
  }
  else {
    local_5 = (**(code **)(*piVar2 + 0x1c))();
    if (local_5 != '\0') goto LAB_0074ff20;
  }
  FUN_00624f20(0);
LAB_0074ff20:
  FUN_00624580(piVar2);
  if (local_5 == '\0') {
    FUN_0066bd60(6,0);
  }
  return;
}

