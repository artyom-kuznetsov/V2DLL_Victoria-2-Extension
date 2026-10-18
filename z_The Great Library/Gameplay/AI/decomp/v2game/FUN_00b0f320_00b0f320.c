// FUN_00b0f320 @ 00b0f320 body=[[00b0f320, 00b0f398]]


undefined4 FUN_00b0f320(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = param_2;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
  } while ((char)iVar1 != '\0');
  uVar3 = param_1[1];
  if (uVar3 == (int)piVar2 - ((int)param_2 + 1)) {
    piVar2 = (int *)*param_1;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)&DAT_00ded94d;
    }
    for (; 3 < uVar3; uVar3 = uVar3 - 4) {
      if (*piVar2 != *param_2) {
        return 0;
      }
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    }
    if ((uVar3 == 0) ||
       (((char)*param_2 == (char)*piVar2 &&
        ((uVar3 < 2 ||
         ((*(char *)((int)param_2 + 1) == *(char *)((int)piVar2 + 1) &&
          ((uVar3 < 3 || (*(char *)((int)param_2 + 2) == *(char *)((int)piVar2 + 2))))))))))) {
      return 1;
    }
  }
  return 0;
}

