// FUN_0073d920 @ 0073d920 body=[[0073d920, 0073d9d7]]


void FUN_0073d920(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x28);
  *(int *)(in_EAX + 0x24) = param_1;
  iVar2 = *(int *)(iVar1 + 0x58);
  if (*(int *)(iVar2 + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(iVar2 + 4) + 0x18) + 0x38))();
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0x2d2d2d;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(int *)(iVar1 + 0x54) = param_1;
  iVar1 = *(int *)(in_EAX + 0x2c);
  if (*(char *)(iVar1 + 0x5c) == '\0') {
    if (*(int *)(*(int *)(in_EAX + 0x24) + 300) == *(int *)(DAT_012588e8 + 0xb60)) {
      if (*(int *)(iVar1 + 0x6c) != param_1) {
        *(undefined1 *)(iVar1 + 0x160) = 1;
      }
      *(int *)(iVar1 + 0x6c) = param_1;
      (**(code **)(**(int **)(*(int *)(in_EAX + 0x2c) + 0x60) + 0x20))();
      FUN_0073ef10();
      return;
    }
    FUN_00737260();
    (**(code **)(**(int **)(*(int *)(in_EAX + 0x2c) + 0x60) + 0x24))();
  }
  FUN_0073ef10();
  return;
}

