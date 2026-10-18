// FUN_007c7e10 @ 007c7e10 body=[[007c7e10, 007c7efc]]


void FUN_007c7e10(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[1];
  if (piVar4 != (int *)0x0) {
    iVar1 = *param_2;
    piVar3 = piVar4;
    do {
      iVar2 = *(int *)(*piVar3 + 0x84);
      if (iVar2 < 1) {
LAB_007c7e3f:
        if (0 < *(int *)(iVar1 + 0x84)) goto LAB_007c7e74;
LAB_007c7e48:
        if (*(int *)(iVar1 + 200) <= *(int *)(*piVar3 + 200)) {
LAB_007c7e74:
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
      }
      else if (0 < *(int *)(iVar1 + 0x84)) {
        if (iVar2 < 1) goto LAB_007c7e3f;
        goto LAB_007c7e48;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
  }
  FUN_009e6cc0(param_2);
  return;
}

