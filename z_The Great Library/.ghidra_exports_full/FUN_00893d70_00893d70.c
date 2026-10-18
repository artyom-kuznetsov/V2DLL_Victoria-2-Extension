// FUN_00893d70 @ 00893d70 body=[[00893d70, 00893dbd]]


void FUN_00893d70(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe54
                         ); (piVar1 != (int *)0x0 && (*piVar1 != *(int *)(in_ECX + 0x20)));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

