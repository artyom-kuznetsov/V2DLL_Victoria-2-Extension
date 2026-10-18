// FUN_009c3a60 @ 009c3a60 body=[[009c3a60, 009c3ac9]]


void FUN_009c3a60(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x94);
  iVar2 = *(int *)(in_ECX + 0x98);
  iVar3 = *(int *)(in_ECX + 0xbc);
  (**(code **)(*piVar1 + 0x80))();
  iVar4 = *piVar1;
  if (iVar3 != 0) {
    (**(code **)(iVar4 + 0x74))(iVar3);
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x6c))();
    return;
  }
  (**(code **)(iVar4 + 0x74))(iVar2 + 0x6b9e0);
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x6c))();
  return;
}

