// FUN_00513d50 @ 00513d50 body=[[00513d50, 00513e4b]]


undefined4 FUN_00513d50(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int *in_EAX;
  int iVar5;
  bool bVar6;
  int *piVar7;
  bool local_5;
  
  piVar1 = *(int **)*in_EAX;
  local_5 = false;
  cVar4 = (**(code **)(*piVar1 + 0x38))();
  if ((cVar4 != '\0') && (iVar5 = (**(code **)(*piVar1 + 0x2c))(), *(int *)(iVar5 + 0x1b4) != 0)) {
    local_5 = true;
  }
  piVar7 = (int *)*in_EAX;
  if (piVar7 == (int *)0x0) {
    return 1;
  }
  do {
    piVar2 = (int *)*piVar7;
    piVar7 = (int *)piVar7[2];
    if ((((piVar2[0x1d] != 0) || ((char)piVar2[0x41] != '\0')) || (0 < piVar2[0x3b])) ||
       ((piVar2[0x37] != piVar1[0x37] || (piVar2[0x65] != 0)))) {
      return 0;
    }
    piVar3 = (int *)piVar2[0xe];
    do {
      if (piVar3 == (int *)0x0) {
        bVar6 = 0 < piVar2[0x10];
        goto LAB_00513dfd;
      }
      iVar5 = *piVar3;
      piVar3 = (int *)piVar3[2];
    } while (*(char *)(*(int *)(iVar5 + 0x38) + 0x40) != '\0');
    bVar6 = false;
LAB_00513dfd:
    cVar4 = FUN_005d9080();
    if (bVar6 != (bool)cVar4) {
      return 0;
    }
    cVar4 = (**(code **)(*piVar2 + 0x38))();
    if ((cVar4 != '\0') &&
       (iVar5 = (**(code **)(*piVar2 + 0x2c))(), (*(int *)(iVar5 + 0x1b4) != 0) != local_5)) {
      return 0;
    }
    if (piVar7 == (int *)0x0) {
      return 1;
    }
  } while( true );
}

