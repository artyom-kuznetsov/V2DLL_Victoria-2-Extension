// FUN_0084f170 @ 0084f170 body=[[0084f170, 0084f250]]


void FUN_0084f170(int param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_3;
  piVar1 = (int *)(param_1 + 0xbc + param_2 * 0x10);
  piVar4 = (int *)*piVar1;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      iVar2 = piVar1[1];
      piVar4 = (int *)FUN_00aae9af(0x10);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar3;
        piVar4[1] = iVar2;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar3 = piVar1[2];
      piVar1[1] = (int)piVar4;
      piVar1[2] = iVar3 + 1;
      if (iVar3 == 0) {
        *piVar1 = (int)piVar4;
      }
      else {
        *(int **)(iVar2 + 8) = piVar4;
      }
      if ((param_4 != '\0') && (*(char *)(param_2 + 0x234 + param_1) == '\0')) {
        *(undefined1 *)(param_2 + 0x234 + param_1) = 1;
      }
      return;
    }
    if ((*(int *)(*piVar4 + 8) != 0) &&
       (*(float *)(*(int *)(*(int *)(*piVar4 + 8) + 0x68) + 0x6c) <
        *(float *)(*(int *)(*(int *)(param_3 + 8) + 0x68) + 0x6c))) break;
    piVar4 = (int *)piVar4[2];
  }
  FUN_009b3c80(piVar1,&param_3,piVar4);
  if (param_4 == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x234 + param_1) != '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 0x234 + param_1) = 1;
  return;
}

