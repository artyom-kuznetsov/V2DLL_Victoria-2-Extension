// FUN_004de9a0 @ 004de9a0 body=[[004de9a0, 004dea00]]


int * FUN_004de9a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  
  piVar3 = param_1;
  iVar1 = *param_1;
  iVar2 = param_1[1];
  param_1 = (int *)((uint)param_1 & 0xffffff00);
  piVar5 = (int *)FUN_004df670(iVar1,param_2,param_1);
  if ((piVar5 != (int *)(((iVar2 - iVar1) / 0x160) * 0x160 + iVar1)) &&
     (cVar4 = FUN_00416db0(), cVar4 != '\0')) {
    return piVar5;
  }
  return piVar3 + 4;
}

