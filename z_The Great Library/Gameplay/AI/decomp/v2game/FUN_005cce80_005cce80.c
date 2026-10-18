// FUN_005cce80 @ 005cce80 body=[[005cce80, 005cce99] [005ccea0, 005ccebb]]


void FUN_005cce80(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  int in_ECX;
  undefined4 *puVar3;
  
  *in_EAX = 0;
  if (in_ECX == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(in_ECX + 0x38);
  }
  piVar1 = (int *)*puVar3;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (0 < *(int *)(*(int *)(iVar2 + 0x38) + 0x22c)) {
      *in_EAX = *in_EAX + *(int *)(iVar2 + 0x3c);
    }
  }
  return;
}

