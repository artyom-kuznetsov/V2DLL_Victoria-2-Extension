// FUN_00a4ca70 @ 00a4ca70 body=[[00a4ca70, 00a4cb2a]]


void FUN_00a4ca70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 0xb8);
  iVar1 = in_ECX + 0xdc;
  piVar3 = (int *)FUN_00a45090(iVar1);
  if ((*piVar3 != 0) && (*(int *)(*(int *)(local_8 + 4) + -4 + *piVar3 * 4) != 0)) {
    iVar2 = *(int *)(in_ECX + 0xb8);
    piVar4 = (int *)FUN_00a45090(iVar1);
    piVar3 = (int *)0x0;
    if (*piVar4 != 0) {
      piVar3 = *(int **)(*(int *)(iVar2 + 4) + -4 + *piVar4 * 4);
    }
    (**(code **)(*piVar3 + 0xf4))(piVar3,0,&local_8);
    if (local_8 != 0) {
      iVar2 = *(int *)(in_ECX + 0xb8);
      piVar4 = (int *)FUN_00a45090(iVar1);
      piVar3 = (int *)0x0;
      if (*piVar4 != 0) {
        piVar3 = *(int **)(*(int *)(iVar2 + 4) + -4 + *piVar4 * 4);
      }
      (**(code **)(*piVar3 + 0xe8))(piVar3,local_8);
    }
  }
  FUN_00a4cb80(param_2,*(undefined4 *)(in_ECX + 0xa8));
  return;
}

