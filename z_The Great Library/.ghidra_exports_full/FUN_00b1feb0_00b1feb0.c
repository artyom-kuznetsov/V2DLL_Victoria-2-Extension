// PHYSFS_freeList @ 00b1feb0 body=[[00b1feb0, 00b1fee1]]


void PHYSFS_freeList(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x71feb0  11  PHYSFS_freeList */
  iVar2 = *param_1;
  piVar3 = param_1;
  while (iVar2 != 0) {
    (*DAT_013f3ab0)(iVar2);
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 1;
    iVar2 = *piVar1;
  }
  (*DAT_013f3ab0)(param_1);
  return;
}

