// FUN_0054a410 @ 0054a410 body=[[0054a410, 0054a4ea]]


void FUN_0054a410(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[1];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(*param_2 + 0xc);
    piVar3 = piVar4;
    do {
      iVar2 = *(int *)(*piVar3 + 0xc);
      if ((iVar1 < iVar2) ||
         ((iVar1 <= iVar2 && (*(uint *)(*param_2 + 8) <= *(uint *)(*piVar3 + 8))))) {
        if (piVar3 != piVar4) {
          iVar1 = piVar3[2];
          piVar4 = (int *)FUN_00aae9af(0x10);
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            *piVar4 = *param_2;
            piVar4[1] = (int)piVar3;
            piVar4[2] = iVar1;
            *(undefined1 *)(piVar4 + 3) = 0;
          }
          piVar3[2] = (int)piVar4;
          if (iVar1 != 0) {
            *(int **)(iVar1 + 4) = piVar4;
          }
          param_1[2] = param_1[2] + 1;
          return;
        }
        piVar3 = (int *)FUN_00aae9af(0x10);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          *piVar3 = *param_2;
          piVar3[1] = (int)piVar4;
          piVar3[2] = 0;
          *(undefined1 *)(piVar3 + 3) = 0;
        }
        iVar1 = param_1[2];
        param_1[1] = piVar3;
        param_1[2] = iVar1 + 1;
        if (iVar1 != 0) {
          piVar4[2] = (int)piVar3;
          return;
        }
        *param_1 = piVar3;
        return;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
  }
  FUN_009e6cc0(param_2);
  return;
}

