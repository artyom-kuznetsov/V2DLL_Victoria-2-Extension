// FUN_00aa8180 @ 00aa8180 body=[[00aa8180, 00aa821d]]


void FUN_00aa8180(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = param_2;
  if ((param_2 == (int *)**(int **)(in_ECX + 4)) && (param_3 == *(int **)(in_ECX + 4))) {
    FUN_00aa8020();
    *param_1 = **(undefined4 **)(in_ECX + 4);
    return;
  }
  while (piVar2 != param_3) {
    param_2 = piVar2;
    if (*(char *)((int)piVar2 + 0x25) == '\0') {
      param_2 = (int *)piVar2[2];
      if (*(char *)((int)param_2 + 0x25) == '\0') {
        cVar1 = *(char *)(*param_2 + 0x25);
        piVar3 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x25);
          param_2 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x25);
        piVar4 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x25);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
        }
      }
    }
    FUN_00aa7c70(local_8,piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return;
}

