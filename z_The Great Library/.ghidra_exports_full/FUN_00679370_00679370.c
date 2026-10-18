// FUN_00679370 @ 00679370 body=[[00679370, 006793ad]]


int FUN_00679370(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1608) != 0) {
    iVar1 = (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x1600) + 4))();
    if (((iVar1 == 3) && (*(int *)(in_ECX + 0x1608) == 1)) && (**(int **)(in_ECX + 0x1600) != 0)) {
      return **(int **)(in_ECX + 0x1600) + -8;
    }
  }
  return 0;
}

