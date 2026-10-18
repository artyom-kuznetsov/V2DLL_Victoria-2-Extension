// FUN_00471580 @ 00471580 body=[[00471580, 00471638]]


void FUN_00471580(uint param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  uint *puVar4;
  
  iVar3 = DAT_01258a94;
  if (param_1 < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_009c1d40();
  if (iVar3 == 0) {
    return;
  }
  piVar1 = (int *)(iVar3 + -8);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*(char *)(in_EAX + 0x20) != '\0') {
    cVar2 = (**(code **)(*piVar1 + 0x3c))();
    if (cVar2 != '\0') goto LAB_004715f9;
    if (*(char *)(in_EAX + 0x20) != '\0') {
      return;
    }
  }
  cVar2 = (**(code **)(*piVar1 + 0x38))();
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar1 + 0x40))(), cVar2 == '\0')) {
    return;
  }
LAB_004715f9:
  for (puVar4 = *(uint **)(in_EAX + 0x10);
      (puVar4 != *(uint **)(in_EAX + 0x14) && ((puVar4[1] != param_2 || (*puVar4 != param_1))));
      puVar4 = puVar4 + 2) {
  }
  if ((puVar4 < *(uint **)(in_EAX + 0x10)) || (*(uint **)(in_EAX + 0x14) <= puVar4)) {
    FUN_00868690();
  }
  return;
}

