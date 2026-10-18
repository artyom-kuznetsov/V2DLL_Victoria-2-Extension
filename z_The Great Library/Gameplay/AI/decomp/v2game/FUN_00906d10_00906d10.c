// FUN_00906d10 @ 00906d10 body=[[00906d10, 00906d45]]


void FUN_00906d10(void)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x54);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x20))();
    if (cVar2 != '\0') {
      FUN_004b8e80(*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x3c) * 4),
                   piVar1,0);
    }
  }
  return;
}

