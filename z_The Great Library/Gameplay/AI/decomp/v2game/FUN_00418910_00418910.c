// FUN_00418910 @ 00418910 body=[[00418910, 0041898b]]


int FUN_00418910(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1] - *param_1 >> 3;
  iVar3 = 0;
  while( true ) {
    iVar2 = param_1[4] + iVar3;
    if (iVar1 <= iVar2) {
      iVar2 = iVar2 - iVar1;
    }
    if (*(int *)(*param_1 + 4 + iVar2 * 8) == 0) break;
    iVar3 = iVar3 + 1;
    if (iVar1 <= iVar3) {
      return 0;
    }
  }
  iVar3 = iVar2 + 1;
  param_1[4] = iVar3;
  if (iVar1 <= iVar3) {
    param_1[4] = iVar3 - iVar1;
  }
  FUN_00418aa0(param_4,param_5,param_6);
  return *param_1 + iVar2 * 8;
}

