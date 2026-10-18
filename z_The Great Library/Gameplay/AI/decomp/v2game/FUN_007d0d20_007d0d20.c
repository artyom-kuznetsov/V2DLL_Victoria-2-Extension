// FUN_007d0d20 @ 007d0d20 body=[[007d0d20, 007d0dbc]]


void FUN_007d0d20(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2;
  while( true ) {
    iVar5 = iVar1 * 2 + 2;
    if (param_3 <= iVar5) break;
    puVar2 = (uint *)FUN_007c7d90();
    puVar3 = (uint *)FUN_007c7d90();
    if (((int)puVar3[1] <= (int)puVar2[1]) &&
       (((int)puVar3[1] < (int)puVar2[1] || (*puVar3 < *puVar2)))) {
      iVar5 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
    iVar1 = iVar5;
  }
  iVar4 = iVar1;
  if (iVar5 == param_3) {
    iVar4 = param_3 + -1;
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
  }
  FUN_007d1e30(param_1,iVar4,param_2,param_4,param_5);
  return;
}

