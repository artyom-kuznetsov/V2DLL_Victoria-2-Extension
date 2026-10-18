// FUN_0078bef0 @ 0078bef0 body=[[0078bef0, 0078bf63]]


void FUN_0078bef0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x2c) + 0x74) == *(int *)(in_ECX + 0x28)) {
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

