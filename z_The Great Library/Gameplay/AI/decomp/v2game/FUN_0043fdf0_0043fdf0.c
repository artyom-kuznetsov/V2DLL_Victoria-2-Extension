// FUN_0043fdf0 @ 0043fdf0 body=[[0043fdf0, 0043fe53]]


void FUN_0043fdf0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x90) + 0x80))();
  if (iVar2 != *(int *)(DAT_012588e8 + 0xb60)) {
    cVar1 = FUN_005cc2e0(DAT_012588e8 + 0xb5c,0);
    if (cVar1 == '\0') {
      FUN_0043f750();
      return;
    }
  }
  FUN_0043fea0();
  return;
}

