// FUN_006cefa0 @ 006cefa0 body=[[006cefa0, 006cefc9]]


void FUN_006cefa0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x6c);
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar1);
  *(undefined1 *)(in_ECX + 100) = 1;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  return;
}

