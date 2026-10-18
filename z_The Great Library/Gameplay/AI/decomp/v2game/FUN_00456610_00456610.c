// FUN_00456610 @ 00456610 body=[[00456610, 004566b9]]


void FUN_00456610(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  int in_ECX;
  int *piVar5;
  
  if ((param_2 == 1) || (param_2 == 2)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(in_ECX + 0x28) = uVar4;
  if (param_2 == 1) {
    piVar5 = *(int **)(in_ECX + 0x1c);
    piVar2 = *(int **)(in_ECX + 0x18);
    if (piVar2 != piVar5) {
      do {
        if (*piVar2 == *(int *)(param_1 + 0x58)) break;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar5);
      if (piVar2 != piVar5) {
        return;
      }
    }
    FUN_004e9b90();
    return;
  }
  if (param_2 == 2) {
    piVar5 = *(int **)(*(int *)(in_ECX + 4) + 0xa38);
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        piVar2 = *(int **)(in_ECX + 0x1c);
        piVar3 = *(int **)(in_ECX + 0x18);
        piVar5 = (int *)piVar5[2];
        if (piVar3 == piVar2) {
LAB_004566a3:
          FUN_004e9b90();
        }
        else {
          do {
            if (*piVar3 == *(int *)(iVar1 + 0x58)) break;
            piVar3 = piVar3 + 1;
          } while (piVar3 != piVar2);
          if (piVar3 == piVar2) goto LAB_004566a3;
        }
      } while (piVar5 != (int *)0x0);
    }
    *(undefined1 *)(in_ECX + 0x29) = 1;
  }
  return;
}

