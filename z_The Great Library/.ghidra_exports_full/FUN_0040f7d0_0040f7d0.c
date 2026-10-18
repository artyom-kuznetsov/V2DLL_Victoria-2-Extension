// FUN_0040f7d0 @ 0040f7d0 body=[[0040f7d0, 0040f81b]]


void FUN_0040f7d0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  int unaff_EDI;
  
  *(int *)(in_EAX + 0x390) = unaff_EDI;
  piVar3 = (int *)(**(code **)(**(int **)(in_EAX + 0x88) + 0x2c))();
  piVar3 = (int *)*piVar3;
  if (piVar3 != (int *)0x0) {
    while( true ) {
      piVar1 = (int *)*piVar3;
      piVar3 = (int *)piVar3[2];
      if (piVar1[10] == unaff_EDI) break;
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    (**(code **)(*piVar1 + 0x10))();
    iVar2 = piVar1[0xc];
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    *(undefined4 *)(iVar2 + 0x10c) = 1;
  }
  return;
}

