// FUN_005cfa90 @ 005cfa90 body=[[005cfa90, 005cfb02]]


int * FUN_005cfa90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined8 uVar4;
  
  piVar1 = *(int **)(in_ECX + 0x38);
  *param_1 = 0;
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    iVar2 = *(int *)(iVar3 + 0x74);
    piVar1 = (int *)piVar1[2];
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x164) == '\0')) {
      iVar3 = *(int *)(iVar3 + 0x40);
    }
    else {
      iVar3 = 0;
    }
    *param_1 = *param_1 + iVar3;
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    iVar3 = *(int *)(in_ECX + 0x40) * 1000;
    uVar4 = __allmul(*param_1,*param_1 >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
    *param_1 = iVar3;
  }
  return param_1;
}

