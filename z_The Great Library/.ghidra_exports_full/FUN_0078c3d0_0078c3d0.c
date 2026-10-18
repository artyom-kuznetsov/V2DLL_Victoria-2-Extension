// FUN_0078c3d0 @ 0078c3d0 body=[[0078c3d0, 0078c443]]


void FUN_0078c3d0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x2c) + 0x70) == *(int *)(in_ECX + 0x28)) {
    cVar1 = FUN_0059c160(*(int *)(in_ECX + 0x28));
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x9c))(0);
      if (*(int *)(in_ECX + 0x28) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_ECX + 0x28) + 8;
      }
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))(iVar2);
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))
                (*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x18));
    }
  }
  return;
}

