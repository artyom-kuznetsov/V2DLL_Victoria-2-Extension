// FUN_005152f0 @ 005152f0 body=[[005152f0, 0051531d] [00515320, 0051539f]]


int * FUN_005152f0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  piVar2 = param_2;
  iVar4 = *(int *)(param_1 + 0x15e0) - *(int *)(param_1 + 0x15dc) >> 2;
  *param_2 = 0;
  if (iVar4 < 1) {
    if (*(char *)(param_1 + 0x120) != '\0') {
      *param_2 = 1000;
    }
    return param_2;
  }
  param_2 = (int *)0x0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x15dc) + (int)param_2 * 4);
    cVar3 = FUN_004467f0();
    if ((cVar3 == '\0') || (*(char *)(iVar1 + 0x44) != '\0')) {
      *piVar2 = *piVar2 + 1000;
    }
    else {
      *piVar2 = *piVar2 + *(int *)(iVar1 + 0x3c);
    }
    param_2 = (int *)((int)param_2 + 1);
  } while ((int)param_2 < iVar4);
  uVar5 = __allmul(*piVar2,*piVar2 >> 0x1f,1000,0);
  iVar4 = __alldiv(uVar5,iVar4 * 1000,iVar4 * 1000 >> 0x1f);
  *piVar2 = iVar4;
  return piVar2;
}

