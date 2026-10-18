// FUN_007e66a0 @ 007e66a0 body=[[007e66a0, 007e67ac]]


void FUN_007e66a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_EDI;
  
  piVar3 = (int *)param_1[1];
  if (piVar3 != (int *)0x0) {
    piVar4 = piVar3;
    do {
      if (*piVar4 <= *unaff_EDI) {
        if (piVar4 != piVar3) {
          iVar1 = piVar4[3];
          piVar3 = (int *)FUN_00aae9af(0x14);
          if (piVar3 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            *piVar3 = *unaff_EDI;
            piVar3[1] = unaff_EDI[1];
            piVar3[2] = (int)piVar4;
            piVar3[3] = iVar1;
            *(undefined1 *)(piVar3 + 4) = 0;
          }
          piVar4[3] = (int)piVar3;
          if (iVar1 != 0) {
            *(int **)(iVar1 + 8) = piVar3;
          }
          param_1[2] = param_1[2] + 1;
          return;
        }
        piVar4 = (int *)FUN_00aae9af(0x14);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = *unaff_EDI;
          piVar4[1] = unaff_EDI[1];
          piVar4[2] = (int)piVar3;
          piVar4[3] = 0;
          *(undefined1 *)(piVar4 + 4) = 0;
        }
        iVar1 = param_1[2];
        param_1[1] = (int)piVar4;
        param_1[2] = iVar1 + 1;
        if (iVar1 != 0) {
          piVar3[3] = (int)piVar4;
          return;
        }
        *param_1 = (int)piVar4;
        return;
      }
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != (int *)0x0);
  }
  iVar1 = *param_1;
  piVar3 = (int *)FUN_00aae9af(0x14);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = *unaff_EDI;
    piVar3[1] = unaff_EDI[1];
    piVar3[2] = 0;
    piVar3[3] = iVar1;
    *(undefined1 *)(piVar3 + 4) = 0;
  }
  iVar2 = param_1[2];
  *param_1 = (int)piVar3;
  param_1[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(int **)(iVar1 + 8) = piVar3;
    return;
  }
  param_1[1] = (int)piVar3;
  return;
}

