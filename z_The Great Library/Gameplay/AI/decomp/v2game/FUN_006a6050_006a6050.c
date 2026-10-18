// FUN_006a6050 @ 006a6050 body=[[006a6050, 006a60b5]]


uint FUN_006a6050(void)

{
  uint uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xf8) != '\0') {
    uVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x60))();
    return uVar1 & 0xffffff00;
  }
  if ((*(int *)(in_ECX + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c)) &&
     (*(char *)(in_ECX + 0xf9) != '\0')) {
    (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
    uVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x60))();
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)*(int *)(DAT_012588e8 + 0xb0c) >> 8),1);
}

