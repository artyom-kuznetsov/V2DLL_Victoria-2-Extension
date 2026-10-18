// FUN_004b7600 @ 004b7600 body=[[004b7600, 004b7676]]


undefined4 FUN_004b7600(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10c) != 0) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(0);
    if (*(int *)(in_ECX + 0x10c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x10c) + 8;
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))(iVar1);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))
              (*(undefined4 *)(*(int *)(in_ECX + 0x10c) + 0x18));
    return 1;
  }
  return 0;
}

