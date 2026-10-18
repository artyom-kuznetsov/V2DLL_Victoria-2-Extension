// FUN_006be9d0 @ 006be9d0 body=[[006be9d0, 006be9fc] [006bea00, 006bea6d]]


void FUN_006be9d0(int param_1)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(in_EAX + 0xab0);
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(*(int *)(iVar1 + 0x48) + 0xd8);
        (piVar2 != (int *)0x0 && (*piVar2 != iVar1)); piVar2 = (int *)piVar2[2]) {
    }
    FUN_005f2ae0(piVar2);
    if (*(undefined4 **)(in_EAX + 0xab0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_EAX + 0xab0))(1);
    }
    *(undefined4 *)(in_EAX + 0xab0) = 0;
  }
  iVar1 = FUN_00aae9af(0xb0);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00491620();
  }
  *(int **)(in_EAX + 0xab0) = piVar2;
  piVar2[0x12] = param_1;
  (**(code **)(*piVar2 + 0x20))();
  FUN_004b5f60();
  return;
}

