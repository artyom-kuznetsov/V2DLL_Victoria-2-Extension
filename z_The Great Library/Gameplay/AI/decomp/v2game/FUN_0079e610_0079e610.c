// FUN_0079e610 @ 0079e610 body=[[0079e610, 0079e635] [0079e640, 0079e74b]]


/* WARNING: Removing unreachable block (ram,0x0079e667) */

void FUN_0079e610(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1[1];
  if (piVar6 != (int *)0x0) {
    iVar1 = *param_2;
    piVar5 = piVar6;
    do {
      uVar2 = *(uint *)(*piVar5 + 0xa4);
      uVar3 = *(uint *)(iVar1 + 0xa4);
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = uVar2;
      }
      uVar4 = FUN_00414bd0(uVar4);
      if (uVar4 == 0) {
        if (uVar2 <= uVar3) {
          uVar4 = (uint)(uVar3 != uVar2);
          goto LAB_0079e699;
        }
      }
      else {
LAB_0079e699:
        if (-1 < (int)uVar4) {
          if (piVar5 != piVar6) {
            iVar1 = piVar5[2];
            piVar6 = (int *)FUN_00aae9af(0x10);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = *param_2;
              piVar6[1] = (int)piVar5;
              piVar6[2] = iVar1;
              *(undefined1 *)(piVar6 + 3) = 0;
            }
            piVar5[2] = (int)piVar6;
            if (iVar1 != 0) {
              *(int **)(iVar1 + 4) = piVar6;
            }
            param_1[2] = param_1[2] + 1;
            return;
          }
          piVar5 = (int *)FUN_00aae9af(0x10);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = *param_2;
            piVar5[1] = (int)piVar6;
            piVar5[2] = 0;
            *(undefined1 *)(piVar5 + 3) = 0;
          }
          iVar1 = param_1[2];
          param_1[1] = piVar5;
          param_1[2] = iVar1 + 1;
          if (iVar1 == 0) {
            *param_1 = piVar5;
            return;
          }
          piVar6[2] = (int)piVar5;
          return;
        }
      }
      piVar5 = (int *)piVar5[1];
    } while (piVar5 != (int *)0x0);
  }
  FUN_009e6cc0(param_2);
  return;
}

