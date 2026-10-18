// FUN_005a9c60 @ 005a9c60 body=[[005a9c60, 005a9d25]]


int * FUN_005a9c60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_c;
  int local_8;
  
  iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x88);
  FUN_00598b60(&local_c);
  FUN_00598b60(&local_8);
  piVar1 = &local_8;
  if (local_c <= local_8) {
    piVar1 = &local_c;
  }
  if (*piVar1 <= iVar3) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = *piVar1 - iVar3;
  iVar3 = 1000 - iVar3;
  if (iVar3 == 0) {
    *param_1 = -1;
    return param_1;
  }
  if ((-0x189374 < iVar2) && (iVar2 < 0x20c49b)) {
    *param_1 = (iVar2 * 1000) / iVar3;
    return param_1;
  }
  uVar4 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
  iVar3 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
  *param_1 = iVar3;
  return param_1;
}

