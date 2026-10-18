// FUN_005e4e00 @ 005e4e00 body=[[005e4e00, 005e4e63]]


bool FUN_005e4e00(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    iVar2 = FUN_009c1d40();
    if (iVar2 != 0) {
      piVar3 = (int *)(iVar2 + -8);
      goto LAB_005e4e45;
    }
  }
  piVar3 = (int *)0x0;
LAB_005e4e45:
  *(int **)(in_ECX + 0x3c) = piVar3;
  if (piVar3 == (int *)0x0) {
    return false;
  }
  cVar1 = (**(code **)(*piVar3 + 0x38))();
  return cVar1 != '\0';
}

