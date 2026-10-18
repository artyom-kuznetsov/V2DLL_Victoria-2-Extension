// FUN_004e7950 @ 004e7950 body=[[004e7950, 004e7bfe]]


/* WARNING: Removing unreachable block (ram,0x004e7bcb) */

uint FUN_004e7950(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_EDI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5f8f8;
  local_14 = ExceptionList;
  if (*(char *)(unaff_EDI + 0x91) == '\0') {
    iVar4 = *(int *)(*(int *)(unaff_EDI + 0x30) + 0xf8);
    if (((iVar4 == 0) && (*(int *)(unaff_EDI + 0x3c) == param_2)) ||
       ((iVar4 == 3 && (*(int *)(unaff_EDI + 0x3c) == param_2)))) {
LAB_004e7bd0:
      ExceptionList = local_14;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    puVar1 = *(uint **)(unaff_EDI + 0x80);
    iVar3 = DAT_012587e4;
    ExceptionList = &local_14;
    while (puVar1 != (uint *)0x0) {
      uVar6 = *puVar1;
      puVar1 = (uint *)puVar1[3];
      iVar4 = DAT_01258a94;
      if (uVar6 < 0x1269) {
        iVar4 = DAT_01258a98;
      }
      if (((((iVar4 != 0) && (iVar4 = FUN_009c1d40(), iVar4 != 0)) && (iVar4 != 8)) &&
          (iVar4 = *(int *)(iVar4 + 0xd4), *(int *)(iVar4 + 300) == param_2)) &&
         ((*(int *)(iVar4 + 0x134) == param_2 ||
          (((*(char *)(iVar4 + 0x130) == 'R' && (*(char *)(iVar4 + 0x131) == 'E')) &&
           (*(char *)(iVar4 + 0x132) == 'B')))))) {
        iVar4 = *(int *)(*(int *)(unaff_EDI + 0x30) + 0xf8);
        if (iVar4 == 6) goto LAB_004e7bd0;
        if (iVar4 == 1) {
          iVar4 = *(int *)(*(int *)(iVar3 + 4) + param_2 * 4);
          piVar2 = *(int **)(iVar4 + 0x9d8);
          piVar5 = piVar2;
          while ((iVar3 = DAT_012587e4, piVar2 <= piVar5 && (piVar5 < *(int **)(iVar4 + 0x9dc)))) {
            iVar3 = *piVar5;
            piVar5 = piVar5 + 1;
            if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4) + 0x1f0) +
                        *(int *)(*(int *)(unaff_EDI + 0x4c) + 8) * 4) != 0) {
              ExceptionList = local_14;
              return CONCAT31((int3)((uint)piVar5 >> 8),1);
            }
          }
        }
        else if (iVar4 == 2) {
          iVar4 = *(int *)(*(int *)(iVar3 + 4) + param_2 * 4);
          piVar2 = *(int **)(iVar4 + 0x9d8);
          piVar5 = piVar2;
          while ((iVar3 = DAT_012587e4, piVar2 <= piVar5 && (piVar5 < *(int **)(iVar4 + 0x9dc)))) {
            iVar3 = *piVar5;
            piVar5 = piVar5 + 1;
            if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4) + 500) +
                        *(int *)(*(int *)(*(int *)(unaff_EDI + 0x4c) + 0x50) + 0x5c) * 4) != 0) {
              ExceptionList = local_14;
              return CONCAT31((int3)((uint)piVar5 >> 8),1);
            }
          }
        }
        else if (iVar4 == 5) {
          iVar4 = *(int *)(*(int *)(iVar3 + 4) + param_2 * 4);
          piVar2 = *(int **)(iVar4 + 0x9d8);
          piVar5 = piVar2;
          while ((iVar3 = DAT_012587e4, piVar2 <= piVar5 && (piVar5 < *(int **)(iVar4 + 0x9dc)))) {
            iVar3 = *piVar5;
            piVar5 = piVar5 + 1;
            if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4) + 0x1ec) +
                        *(int *)(*(int *)(unaff_EDI + 0x50) + 8) * 4) != 0) {
              ExceptionList = local_14;
              return CONCAT31((int3)((uint)piVar5 >> 8),1);
            }
          }
        }
      }
    }
    local_c = 0;
    FUN_004e5180(param_1,param_2);
    ExceptionList = (void *)FUN_00849e90();
  }
  uVar6 = (uint)ExceptionList & 0xffffff00;
  ExceptionList = local_14;
  return uVar6;
}

