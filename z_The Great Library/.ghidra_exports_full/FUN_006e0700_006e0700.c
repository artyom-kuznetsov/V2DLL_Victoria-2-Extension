// FUN_006e0700 @ 006e0700 body=[[006e0700, 006e076e]]


void FUN_006e0700(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *in_EAX;
  
  while (param_1 != param_2) {
    *in_EAX = param_1[3];
    in_EAX[1] = param_1[4];
    in_EAX = in_EAX + 2;
    if (*(char *)((int)param_1 + 0x15) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0x15);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0x15);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
  }
  return;
}

