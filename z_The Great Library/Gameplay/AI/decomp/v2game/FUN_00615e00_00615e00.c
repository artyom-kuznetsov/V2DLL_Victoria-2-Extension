// FUN_00615e00 @ 00615e00 body=[[00615e00, 00615e35]]


void FUN_00615e00(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x68) + 0x24) = 3;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x18))();
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar1);
  *(undefined1 *)(in_ECX + 100) = 1;
  return;
}

