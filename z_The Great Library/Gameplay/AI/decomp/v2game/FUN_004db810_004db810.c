// FUN_004db810 @ 004db810 body=[[004db810, 004db867]]


void FUN_004db810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = param_1;
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  puVar2 = (undefined4 *)FUN_0098fb60(*(int *)(iVar1 + 0x1c) + 0xc,&param_1);
  *(undefined4 *)(in_ECX + 0x1c) = *puVar2;
  (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
  puVar2 = (undefined4 *)FUN_0098fb60(*(int *)(iVar1 + 0x1c) + 0xc,&param_1);
  *(undefined4 *)(in_ECX + 0x18) = *puVar2;
  (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
  return;
}

