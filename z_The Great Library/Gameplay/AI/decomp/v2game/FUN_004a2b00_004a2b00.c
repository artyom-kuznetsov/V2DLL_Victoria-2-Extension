// FUN_004a2b00 @ 004a2b00 body=[[004a2b00, 004a2b9b]]


void FUN_004a2b00(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int in_EAX;
  undefined4 *unaff_ESI;
  
  if ((param_1 == (int *)**(int **)(in_EAX + 4)) && (param_2 == *(int **)(in_EAX + 4))) {
    FUN_004a2e00();
    *unaff_ESI = **(undefined4 **)(in_EAX + 4);
    return;
  }
  while (param_1 != param_2) {
    if (*(char *)((int)param_1 + 0x11) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0x11);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0x11);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
    FUN_004a2ba0();
  }
  *unaff_ESI = param_1;
  return;
}

