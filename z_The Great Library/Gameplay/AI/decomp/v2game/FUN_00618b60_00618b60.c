// FUN_00618b60 @ 00618b60 body=[[00618b60, 00618bc3]]


void FUN_00618b60(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00618bd0(&local_10);
  iVar2 = *(int *)(in_ECX + 0x6c);
  *(undefined4 *)(iVar2 + 0x28) = local_10;
  *(undefined4 *)(iVar2 + 0x2c) = local_c;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x18) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x18))();
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar1);
  *(undefined1 *)(in_ECX + 100) = 1;
  return;
}

