// FUN_0085f990 @ 0085f990 body=[[0085f990, 0085f9ac] [0085f9b0, 0085f9f2]]


void FUN_0085f990(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_EAX;
  int *piVar4;
  
  piVar2 = *(int **)(in_EAX + 0x140);
  piVar4 = piVar2;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      puVar3 = (undefined4 *)*piVar4;
      piVar1 = piVar4 + 2;
      if (puVar3[3] == param_2) break;
      piVar4 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        return;
      }
    }
    for (; (piVar2 != (int *)0x0 && ((undefined4 *)*piVar2 != puVar3)); piVar2 = (int *)piVar2[2]) {
    }
    FUN_005f2ae0(piVar2);
    (**(code **)*puVar3)(1);
  }
  return;
}

