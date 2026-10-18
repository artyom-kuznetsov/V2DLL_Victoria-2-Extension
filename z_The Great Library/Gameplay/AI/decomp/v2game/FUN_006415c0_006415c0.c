// FUN_006415c0 @ 006415c0 body=[[006415c0, 006415f9] [00641600, 00641627]]


void FUN_006415c0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x494) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0x494) + 0x74))(*(int *)(in_ECX + 0x90) + 0x6b9e0);
  for (iVar1 = *(int *)(in_ECX + 0x4fc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x4d8) + 4))(iVar1);
    (**(code **)(*piVar2 + 0x124))();
  }
  return;
}

