// FUN_0055c6c0 @ 0055c6c0 body=[[0055c6c0, 0055c74d]]


void FUN_0055c6c0(int param_1,undefined4 *param_2,char *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (int)param_3[2] + (int)param_3[1] + (int)*param_3 & 0x3f;
  piVar1 = (int *)(param_1 + 0x14 + uVar4 * 0x10);
  iVar5 = *(int *)(param_1 + 0x18 + uVar4 * 0x10) - *(int *)(param_1 + 0x14 + uVar4 * 0x10) >> 3;
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      iVar3 = __strnicmp(param_3,(char *)(*piVar1 + iVar6 * 8),3);
      if (iVar3 == 0) {
        iVar5 = *piVar1;
        uVar2 = *(undefined4 *)(iVar5 + iVar6 * 8);
        param_2[1] = *(undefined4 *)(iVar5 + 4 + iVar6 * 8);
        *param_2 = uVar2;
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  param_2[1] = 0;
  *param_2 = 0x2d2d2d;
  return;
}

