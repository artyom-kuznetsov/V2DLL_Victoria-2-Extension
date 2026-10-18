// FUN_00a8a4d0 @ 00a8a4d0 body=[[00a8a4d0, 00a8a549]]


int * FUN_00a8a4d0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 *unaff_EDI;
  
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x14;
  piVar2 = (int *)(*(code *)PTR__malloc_00f071f8)(0x38);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  piVar2[2] = param_2;
  *(undefined8 *)(piVar2 + 3) = *unaff_EDI;
  *(undefined8 *)(piVar2 + 5) = unaff_EDI[1];
  *(undefined8 *)(piVar2 + 7) = unaff_EDI[2];
  *(undefined8 *)(piVar2 + 9) = unaff_EDI[3];
  *(undefined8 *)(piVar2 + 0xb) = unaff_EDI[4];
  piVar2[0xd] = *(int *)(unaff_EDI + 5);
  puVar1 = *(undefined4 **)(param_1 + 0xa8);
  *piVar2 = param_1 + 0xa4;
  piVar2[1] = (int)puVar1;
  *puVar1 = piVar2;
  *(int **)(param_1 + 0xa8) = piVar2;
  return piVar2;
}

