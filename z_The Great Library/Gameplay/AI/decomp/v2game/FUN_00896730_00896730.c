// FUN_00896730 @ 00896730 body=[[00896730, 0089679c]]


void FUN_00896730(int param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x24))();
    if (cVar2 != '\0') {
      iVar3 = piVar1[0xa0] + *(int *)(in_ECX + 0x20);
      piVar1[0xa0] = iVar3;
      if (iVar3 < 0) {
        piVar1[0xa0] = 0;
        return;
      }
      if (100000 < iVar3) {
        piVar1[0xa0] = 100000;
      }
    }
  }
  return;
}

