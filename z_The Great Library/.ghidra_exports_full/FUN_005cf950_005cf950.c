// FUN_005cf950 @ 005cf950 body=[[005cf950, 005cf9ae]]


int * FUN_005cf950(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  *param_1 = iVar2;
  piVar1 = *(int **)(in_ECX + 0x38);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    *param_1 = *param_1 + *(int *)(*(int *)(iVar2 + 0x38) + 0xb0);
  }
  return param_1;
}

