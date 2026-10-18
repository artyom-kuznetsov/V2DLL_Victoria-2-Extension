// FUN_00708c40 @ 00708c40 body=[[00708c40, 00708c58] [00708c60, 00708cb6]]


void FUN_00708c40(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    cVar1 = FUN_006f38d0();
    if (cVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_007092c0(param_1,iVar2,param_2,param_4,param_5);
  return;
}

