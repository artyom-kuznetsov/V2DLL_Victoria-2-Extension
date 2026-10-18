// FUN_0084f9d0 @ 0084f9d0 body=[[0084f9d0, 0084fa8e]]


void FUN_0084f9d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int *piVar5;
  int in_ECX;
  
  iVar4 = param_1;
  piVar1 = (int *)(in_ECX + 0x13c + in_EAX * 0x10);
  piVar2 = (int *)*piVar1;
  for (piVar5 = piVar2; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
    if (*piVar5 == param_1) {
      return;
    }
  }
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if ((*piVar2 != 0) &&
       (*(float *)(*(int *)(param_1 + 0x68) + 0x6c) < *(float *)(*(int *)(*piVar2 + 0x68) + 0x6c)))
    {
      FUN_009b3c80(piVar1,&param_1,piVar2);
      return;
    }
  }
  iVar3 = piVar1[1];
  piVar5 = (int *)FUN_00aae9af(0x10);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = iVar4;
    piVar5[1] = iVar3;
    piVar5[2] = 0;
    *(undefined1 *)(piVar5 + 3) = 0;
  }
  iVar4 = piVar1[2];
  piVar1[1] = (int)piVar5;
  piVar1[2] = iVar4 + 1;
  if (iVar4 == 0) {
    *piVar1 = (int)piVar5;
    return;
  }
  *(int **)(iVar3 + 8) = piVar5;
  return;
}

