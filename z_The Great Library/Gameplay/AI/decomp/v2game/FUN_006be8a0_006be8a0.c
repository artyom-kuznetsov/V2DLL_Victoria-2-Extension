// FUN_006be8a0 @ 006be8a0 body=[[006be8a0, 006be9c9]]


void FUN_006be8a0(int param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  
  iVar1 = *(int *)(in_EAX + 0xaac);
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(*(int *)(iVar1 + 0x48) + 0xd8);
        (piVar2 != (int *)0x0 && (*piVar2 != iVar1)); piVar2 = (int *)piVar2[2]) {
    }
    FUN_005f2ae0(piVar2);
    if (*(undefined4 **)(in_EAX + 0xaac) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_EAX + 0xaac))(1);
    }
    *(undefined4 *)(in_EAX + 0xaac) = 0;
  }
  piVar2 = (int *)FUN_00aae9af(0x60);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = (int)&PTR_FUN_00e3a544;
    piVar2[1] = 0x18d;
    piVar2[2] = DAT_01268fec;
    piVar2[3] = DAT_01268ff0;
    *(undefined1 *)(piVar2 + 4) = 0;
    piVar2[10] = 0xf;
    piVar2[9] = 0;
    *(undefined1 *)(piVar2 + 5) = 0;
    piVar2[0xc] = (int)CSelectable::vftable;
    *(undefined1 *)(piVar2 + 0xd) = 0;
    *piVar2 = (int)CConstruction::vftable;
    piVar2[0xc] = (int)CConstruction::vftable;
    piVar2[0xe] = 43800000;
    piVar2[0xe] = DAT_01259abc;
    piVar2[0xf] = 43800000;
    piVar2[0xf] = DAT_01259abc;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0x2d2d2d;
    piVar2[0x14] = 0;
    piVar2[0x15] = 0;
    *piVar2 = (int)CBuildingConstruction::vftable;
    piVar2[0xc] = (int)CBuildingConstruction::vftable;
    piVar2[0x16] = 0;
    piVar2[0x17] = 0;
  }
  *(int **)(in_EAX + 0xaac) = piVar2;
  piVar2[0x12] = param_1;
  (**(code **)(*piVar2 + 0x20))();
  FUN_004b5f60();
  return;
}

