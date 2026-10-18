// FUN_00441170 @ 00441170 body=[[00441170, 004411b6]]


void FUN_00441170(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(0);
    if (*(int *)(in_ECX + 0x24) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x24) + 8;
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))(iVar1);
  }
  return;
}

