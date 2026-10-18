// FUN_0048df80 @ 0048df80 body=[[0048df80, 0048dfa4]]


int FUN_0048df80(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int unaff_ESI;
  
  piVar1 = *(int **)(in_EAX + 0x50);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    for (piVar3 = *(int **)(iVar2 + 8); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == unaff_ESI) {
        return iVar2;
      }
    }
  } while( true );
}

