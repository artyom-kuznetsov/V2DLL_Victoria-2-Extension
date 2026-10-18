// FUN_005da120 @ 005da120 body=[[005da120, 005da153]]


void FUN_005da120(void)

{
  int *piVar1;
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5c) == in_EAX) {
    *(undefined4 *)(in_ECX + 0x5c) = 0;
  }
  for (piVar1 = *(int **)(in_EAX + 0x4c); (piVar1 != (int *)0x0 && (*piVar1 != in_ECX));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

