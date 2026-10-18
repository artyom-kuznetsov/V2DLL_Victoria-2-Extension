// FUN_00708b70 @ 00708b70 body=[[00708b70, 00708bdf]]


void FUN_00708b70(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar3 = in_EAX;
  while( true ) {
    iVar2 = iVar3 * 2 + 2;
    if (param_2 <= iVar2) break;
    cVar1 = FUN_006f3780();
    if (cVar1 != '\0') {
      iVar2 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar3 = iVar2;
  }
  if (iVar2 == param_2) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_2 * 4);
    iVar3 = param_2 + -1;
  }
  FUN_00709160(param_1,iVar3,in_EAX,param_3,param_4);
  return;
}

