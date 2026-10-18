// FUN_005ba1d0 @ 005ba1d0 body=[[005ba1d0, 005ba259]]


void FUN_005ba1d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int *piVar4;
  
LAB_005ba1d7:
  while( true ) {
    while (piVar1 = (int *)in_EAX[1], piVar1 == (int *)0x0) {
      piVar1 = (int *)in_EAX[2];
      if ((piVar1 == (int *)0x0) || (*(int *)(param_1 + 4) <= *(int *)(*piVar1 + 4)))
      goto LAB_005ba244;
      *in_EAX = *piVar1;
      in_EAX = piVar1;
    }
    piVar4 = (int *)in_EAX[2];
    if (piVar4 != (int *)0x0) break;
    if (*(int *)(param_1 + 4) <= *(int *)(*piVar1 + 4)) {
      *in_EAX = param_1;
      return;
    }
    *in_EAX = *piVar1;
    in_EAX = piVar1;
  }
  iVar2 = *piVar4;
  iVar3 = *(int *)(*piVar1 + 4);
  if (iVar3 <= *(int *)(iVar2 + 4)) {
    if (iVar3 < *(int *)(param_1 + 4)) {
      *in_EAX = *piVar1;
      in_EAX = piVar1;
      goto LAB_005ba1d7;
    }
    piVar4 = (int *)in_EAX[2];
  }
  if (*(int *)(param_1 + 4) <= *(int *)(iVar2 + 4)) {
LAB_005ba244:
    *in_EAX = param_1;
    return;
  }
  *in_EAX = *piVar4;
  in_EAX = piVar4;
  goto LAB_005ba1d7;
}

