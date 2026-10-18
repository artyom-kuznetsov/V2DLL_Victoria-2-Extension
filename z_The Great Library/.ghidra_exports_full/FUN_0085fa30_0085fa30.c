// FUN_0085fa30 @ 0085fa30 body=[[0085fa30, 0085fa53]]


int FUN_0085fa30(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 0x140);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar2 + 0xc) != param_2);
  return iVar2;
}

