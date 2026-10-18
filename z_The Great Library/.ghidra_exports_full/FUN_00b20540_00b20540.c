// FUN_00b20540 @ 00b20540 body=[[00b20540, 00b205f9]]


void FUN_00b20540(int *param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  void *_Src;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = param_3;
  piVar3 = param_1;
  iVar5 = *param_1;
  param_1 = (int *)param_1[1];
  iVar5 = FUN_00b204b0(param_3,iVar5,&param_1);
  if (iVar5 == 0) {
    iVar5 = (*DAT_013f3aac)(*piVar3,piVar3[1] * 4 + 8,0);
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar7 = (*DAT_013f3aa8)(pcVar6 + (1 - (int)pcVar1),0);
    iVar4 = (int)param_1;
    if ((iVar5 != 0) && (*piVar3 = iVar5, iVar7 != 0)) {
      pcVar6 = param_3;
      do {
        cVar2 = *pcVar6;
        pcVar6[iVar7 - (int)param_3] = cVar2;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (param_1 != (int *)piVar3[1]) {
        _Src = (void *)(*piVar3 + (int)param_1 * 4);
        FID_conflict__memcpy((void *)((int)_Src + 4),_Src,(piVar3[1] - (int)param_1) * 4);
      }
      *(int *)(*piVar3 + iVar4 * 4) = iVar7;
      piVar3[1] = piVar3[1] + 1;
    }
  }
  return;
}

