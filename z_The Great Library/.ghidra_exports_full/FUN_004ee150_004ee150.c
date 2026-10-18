// FUN_004ee150 @ 004ee150 body=[[004ee150, 004ee2fd]]


void FUN_004ee150(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar7 = param_3 - uVar4;
  if (uVar7 == 0) {
    return;
  }
  if (param_4 == 0 && param_5 == 0) {
    return;
  }
  uVar10 = __allmul(uVar7 * 0x8000,((int)uVar7 >> 0x1f) << 0xf | uVar7 >> 0x11,param_4,param_5);
  iVar5 = (int)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar7 < 0) {
    uVar3 = (uint)uVar10 >> 0x1e | iVar5 << 2;
    uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 0x68);
    uVar3 = (int)(((int)uVar3 >> 0x1f & 3U) + uVar3) >> 2;
    uVar10 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
    uVar10 = __allmul(uVar4 << 0xf,((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11,uVar10);
    uVar4 = (uint)uVar10 >> 0x1e | (int)((ulonglong)uVar10 >> 0x20) << 2;
    if ((int)uVar4 < 0x32) {
      uVar4 = 0x32;
    }
    if ((int)-uVar4 < (int)uVar3) {
      uVar3 = -uVar4;
    }
    if ((int)uVar7 <= (int)uVar3) goto LAB_004ee257;
  }
  else {
    uVar3 = (uint)uVar10 >> 0x1e | iVar5 << 2;
    uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 100);
    uVar10 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
    uVar10 = __allmul(uVar4 << 0xf,((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11,uVar10);
    uVar4 = (uint)uVar10 >> 0x1e | (int)((ulonglong)uVar10 >> 0x20) << 2;
    if ((int)uVar4 < 0x32) {
      uVar4 = 0x32;
    }
    if ((int)uVar3 < (int)uVar4) {
      uVar3 = uVar4;
    }
    if ((int)uVar3 <= (int)uVar7) goto LAB_004ee257;
  }
  uVar3 = uVar7;
LAB_004ee257:
  iVar5 = *(int *)(param_2 + 0x11c) - *(int *)(param_2 + 0x118) >> 3;
  if ((int)uVar3 < 0) {
    iVar9 = -uVar3;
    param_3 = 0;
    if (0 < iVar5) {
      while (iVar9 != 0) {
        iVar6 = *(int *)(*(int *)(param_2 + 0x118) + param_3 * 8);
        iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + *(int *)(iVar6 + 0x28) * 4);
        iVar8 = iVar9;
        if (iVar2 < iVar9) {
          iVar8 = iVar2;
        }
        FUN_004ee650(iVar6,iVar8);
        param_3 = param_3 + 1;
        iVar9 = iVar9 - iVar8;
        if (iVar5 <= param_3) {
          return;
        }
      }
    }
  }
  else {
    iVar9 = 0;
    if (0 < iVar5) {
      do {
        if (uVar3 == 0) {
          return;
        }
        iVar6 = FUN_004ee780(*(undefined4 *)(*(int *)(param_2 + 0x118) + iVar9 * 8),uVar3);
        iVar9 = iVar9 + 1;
        uVar3 = uVar3 - iVar6;
      } while (iVar9 < iVar5);
    }
  }
  return;
}

