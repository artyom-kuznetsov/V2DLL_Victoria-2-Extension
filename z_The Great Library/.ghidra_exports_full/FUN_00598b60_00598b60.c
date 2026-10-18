// FUN_00598b60 @ 00598b60 body=[[00598b60, 00598c21]]


int * FUN_00598b60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(in_EDX + 0x70) - *(int *)(in_EDX + 0x6c) >> 2;
  iVar4 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(in_EDX + 0x6c);
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*piVar2 + 0x5c);
      if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 4)) {
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + *(int *)(*piVar2 + 0x58);
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (0 < iVar5) {
      iVar5 = iVar5 * 1000;
      if (iVar5 == 0) {
        *param_1 = -1;
        return param_1;
      }
      if (iVar4 + 0x189373U < 0x39580e) {
        *param_1 = (iVar4 * 1000) / iVar5;
        return param_1;
      }
      uVar6 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      iVar3 = __alldiv(uVar6,iVar5,iVar5 >> 0x1f);
      *param_1 = iVar3;
      return param_1;
    }
  }
  *param_1 = 1000;
  return param_1;
}

