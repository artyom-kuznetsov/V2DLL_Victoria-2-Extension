// FUN_006f3950 @ 006f3950 body=[[006f3950, 006f39cc]]


undefined4 FUN_006f3950(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_EDX;
  int unaff_ESI;
  int local_c;
  int local_8;
  
  local_c = (*(int **)(in_EDX + 0x26c))[1];
  local_8 = **(int **)(in_EDX + 0x26c);
  piVar2 = &local_8;
  if (local_8 <= local_c) {
    piVar2 = &local_c;
  }
  local_8 = *(int *)(*(int *)(in_EDX + 0x26c) + 8);
  local_c = *piVar2;
  piVar1 = &local_c;
  if (*piVar2 <= local_8) {
    piVar1 = &local_8;
  }
  local_8 = (*(int **)(unaff_ESI + 0x26c))[1];
  local_c = **(int **)(unaff_ESI + 0x26c);
  piVar2 = &local_c;
  if (local_c <= local_8) {
    piVar2 = &local_8;
  }
  local_8 = *(int *)(*(int *)(unaff_ESI + 0x26c) + 8);
  local_c = *piVar2;
  piVar3 = &local_c;
  if (*piVar2 <= local_8) {
    piVar3 = &local_8;
  }
  return CONCAT31((int3)((uint)piVar3 >> 8),*piVar1 < *piVar3);
}

