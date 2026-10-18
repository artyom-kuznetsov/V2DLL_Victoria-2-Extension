// FUN_005b98e0 @ 005b98e0 body=[[005b98e0, 005b9a2f]]


int * FUN_005b98e0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_2 + 200) + param_3 * 0x24;
  iVar1 = *(int *)(iVar4 + 0x10);
  iVar4 = *(int *)(*(int *)(param_4 + 0x2238) + *(int *)(iVar4 + 4) * 4);
  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0x134) * 4);
  iVar2 = *(int *)(param_5 + 0xc4);
  *param_1 = iVar1;
  if ((iVar2 == *(int *)(iVar5 + 0x20)) ||
     (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + iVar2 * 4) + 0x34) == 0 &&
       (((*(char *)(param_5 + 0xc0) != 'R' || (*(char *)(param_5 + 0xc1) != 'E')) ||
        (*(char *)(param_5 + 0xc2) != 'B')))) &&
      (((*(char *)(iVar5 + 0x1c) != 'R' || (*(char *)(iVar5 + 0x1d) != 'E')) ||
       (*(char *)(iVar5 + 0x1e) != 'B')))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x9c) + 0x3c8) + 1000;
    FUN_00401000(0x424a0000);
    iVar5 = FUN_00b31c00();
    if (iVar4 < iVar5) {
      iVar4 = iVar5;
    }
    lVar3 = (longlong)iVar1 * (longlong)iVar4;
  }
  else if ((*(int *)(*(int *)(iVar4 + 0x174) + *(int *)(param_5 + 0xc4) * 4) < 1) ||
          (*(int *)(iVar4 + 0xf4) < 1)) {
    FUN_00401000(0x44899000);
    iVar4 = FUN_00b31c00();
    lVar3 = (longlong)iVar1 * (longlong)iVar4;
  }
  else {
    FUN_00401000(0x44fa1000);
    iVar4 = FUN_00b31c00();
    lVar3 = (longlong)iVar1 * (longlong)iVar4;
  }
  iVar4 = __alldiv(lVar3,1000,0);
  *param_1 = iVar4;
  return param_1;
}

