// FUN_009b0f50 @ 009b0f50 body=[[009b0f50, 009b0f77] [009b0f80, 009b0fbe] [009b0fc5, 009b1030]]


int FUN_009b0f50(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_1;
  piVar2 = *(int **)(param_1 + 0x58);
  piVar1 = (int *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 100) = 1;
  param_1 = 0;
  do {
    if (piVar2 == (int *)0x0) {
      FUN_005499c0();
      return param_1;
    }
    if (*piVar2 == param_2) {
      if (*(char *)(iVar5 + 100) == '\0') {
        iVar3 = piVar2[1];
        iVar4 = piVar2[2];
        if (iVar3 != 0) {
          *(int *)(iVar3 + 8) = iVar4;
        }
        if (iVar4 != 0) {
          *(int *)(iVar4 + 4) = iVar3;
        }
        if (piVar2 == (int *)*piVar1) {
          *piVar1 = iVar4;
        }
        if (piVar2 == *(int **)(iVar5 + 0x5c)) {
          *(int *)(iVar5 + 0x5c) = iVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar2);
      }
      *(undefined1 *)(piVar2 + 3) = 1;
      iVar3 = *(int *)(iVar5 + 0x74);
      piVar6 = (int *)FUN_00aae9af(0x10);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        *piVar6 = *piVar2;
        piVar6[1] = iVar3;
        piVar6[2] = 0;
        *(undefined1 *)(piVar6 + 3) = 0;
      }
      iVar4 = *(int *)(iVar5 + 0x78);
      *(int **)(iVar5 + 0x74) = piVar6;
      *(int *)(iVar5 + 0x78) = iVar4 + 1;
      if (iVar4 == 0) {
        *(int **)(iVar5 + 0x70) = piVar6;
      }
      else {
        *(int **)(iVar3 + 8) = piVar6;
      }
    }
    else if (param_1 == 0) {
      param_1 = *piVar2;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

