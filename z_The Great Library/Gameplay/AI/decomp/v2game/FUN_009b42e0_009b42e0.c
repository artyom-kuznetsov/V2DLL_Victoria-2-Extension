// FUN_009b42e0 @ 009b42e0 body=[[009b42e0, 009b4368]]


void FUN_009b42e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xdc);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(in_ECX + 0xb8);
    iVar3 = *(int *)(in_ECX + 0xbc);
    (**(code **)(*piVar1 + 0x80))();
    if (iVar3 == 0) {
      (**(code **)(*piVar1 + 0x74))(iVar2 + 0x6b9e0);
    }
    else {
      (**(code **)(*piVar1 + 0x74))(iVar3);
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x6c))(-(uint)(in_ECX != 4) & in_ECX);
  for (puVar4 = *(undefined4 **)(in_ECX + 0x5c); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[2]) {
    (**(code **)(*(int *)*puVar4 + 0x50))();
  }
  (**(code **)(*(int *)(in_ECX - 4) + 0x6c))();
  return;
}

