// FUN_004b6f20 @ 004b6f20 body=[[004b6f20, 004b6f90]]


void FUN_004b6f20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  
  piVar1 = (int *)(in_EAX + 0xfc);
  for (piVar4 = (int *)*piVar1; (piVar4 != (int *)0x0 && (*piVar4 != param_1));
      piVar4 = (int *)piVar4[2]) {
  }
  FUN_005f2ae0(piVar4);
  iVar2 = *piVar1;
  piVar4 = (int *)FUN_00aae9af(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = param_1;
    piVar4[1] = 0;
    piVar4[2] = iVar2;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar3 = *(int *)(in_EAX + 0x104);
  *piVar1 = (int)piVar4;
  *(int *)(in_EAX + 0x104) = iVar3 + 1;
  if (iVar3 == 0) {
    *(int **)(in_EAX + 0x100) = piVar4;
    return;
  }
  *(int **)(iVar2 + 4) = piVar4;
  return;
}

