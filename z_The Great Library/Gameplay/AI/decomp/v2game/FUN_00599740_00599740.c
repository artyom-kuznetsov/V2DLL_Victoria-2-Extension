// FUN_00599740 @ 00599740 body=[[00599740, 00599901]]


bool FUN_00599740(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_8;
  
  iVar2 = (**(code **)(*(int *)in_ECX[7] + 0x24))();
  if (iVar2 != 1) {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x4c))(&local_8);
    return *piVar3 < 1000;
  }
  iVar5 = 0;
  iVar2 = 0;
  piVar3 = in_ECX + 0x1c;
  local_8 = 5;
  do {
    iVar4 = piVar3[-1];
    if (iVar4 != 0) {
      iVar5 = iVar5 + 1;
      if ((*(int *)(iVar4 + 0x74) == 0) || (*(char *)(*(int *)(iVar4 + 0x74) + 0x164) == '\0')) {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      else {
        iVar4 = 0;
      }
      iVar2 = iVar2 + iVar4;
    }
    iVar4 = *piVar3;
    if (iVar4 != 0) {
      iVar5 = iVar5 + 1;
      if ((*(int *)(iVar4 + 0x74) == 0) || (*(char *)(*(int *)(iVar4 + 0x74) + 0x164) == '\0')) {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      else {
        iVar4 = 0;
      }
      iVar2 = iVar2 + iVar4;
    }
    iVar4 = piVar3[1];
    if (iVar4 != 0) {
      iVar5 = iVar5 + 1;
      if ((*(int *)(iVar4 + 0x74) == 0) || (*(char *)(*(int *)(iVar4 + 0x74) + 0x164) == '\0')) {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      else {
        iVar4 = 0;
      }
      iVar2 = iVar2 + iVar4;
    }
    iVar4 = piVar3[2];
    if (iVar4 != 0) {
      iVar5 = iVar5 + 1;
      if ((*(int *)(iVar4 + 0x74) == 0) || (*(char *)(*(int *)(iVar4 + 0x74) + 0x164) == '\0')) {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      else {
        iVar4 = 0;
      }
      iVar2 = iVar2 + iVar4;
    }
    iVar4 = piVar3[3];
    if (iVar4 != 0) {
      iVar5 = iVar5 + 1;
      if ((*(int *)(iVar4 + 0x74) == 0) || (*(char *)(*(int *)(iVar4 + 0x74) + 0x164) == '\0')) {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      else {
        iVar4 = 0;
      }
      iVar2 = iVar2 + iVar4;
    }
    iVar4 = piVar3[4];
    if (iVar4 != 0) {
      iVar5 = iVar5 + 1;
      if ((*(int *)(iVar4 + 0x74) == 0) || (*(char *)(*(int *)(iVar4 + 0x74) + 0x164) == '\0')) {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      else {
        iVar4 = 0;
      }
      iVar2 = iVar2 + iVar4;
    }
    piVar3 = piVar3 + 6;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (iVar5 != 0) {
    piVar3 = (int *)in_ECX[0x5f];
    while (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
      iVar1 = *(int *)(iVar4 + 0x74);
      piVar3 = (int *)piVar3[2];
      iVar5 = iVar5 + 1;
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x164) == '\0')) {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      else {
        iVar4 = 0;
      }
      iVar2 = iVar2 + iVar4;
    }
    if (iVar5 != 0) {
      iVar5 = iVar5 * 1000;
      if (iVar5 == 0) {
        return true;
      }
      if (0x39580d < iVar2 + 0x189373U) {
        uVar6 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
        iVar2 = __alldiv(uVar6,iVar5,iVar5 >> 0x1f);
        return iVar2 < 0x3e9;
      }
      return (iVar2 * 1000) / iVar5 < 0x3e9;
    }
  }
  return true;
}

