// FUN_005153a0 @ 005153a0 body=[[005153a0, 005153d9] [005153e0, 00515482]]


bool FUN_005153a0(int param_1,int param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar5 = param_1;
  iVar6 = 0;
  *param_4 = 0;
  *param_3 = 0;
  *param_5 = 0;
  piVar1 = (int *)(param_1 + 0x15e0);
  piVar2 = (int *)(param_1 + 0x15dc);
  param_1 = 0;
  if (0 < (int)(*piVar1 - *piVar2 & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar5 + 0x15dc) + param_1 * 4);
      if (*(int *)(iVar3 + 8) == param_2) {
        *param_3 = *param_3 + *(int *)(iVar3 + 0x3c);
        iVar6 = iVar6 + *(int *)(iVar3 + 0x10);
        cVar4 = FUN_004467f0();
        if ((cVar4 == '\0') || (*(char *)(iVar3 + 0x44) != '\0')) {
          *param_4 = *param_4 + *(int *)(iVar3 + 0x10);
        }
        if (*(char *)(iVar3 + 0x45) != '\0') {
          *param_5 = 1;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar5 + 0x15e0) - *(int *)(iVar5 + 0x15dc) >> 2);
    if (0 < iVar6) {
      uVar7 = __allmul(*param_3,*param_3 >> 0x1f,1000,0);
      iVar5 = __alldiv(uVar7,iVar6 * 1000,iVar6 * 1000 >> 0x1f);
      *param_3 = iVar5;
      *param_4 = iVar6 - *param_4;
    }
  }
  return 0 < *param_4;
}

