// FUN_0056c480 @ 0056c480 body=[[0056c480, 0056c69c] [0056c6a0, 0056c835] [0056c840, 0056c8f4]]


/* WARNING: Removing unreachable block (ram,0x0056c760) */
/* WARNING: Removing unreachable block (ram,0x0056c8d1) */
/* WARNING: Removing unreachable block (ram,0x0056c69b) */
/* WARNING: Removing unreachable block (ram,0x0056c6a0) */
/* WARNING: Removing unreachable block (ram,0x0056c709) */
/* WARNING: Removing unreachable block (ram,0x0056c710) */
/* WARNING: Removing unreachable block (ram,0x0056c86a) */
/* WARNING: Removing unreachable block (ram,0x0056c870) */

void FUN_0056c480(int *param_1)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = (int)param_1;
  iVar4 = DAT_012586dc;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x68) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  *(undefined4 *)((int)param_1 + 0x74) = 0;
  *(undefined4 *)((int)param_1 + 0x7c) = 0;
  *(undefined4 *)((int)param_1 + 0x78) = 0;
  *(undefined4 *)((int)param_1 + 0x294) = *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x58);
  *(undefined4 *)((int)param_1 + 0x80) = 0;
  *(undefined4 *)((int)param_1 + 0x84) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x29c) = 0;
  *(undefined4 *)((int)param_1 + 0x2a0) = 0;
  if (DAT_0125d36c == 0) {
    param_1 = (int *)FUN_00aae9af(0x1c);
    local_8 = 0;
    if (param_1 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_008b0060();
    }
    local_8 = 0xffffffff;
    FUN_004ec430(uVar3);
  }
  piVar7 = (int *)(iVar1 + 0x88);
  FUN_004d5f50();
  iVar4 = 0;
  if (0 < (int)(*(int *)(iVar1 + 0x8c) - *piVar7 & 0xfffffffcU)) {
    do {
      *(undefined4 *)(*piVar7 + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x8c) - *piVar7 >> 2);
  }
  iVar4 = DAT_012587f0;
  *(undefined4 *)(iVar1 + 0x280) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined2 *)(iVar1 + 0x2a4) = 0;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  _Src = *(void **)(iVar1 + 0x9c);
  uVar9 = *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2;
  uVar6 = (int)_Src - *(int *)(iVar1 + 0x98) >> 2;
  if (uVar9 < uVar6) {
    _Dst = (void *)(*(int *)(iVar1 + 0x98) + uVar9 * 4);
    if (_Dst == _Src) goto LAB_0056c648;
    param_1 = (int *)0x0;
    FID_conflict__memcpy(_Dst,_Src,0);
    iVar4 = (int)param_1 + (int)_Dst;
  }
  else {
    if (uVar9 <= uVar6) goto LAB_0056c648;
    param_1 = (int *)uVar9;
    FUN_007b94a0();
    puVar8 = *(undefined4 **)(iVar1 + 0x9c);
    iVar4 = uVar9 - ((int)puVar8 - *(int *)(iVar1 + 0x98) >> 2);
    if (iVar4 != 0) {
      for (; uVar9 = (uint)param_1, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    iVar4 = *(int *)(iVar1 + 0x9c) +
            (uVar9 - (*(int *)(iVar1 + 0x9c) - *(int *)(iVar1 + 0x98) >> 2)) * 4;
  }
  *(int *)(iVar1 + 0x9c) = iVar4;
LAB_0056c648:
  iVar4 = *(int *)(iVar1 + 0x164);
  piVar7 = (int *)(iVar1 + 0x160);
  uVar6 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  uVar9 = iVar4 - *(int *)(iVar1 + 0x160) >> 2;
  local_18 = 0;
  param_1 = piVar7;
  if (uVar9 < uVar6) {
    FUN_0057acf0(iVar4,&local_18);
  }
  else if ((uVar6 < uVar9) && (iVar5 = *(int *)(iVar1 + 0x160) + uVar6 * 4, iVar5 != iVar4)) {
    *(int *)(iVar1 + 0x164) = iVar5;
  }
  iVar4 = 0;
  iVar5 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  if (0 < iVar5) {
    do {
      *(undefined4 *)(*(int *)(iVar1 + 0x98) + iVar4 * 4) = 0;
      *(undefined4 *)(*piVar7 + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  local_1c = 0;
  piVar7 = (int *)(iVar1 + 0x170);
  local_18 = 4;
  do {
    local_14 = 4;
    do {
      if (*piVar7 != piVar7[1]) {
        piVar7[1] = *piVar7;
      }
      iVar4 = piVar7[1];
      uVar9 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
      uVar6 = iVar4 - *piVar7 >> 2;
      if (uVar6 < uVar9) {
        FUN_0057acf0(iVar4,&local_1c);
      }
      else if ((uVar9 < uVar6) && (iVar5 = *piVar7 + uVar9 * 4, iVar5 != iVar4)) {
        piVar7[1] = iVar5;
      }
      piVar2 = param_1;
      piVar7 = piVar7 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  *(undefined4 *)(iVar1 + 0x270) = 0;
  *(undefined4 *)(iVar1 + 0x274) = 0;
  *(undefined4 *)(iVar1 + 0x278) = 0;
  *(undefined4 *)(iVar1 + 0x27c) = 0;
  *(undefined4 *)(iVar1 + 0x284) = 0;
  *(undefined4 *)(iVar1 + 0x288) = 0;
  *(undefined4 *)(iVar1 + 0x28c) = 0;
  *(undefined4 *)(iVar1 + 0x290) = 0;
  *(undefined4 *)(iVar1 + 0x298) = 0;
  iVar5 = 0;
  iVar4 = DAT_012587f0;
  if (0 < (int)(*(int *)(iVar1 + 0x9c) - *(int *)(iVar1 + 0x98) & 0xfffffffcU)) {
    do {
      iVar4 = DAT_012587f0;
      if (*(char *)(*(int *)(*(int *)(DAT_012587f0 + 0xc) + iVar5 * 4) + 0x2a) == '\0') {
        *(undefined4 *)(*(int *)(iVar1 + 0x98) + iVar5 * 4) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 0x98) + iVar5 * 4) = 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar1 + 0x9c) - *(int *)(iVar1 + 0x98) >> 2);
  }
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  puVar8 = (undefined4 *)(iVar1 + 0xe0);
  puVar10 = (undefined4 *)(iVar1 + 0xe8);
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar5 = 0;
  if (0 < (int)(*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) & 0xfffffffcU)) {
    do {
      *(undefined4 *)(*(int *)(iVar1 + 8) + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 2);
  }
  if (*param_1 != param_1[1]) {
    param_1[1] = *param_1;
  }
  iVar5 = param_1[1];
  iVar1 = *param_1;
  uVar9 = *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2;
  uVar6 = iVar5 - iVar1 >> 2;
  param_1 = (int *)0x0;
  if (uVar6 < uVar9) {
    FUN_0057acf0(iVar5,&param_1);
    ExceptionList = local_10;
    return;
  }
  if ((uVar9 < uVar6) && (iVar1 = iVar1 + uVar9 * 4, iVar1 != iVar5)) {
    piVar2[1] = iVar1;
  }
  ExceptionList = local_10;
  return;
}

