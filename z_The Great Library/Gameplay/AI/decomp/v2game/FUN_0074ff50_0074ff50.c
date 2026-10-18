// FUN_0074ff50 @ 0074ff50 body=[[0074ff50, 0074ffe6]]


void FUN_0074ff50(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  (**(code **)(*param_1 + 0x80))();
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd80);
  piVar2 = *(int **)(iVar1 + 0x18);
  if ((int)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd84) - iVar1 & 0xfffffffcU) < 0x19) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar3 != '\0') goto LAB_0074ffc7;
  }
  FUN_00624f20(0);
LAB_0074ffc7:
  FUN_00624580(piVar2);
  if (cVar3 == '\0') {
    FUN_0066bd60(6,0);
  }
  return;
}

