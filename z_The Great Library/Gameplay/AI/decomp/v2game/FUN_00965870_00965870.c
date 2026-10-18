// FUN_00965870 @ 00965870 body=[[00965870, 00965925]]


int FUN_00965870(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(DAT_012586dc + 0x20);
  if (iVar1 < *(int *)(iVar4 + 0x10) / 1000) {
    return 0;
  }
  iVar5 = (*(int *)(iVar4 + 0x14) / 1000) * 1000;
  if (param_2 == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 100) + 400);
    if (iVar2 == 1) {
      iVar4 = *(int *)(iVar4 + 0x30);
    }
    else if (iVar2 == 2) {
      iVar4 = *(int *)(iVar4 + 0x34);
    }
    else {
      cVar3 = FUN_004b64e0();
      if (cVar3 != '\0') goto LAB_00965907;
      iVar4 = *(int *)(iVar4 + 0x38);
    }
    iVar5 = __alldiv((longlong)iVar4 * (longlong)iVar5,1000,0);
  }
LAB_00965907:
  return iVar1 / (iVar5 / 1000) + 1;
}

