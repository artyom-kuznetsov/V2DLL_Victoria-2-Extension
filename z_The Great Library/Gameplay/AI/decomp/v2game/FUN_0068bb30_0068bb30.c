// FUN_0068bb30 @ 0068bb30 body=[[0068bb30, 0068bb9f]]


int FUN_0068bb30(int param_1)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(in_EAX + 0xb9c) - *(int *)(in_EAX + 0xb98) >> 4;
  iVar5 = 0;
  if (0 < iVar4) {
    piVar3 = *(int **)(in_EAX + 0xb98);
    do {
      piVar2 = (int *)*piVar3;
      if (piVar2 != (int *)0x0) {
        do {
          for (piVar1 = *(int **)(*piVar2 + 0x94); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2])
          {
            if (*piVar1 == *(int *)(param_1 + 0x58)) {
              return *piVar2;
            }
          }
          piVar2 = (int *)piVar2[2];
        } while (piVar2 != (int *)0x0);
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar5 < iVar4);
  }
  return 0;
}

