// FUN_009e76d0 @ 009e76d0 body=[[009e76d0, 009e7730]]


void FUN_009e76d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x58);
  iVar2 = *(int *)(in_ECX + 0x54);
  iVar3 = *(int *)(in_ECX + 0x5c);
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

