// FUN_005cf8b0 @ 005cf8b0 body=[[005cf8b0, 005cf942]]


int * FUN_005cf8b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined8 uVar4;
  
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  *param_1 = iVar2;
  piVar3 = *(int **)(in_ECX + 0x38);
  if (piVar3 != (int *)0x0) {
    iVar2 = *param_1;
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      iVar2 = iVar2 + *(int *)(iVar1 + 0x34);
    } while (piVar3 != (int *)0x0);
    *param_1 = iVar2;
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    iVar2 = *(int *)(in_ECX + 0x40) * 1000;
    uVar4 = __allmul(*param_1,*param_1 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar4,iVar2,iVar2 >> 0x1f);
    *param_1 = iVar2;
  }
  return param_1;
}

