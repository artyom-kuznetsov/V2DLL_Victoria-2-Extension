// FUN_00948cf0 @ 00948cf0 body=[[00948cf0, 00948d2c]]


void FUN_00948cf0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x18) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x18))();
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar1);
  *(undefined1 *)(in_ECX + 100) = 1;
  return;
}

