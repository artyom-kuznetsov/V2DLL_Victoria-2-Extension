// FUN_00add3d0 @ 00add3d0 body=[[00add3d0, 00add403]]


undefined4 FUN_00add3d0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar2 = FUN_00add310(param_1,param_2);
  if ((iVar2 != -1) &&
     (piVar1 = *(int **)(*(int *)(in_ECX + 0x30) + iVar2 * 4), piVar1 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar1 + 0x10))();
    return uVar3;
  }
  return 0;
}

