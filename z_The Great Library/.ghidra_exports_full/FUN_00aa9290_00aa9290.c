// FUN_00aa9290 @ 00aa9290 body=[[00aa9290, 00aa933f] [00aa9343, 00aa94d8] [00aa94e4, 00aa950f]]


void FUN_00aa9290(int *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *in_ECX;
  uint uVar8;
  uint uVar9;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_1c [2];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36618;
  local_10 = ExceptionList;
  uVar5 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar6 = &param_2;
  if (param_2 <= param_1) {
    puVar6 = (uint *)&param_1;
  }
  local_14 = in_ECX;
  if ((uint)((in_ECX[1] - *in_ECX) / 0x14) <= *puVar6) {
    uVar9 = *puVar6 + 1;
    FUN_00aa8f90(uVar9);
    for (uVar8 = (in_ECX[1] - *in_ECX) / 0x14; uVar8 < uVar9; uVar8 = uVar8 + 1) {
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_8 = 0;
      local_30 = uVar8;
      FUN_00aa91c0(&local_30);
      local_8 = 0xffffffff;
      if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c);
      }
      local_2c = 0;
    }
  }
  uVar9 = param_2;
  iVar7 = *in_ECX;
  puVar1 = *(uint **)(iVar7 + 4 + (int)param_1 * 0x14);
  puVar2 = *(uint **)(iVar7 + 8 + (int)param_1 * 0x14);
  param_1 = (int *)(iVar7 + 4 + (int)param_1 * 0x14);
  puVar6 = puVar1;
  iVar7 = (int)puVar2 - (int)puVar1 >> 3;
  while (iVar3 = iVar7, 0 < iVar3) {
    iVar7 = iVar3 / 2;
    if (puVar6[iVar7 * 2] < param_2) {
      puVar6 = puVar6 + iVar7 * 2 + 2;
      iVar7 = iVar3 + (-1 - iVar7);
    }
  }
  if ((puVar6 != puVar2) && (*puVar6 == param_2)) {
    ExceptionList = local_10;
    return;
  }
  uVar8 = (int)puVar6 - (int)puVar1 >> 3;
  local_1c[0] = param_2;
  local_1c[1] = param_3;
  param_2 = uVar8;
  if ((local_1c < puVar2) && (puVar1 <= local_1c)) {
    iVar7 = (int)local_1c - (int)puVar1 >> 3;
    if (puVar2 == (uint *)param_1[2]) {
      uVar9 = (int)puVar2 - (int)puVar1 >> 3;
      if (0x1ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long",uVar5);
      }
      uVar9 = uVar9 + 1;
      uVar5 = param_1[2] - (int)puVar1 >> 3;
      if (uVar5 < uVar9) {
        if (0x1fffffff - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar9) {
          uVar5 = uVar9;
        }
        FUN_00aabda0(uVar5);
      }
    }
    puVar6 = (uint *)param_1[1];
    if (puVar6 == (uint *)0x0) goto LAB_00aa948b;
    iVar3 = *param_1;
    *puVar6 = *(uint *)(iVar3 + iVar7 * 8);
    uVar5 = *(uint *)(iVar3 + 4 + iVar7 * 8);
  }
  else {
    if (puVar2 == (uint *)param_1[2]) {
      uVar8 = (int)puVar2 - (int)puVar1 >> 3;
      if (0x1ffffffe < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long",uVar5);
      }
      uVar8 = uVar8 + 1;
      uVar5 = param_1[2] - (int)puVar1 >> 3;
      if (uVar5 < uVar8) {
        if (0x1fffffff - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar8) {
          uVar5 = uVar8;
        }
        FUN_00aabda0(uVar5);
      }
    }
    puVar6 = (uint *)param_1[1];
    if (puVar6 == (uint *)0x0) goto LAB_00aa948b;
    *puVar6 = uVar9;
    uVar5 = local_1c[1];
  }
  puVar6[1] = uVar5;
LAB_00aa948b:
  param_1[1] = param_1[1] + 8;
  iVar4 = param_1[1];
  iVar7 = iVar4 + -8;
  iVar3 = *param_1 + param_2 * 8;
  if ((iVar3 != iVar7) && (iVar7 != iVar4)) {
    FUN_00aa7f70(iVar3,iVar7,iVar4,0,0);
  }
  iVar7 = *(int *)(local_14[5] + 4);
  if (*(char *)(iVar7 + 0x25) != '\0') {
    *(int *)(local_14[5] + 4) = local_14[5];
    *(int *)local_14[5] = local_14[5];
    *(int *)(local_14[5] + 8) = local_14[5];
    local_14[6] = 0;
    ExceptionList = local_10;
    return;
  }
  FUN_00aa7830(*(undefined4 *)(iVar7 + 8));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar7);
}

