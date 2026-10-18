// FUN_00761c90 @ 00761c90 body=[[00761c90, 00761d70]]


void FUN_00761c90(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 8))();
  iVar1 = in_ECX[0x102];
  iVar2 = FUN_00475500();
  *(int *)(iVar2 + 0x80) = iVar1;
  iVar1 = in_ECX[0x103];
  iVar2 = FUN_00475500();
  *(int *)(iVar2 + 0x84) = iVar1;
  iVar1 = in_ECX[0x104];
  iVar2 = FUN_00475500();
  *(int *)(iVar2 + 0x88) = iVar1;
  iVar1 = in_ECX[0x107];
  iVar2 = FUN_00475500();
  *(undefined1 *)(iVar2 + 0x165) = 0;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + *(int *)(iVar1 + 0x75c) * 4) + 0xc))();
  *(undefined4 *)(iVar1 + 0x75c) = 0;
  (**(code **)(*(int *)**(undefined4 **)(iVar1 + 0x74c) + 4))();
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + *(int *)(iVar1 + 0x75c) * 4) + 8))();
  if (*(int *)(*(int *)(iVar1 + 0x1b4) + 0x20) != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x1b4) + 0x20) + 0x18) + 0x38))();
  }
  return;
}

