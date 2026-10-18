// FUN_007d1f50 @ 007d1f50 body=[[007d1f50, 007d2072]]


/* WARNING: Removing unreachable block (ram,0x007d203b) */

void FUN_007d1f50(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  while (param_3 < param_2) {
    iVar5 = (param_2 + -1) / 2;
    iVar1 = *param_4;
    iVar2 = *(int *)(param_1 + iVar5 * 4);
    if (*(int *)(iVar1 + 0x58) == 0) {
      lVar6 = 0;
    }
    else if (*(char *)(*(int *)(iVar1 + 0x68) + 0x40) == '\0') {
      lVar6 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar1 + 0x58);
      uVar4 = uVar3 - *(int *)(iVar1 + 0x60);
      lVar6 = __alldiv(uVar4 * 0x40000000,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,uVar3 << 0xf,
                       ((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11);
    }
    if (*(int *)(iVar2 + 0x58) == 0) {
      lVar7 = 0;
    }
    else if (*(char *)(*(int *)(iVar2 + 0x68) + 0x40) == '\0') {
      lVar7 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar2 + 0x58);
      uVar4 = uVar3 - *(int *)(iVar2 + 0x60);
      lVar7 = __alldiv(uVar4 * 0x40000000,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,uVar3 << 0xf,
                       ((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11);
    }
    if (lVar6 <= lVar7) break;
    *(int *)(param_1 + param_2 * 4) = iVar2;
    param_2 = iVar5;
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

