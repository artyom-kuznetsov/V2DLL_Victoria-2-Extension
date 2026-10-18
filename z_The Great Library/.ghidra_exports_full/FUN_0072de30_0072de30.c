// FUN_0072de30 @ 0072de30 body=[[0072de30, 0072de75]]


undefined4 FUN_0072de30(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  if (*(int *)(iVar1 + 0xc00) != 0) {
    cVar2 = (**(code **)(**(int **)(iVar1 + 0xc00) + 0x18))(*(undefined4 *)(in_ECX + 0x3c));
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

