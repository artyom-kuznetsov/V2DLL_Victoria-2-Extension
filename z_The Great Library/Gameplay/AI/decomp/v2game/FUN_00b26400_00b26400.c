// FUN_00b26400 @ 00b26400 body=[[00b26400, 00b26496]]


void FUN_00b26400(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1;
  param_1 = (int *)param_1[8];
  if (param_1 != (int *)0x0) {
    iVar4 = 0;
    do {
      iVar1 = *piVar3;
      iVar2 = *(int *)(iVar1 + 8 + iVar4);
      if (iVar2 == 0) {
        FUN_00b1f840("Not a file");
      }
      else {
        if (*(int *)(iVar2 + 4) != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
        }
        iVar2 = *(int *)(iVar1 + 8 + iVar4);
        if (*(int *)(iVar2 + 4) == 0) {
          (*DAT_013f3ab0)(*(undefined4 *)(iVar2 + 8));
          *(undefined4 *)(*(int *)(iVar1 + 8 + iVar4) + 8) = 0;
        }
      }
      iVar4 = iVar4 + 0x18;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  FUN_00b2b320(piVar3 + 2,FUN_00b25990);
  FUN_00b2a4f0(piVar3[0x18]);
  (*DAT_013f3ab0)(piVar3[1]);
  (*DAT_013f3ab0)(*piVar3);
  (*DAT_013f3ab0)(piVar3);
  return;
}

