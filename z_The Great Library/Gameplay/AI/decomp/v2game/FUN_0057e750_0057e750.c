// FUN_0057e750 @ 0057e750 body=[[0057e750, 0057e80d]]


void FUN_0057e750(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x44) < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_009c1d40();
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 0x34))();
      if (cVar1 != '\0') {
        FUN_0053e7c0(piVar2);
        FUN_0051f990();
        iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x13c))();
        if (iVar3 == 8) {
          (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xdc))();
        }
      }
    }
  }
  return;
}

