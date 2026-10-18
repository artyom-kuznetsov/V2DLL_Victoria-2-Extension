// FUN_0073d5a0 @ 0073d5a0 body=[[0073d5a0, 0073d628]]


void FUN_0073d5a0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  if ((*(char *)(DAT_012588e8 + 0xd11) == '\0') ||
     (*(char *)(*(int *)(DAT_012588e8 + 0xb24) + 0x70) != '\0')) {
    piVar1 = *(int **)(in_EAX + 0x28);
    iVar2 = piVar1[0x16];
    if (*(int *)(iVar2 + 4) != 0) {
      (**(code **)(*(int *)(*(int *)(iVar2 + 4) + 0x18) + 0x38))();
    }
    *(undefined4 *)(iVar2 + 0xc) = 0x2d2d2d;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    (**(code **)(*(int *)(*piVar1 + 0x18) + 0x38))();
    (**(code **)(**(int **)(in_EAX + 0x20) + 0x24))();
    (**(code **)(**(int **)(*(int *)(in_EAX + 0x2c) + 0x60) + 0x24))();
  }
  return;
}

