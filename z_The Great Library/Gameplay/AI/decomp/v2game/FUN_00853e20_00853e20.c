// FUN_00853e20 @ 00853e20 body=[[00853e20, 00853ee2]]


void FUN_00853e20(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[1];
  if (piVar3 != (int *)0x0) {
    piVar2 = piVar3;
    do {
      if (*(int *)(*param_2 + 0xc) <= *(int *)(*piVar2 + 0xc)) {
        if (piVar2 != piVar3) {
          iVar1 = piVar2[2];
          piVar3 = (int *)FUN_00aae9af(0x10);
          if (piVar3 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            *piVar3 = *param_2;
            piVar3[1] = (int)piVar2;
            piVar3[2] = iVar1;
            *(undefined1 *)(piVar3 + 3) = 0;
          }
          piVar2[2] = (int)piVar3;
          if (iVar1 != 0) {
            *(int **)(iVar1 + 4) = piVar3;
          }
          param_1[2] = param_1[2] + 1;
          return;
        }
        piVar2 = (int *)FUN_00aae9af(0x10);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          *piVar2 = *param_2;
          piVar2[1] = (int)piVar3;
          piVar2[2] = 0;
          *(undefined1 *)(piVar2 + 3) = 0;
        }
        iVar1 = param_1[2];
        param_1[1] = piVar2;
        param_1[2] = iVar1 + 1;
        if (iVar1 != 0) {
          piVar3[2] = (int)piVar2;
          return;
        }
        *param_1 = piVar2;
        return;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  FUN_009e6cc0(param_2);
  return;
}

