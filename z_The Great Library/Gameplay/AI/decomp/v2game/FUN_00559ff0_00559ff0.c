// FUN_00559ff0 @ 00559ff0 body=[[00559ff0, 0055a09b]]


void FUN_00559ff0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  iVar3 = param_1;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_2 <= iVar4) break;
    iVar1 = FUN_00445060(param_4);
    iVar2 = FUN_00445060(param_4);
    if (iVar1 < iVar2) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(in_EDX + iVar3 * 8) = *(undefined4 *)(in_EDX + iVar4 * 8);
    *(undefined4 *)(in_EDX + 4 + iVar3 * 8) = *(undefined4 *)(in_EDX + 4 + iVar4 * 8);
    iVar3 = iVar4;
  }
  if (iVar4 == param_2) {
    *(undefined4 *)(in_EDX + iVar3 * 8) = *(undefined4 *)(in_EDX + -8 + param_2 * 8);
    *(undefined4 *)(in_EDX + 4 + iVar3 * 8) = *(undefined4 *)(in_EDX + -4 + param_2 * 8);
    iVar3 = param_2 + -1;
  }
  FUN_0055a640(iVar3,param_1,param_3,param_4);
  return;
}

