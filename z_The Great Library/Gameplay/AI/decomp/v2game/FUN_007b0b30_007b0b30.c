// FUN_007b0b30 @ 007b0b30 body=[[007b0b30, 007b0bb4]]


undefined4 FUN_007b0b30(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  
  cVar2 = (**(code **)(*in_ECX + 0x10))();
  (**(code **)(*in_ECX + 0xc))();
  (**(code **)(*(int *)in_ECX[9] + 0x50))();
  piVar3 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
  iVar5 = in_ECX[9];
  iVar1 = *piVar3;
  uVar4 = (**(code **)(*(int *)in_ECX[8] + 0x3c))();
  uVar4 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x44))(uVar4);
  iVar5 = (**(code **)(iVar1 + 0x2c))(uVar4);
  in_ECX[9] = iVar5;
  if (cVar2 != '\0') {
    (**(code **)(*in_ECX + 8))();
    return 1;
  }
  (**(code **)(*in_ECX + 0xc))();
  return 1;
}

