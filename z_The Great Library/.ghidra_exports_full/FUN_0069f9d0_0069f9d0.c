// FUN_0069f9d0 @ 0069f9d0 body=[[0069f9d0, 0069fa0f]]


void FUN_0069f9d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    piVar1 = (int *)*piVar1;
  }
  iVar2 = FUN_00aaf0c5(piVar1);
  *(bool *)(iVar2 + *(int *)(*(int *)(in_ECX + 0x34) * 0x58 + 0x48 + *(int *)(in_ECX + 0x3c))) =
       *(int *)(param_1 + 0x6c) == 1;
  FUN_0069c520();
  return;
}

