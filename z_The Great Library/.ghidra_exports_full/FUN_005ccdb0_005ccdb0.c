// FUN_005ccdb0 @ 005ccdb0 body=[[005ccdb0, 005ccdc8] [005ccdd0, 005ccde8]]


void FUN_005ccdb0(void)

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
    iVar2 = *(int *)(*(int *)(*piVar1 + 0x38) + 0x22c);
    piVar1 = (int *)piVar1[2];
    if (*in_EAX < iVar2) {
      *in_EAX = iVar2;
    }
  }
  return;
}

