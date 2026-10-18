// FUN_0066c110 @ 0066c110 body=[[0066c110, 0066c17a]]


void FUN_0066c110(undefined4 param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  
  piVar1 = *(int **)(*(int *)(in_EAX + 0xd80) + 0x18);
  if ((int)(*(int *)(in_EAX + 0xd84) - *(int *)(in_EAX + 0xd80) & 0xfffffffcU) < 0x19) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*piVar1 + 0x1c))();
    if (cVar2 != '\0') goto LAB_0066c14e;
  }
  FUN_00624f20(0);
LAB_0066c14e:
  FUN_00624580(piVar1);
  if (param_2 != '\0') {
    FUN_0061c0b0(0);
  }
  if (cVar2 == '\0') {
    FUN_0066bd60(6,0);
  }
  return;
}

