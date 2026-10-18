// FUN_0047d9e0 @ 0047d9e0 body=[[0047d9e0, 0047da4a]]


void FUN_0047d9e0(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 3;
  if (1 < iVar5) {
    do {
      iVar2 = *(int *)(param_1 + 0x48);
      iVar3 = *(int *)(iVar2 + 4 + iVar4 * 8);
      puVar1 = (uint *)(iVar2 + iVar4 * 8);
      if ((iVar3 < 1) && (iVar3 < 0)) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      else if (((int)param_3 <= iVar3) &&
              (((int)param_3 < iVar3 || (param_2 < *(uint *)(iVar2 + iVar4 * 8))))) {
        *puVar1 = param_2;
        puVar1[1] = param_3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  return;
}

