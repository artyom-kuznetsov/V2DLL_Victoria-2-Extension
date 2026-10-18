// FUN_00826530 @ 00826530 body=[[00826530, 00826660]]


void FUN_00826530(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *in_EAX;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int *unaff_EDI;
  
  piVar1 = (int *)unaff_EDI[0x51];
  cVar4 = (**(code **)(*unaff_EDI + 0x38))();
  if (cVar4 == '\0') {
    if ((piVar1 != (int *)0x0) && (piVar1 != in_EAX)) {
      iVar2 = *piVar1;
      uVar5 = (**(code **)(*unaff_EDI + 0x30))();
      (**(code **)(iVar2 + 0x1bc))(uVar5);
    }
    if (*(char *)((int)in_EAX + 0x3d) != '\0') {
      return;
    }
    if (*(char *)((int)in_EAX + 0x3e) != '\0') {
      return;
    }
    unaff_EDI[0x51] = (int)in_EAX;
    puVar6 = (undefined4 *)(**(code **)(*in_EAX + 0x1b4))();
    for (puVar6 = (undefined4 *)*puVar6; puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[2]) {
      if ((int *)*puVar6 == unaff_EDI) {
        return;
      }
    }
    pcVar8 = *(code **)(*in_EAX + 0x1b4);
  }
  else {
    if ((piVar1 != (int *)0x0) && (piVar1 != in_EAX)) {
      iVar2 = *piVar1;
      uVar5 = (**(code **)(*unaff_EDI + 0x2c))();
      (**(code **)(iVar2 + 0x1ac))(uVar5);
    }
    if (*(char *)((int)in_EAX + 0x3d) != '\0') {
      return;
    }
    if (*(char *)((int)in_EAX + 0x3e) != '\0') {
      return;
    }
    unaff_EDI[0x51] = (int)in_EAX;
    puVar6 = (undefined4 *)(**(code **)(*in_EAX + 0x1a4))();
    for (puVar6 = (undefined4 *)*puVar6; puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[2]) {
      if ((int *)*puVar6 == unaff_EDI) {
        return;
      }
    }
    pcVar8 = *(code **)(*in_EAX + 0x1a4);
  }
  puVar6 = (undefined4 *)(*pcVar8)();
  iVar2 = puVar6[1];
  puVar7 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = unaff_EDI;
    puVar7[1] = iVar2;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
  }
  iVar3 = puVar6[2];
  puVar6[2] = iVar3 + 1;
  puVar6[1] = puVar7;
  if (iVar3 == 0) {
    *puVar6 = puVar7;
    return;
  }
  *(undefined4 **)(iVar2 + 8) = puVar7;
  return;
}

