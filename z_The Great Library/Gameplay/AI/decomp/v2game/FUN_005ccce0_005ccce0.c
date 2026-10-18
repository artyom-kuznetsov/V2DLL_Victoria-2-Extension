// FUN_005ccce0 @ 005ccce0 body=[[005ccce0, 005cccf9] [005ccd00, 005ccd1b]]


void FUN_005ccce0(void)

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
    if (0 < *(int *)(*(int *)(iVar2 + 0x38) + 0x228)) {
      *in_EAX = *in_EAX + *(int *)(iVar2 + 0x3c);
    }
  }
  return;
}

