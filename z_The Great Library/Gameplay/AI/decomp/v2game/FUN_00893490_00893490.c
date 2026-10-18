// FUN_00893490 @ 00893490 body=[[00893490, 00893565]]


void FUN_00893490(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  
  if (*(char *)(in_ECX + 0x24) == '\0') {
    FUN_00522310(*(undefined4 *)(in_ECX + 0x20));
  }
  else {
    piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_1 + 0xc) * 4) + 0xe64) + 0x50) + 8);
    if (piVar3 != (int *)0x0) {
      do {
        iVar1 = *piVar3;
        piVar3 = (int *)piVar3[2];
        if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe64) !=
            iVar1) {
          for (piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                 + 0xe54); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
            if (*piVar2 == iVar1) goto LAB_0089352e;
          }
          FUN_00522310(iVar1);
        }
LAB_0089352e:
        if (piVar3 == (int *)0x0) {
          return;
        }
      } while( true );
    }
  }
  return;
}

