// FUN_0084f7c0 @ 0084f7c0 body=[[0084f7c0, 0084f7fc] [0084f800, 0084f81d]]


void FUN_0084f7c0(float param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0xe8);
  in_ECX[0x72] = (int)((float)in_ECX[0x72] - param_1);
  iVar4 = (*pcVar1)();
  piVar2 = *(int **)(iVar4 + 0x140);
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    piVar2 = (int *)piVar2[1];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x15c))();
    }
  }
  return;
}

