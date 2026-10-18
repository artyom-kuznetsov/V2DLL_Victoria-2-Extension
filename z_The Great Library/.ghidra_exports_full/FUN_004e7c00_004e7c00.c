// FUN_004e7c00 @ 004e7c00 body=[[004e7c00, 004e7da0]]


void FUN_004e7c00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint local_10;
  
  piVar5 = *(int **)(param_1 + 0xa4);
  local_10 = 0;
  if (piVar5 != (int *)0x0) {
    iVar3 = *(int *)(DAT_012586dc + 0x20);
    iVar1 = *(int *)(iVar3 + 0x10) / 1000;
    do {
      iVar2 = *piVar5;
      piVar5 = (int *)piVar5[2];
      if (*(int *)(iVar2 + 0x58) < iVar1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x58) / (((*(int *)(iVar3 + 0x14) / 1000) * 1000) / 1000) + 1;
      }
      local_10 = local_10 + iVar2;
    } while (piVar5 != (int *)0x0);
    if (((local_10 != 0) && (iVar1 <= *(int *)(param_2 + 0x58))) &&
       (iVar3 = *(int *)(param_2 + 0x58) / (((*(int *)(iVar3 + 0x14) / 1000) * 1000) / 1000) + 1,
       0 < iVar3)) {
      uVar4 = iVar3 + local_10;
      uVar6 = __alldiv(local_10 * 0x40000000,((int)local_10 >> 0x1f) << 0x1e | local_10 >> 2,
                       uVar4 * 0x8000,((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11);
      lVar7 = __allmul(uVar6,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
      *(longlong *)(param_1 + 0xb8) = lVar7 >> 0xf;
    }
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  piVar5 = (int *)FUN_00aae9af(0x10);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = param_2;
    piVar5[1] = iVar3;
    piVar5[2] = 0;
    *(undefined1 *)(piVar5 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xac);
  *(int **)(param_1 + 0xa8) = piVar5;
  *(int *)(param_1 + 0xac) = iVar1 + 1;
  if (iVar1 == 0) {
    *(int **)(param_1 + 0xa4) = piVar5;
    FUN_00965bd0(param_1);
    return;
  }
  *(int **)(iVar3 + 8) = piVar5;
  FUN_00965bd0(param_1);
  return;
}

