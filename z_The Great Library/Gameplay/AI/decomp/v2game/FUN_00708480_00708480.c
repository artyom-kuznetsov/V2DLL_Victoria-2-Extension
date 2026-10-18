// FUN_00708480 @ 00708480 body=[[00708480, 00708501]]


void FUN_00708480(int param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    cVar1 = FUN_006e2680(&param_5);
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
  FUN_00708e30(param_1,iVar2,param_2,param_4,param_5,param_6);
  return;
}

