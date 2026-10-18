// FUN_005cfb10 @ 005cfb10 body=[[005cfb10, 005cfb72]]


int * FUN_005cfb10(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined8 uVar4;
  
  piVar2 = *(int **)(in_ECX + 0x38);
  *param_1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar3 = *param_1;
    do {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      iVar3 = iVar3 + *(int *)(iVar1 + 0x3c);
    } while (piVar2 != (int *)0x0);
    *param_1 = iVar3;
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    iVar3 = *(int *)(in_ECX + 0x40) * 1000;
    uVar4 = __allmul(*param_1,*param_1 >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
    *param_1 = iVar3;
  }
  return param_1;
}

