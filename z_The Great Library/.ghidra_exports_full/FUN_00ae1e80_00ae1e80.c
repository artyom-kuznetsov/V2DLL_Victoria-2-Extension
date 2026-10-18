// FUN_00ae1e80 @ 00ae1e80 body=[[00ae1e80, 00ae1ec9]]


int FUN_00ae1e80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  iVar1 = in_ECX[2];
  iVar4 = 0;
  while ((iVar1 = iVar1 + -1, iVar1 != -1 &&
         (iVar2 = *(int *)(in_ECX[1] + iVar1 * 4), iVar2 != param_1))) {
    iVar3 = (**(code **)(**(int **)(iVar2 + 0x8c) + 4))();
    if (iVar3 == param_2) {
      iVar4 = iVar4 + 1;
      (**(code **)(*in_ECX + 0x24))(iVar2);
    }
  }
  return iVar4;
}

