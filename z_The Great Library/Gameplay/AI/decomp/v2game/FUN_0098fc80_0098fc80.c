// FUN_0098fc80 @ 0098fc80 body=[[0098fc80, 0098fd85]]


undefined4 FUN_0098fc80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *_Src;
  char *pcVar5;
  undefined8 uVar6;
  int local_c;
  int local_8;
  
  _Src = (char *)(param_1 + 4);
  local_8 = 0;
  local_c = 0;
  iVar2 = FID_conflict__sscanf(_Src,"%i",&local_8);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00aafe90(_Src,&DAT_00df8140);
  if (iVar2 == 0) {
    *param_2 = local_8 * 1000;
    return 1;
  }
  pcVar5 = (char *)(iVar2 + 1);
  iVar2 = 0;
  param_1 = 0x303030;
  if (*pcVar5 != '\0') {
    pcVar3 = pcVar5;
    do {
      if (2 < iVar2) break;
      pcVar3[(int)&param_1 - (int)pcVar5] = *pcVar3;
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (*pcVar3 != '\0');
  }
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    iVar2 = iVar4 + 1;
  } while (*(char *)((int)&param_1 + iVar4) == '0');
  FID_conflict__sscanf((char *)((int)&param_1 + iVar4),"%i",&local_c);
  piVar1 = param_2;
  iVar2 = local_c;
  if (local_8 < 0) {
    iVar2 = -local_c;
  }
  iVar2 = iVar2 + local_8 * 1000;
  *param_2 = iVar2;
  if ((*_Src == '-') && (local_8 == 0)) {
    uVar6 = __allmul(iVar2,iVar2 >> 0x1f,0xfffffc18,0xffffffff);
    iVar2 = __alldiv(uVar6,1000,0);
    *piVar1 = iVar2;
  }
  *(int *)pcVar5 = param_1;
  return 1;
}

