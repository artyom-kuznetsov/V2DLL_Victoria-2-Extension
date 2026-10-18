// FUN_0061af20 @ 0061af20 body=[[0061af20, 0061af42]]


void FUN_0061af20(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x6c);
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar1);
  *(undefined1 *)(in_ECX + 100) = 1;
  return;
}

