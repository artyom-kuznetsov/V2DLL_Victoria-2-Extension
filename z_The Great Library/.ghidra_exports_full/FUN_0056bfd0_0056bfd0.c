// FUN_0056bfd0 @ 0056bfd0 body=[[0056bfd0, 0056c2dc] [0056c2e0, 0056c2e8] [0056c2f0, 0056c3a3] [0056c3a7, 0056c448]]


/* WARNING: Removing unreachable block (ram,0x0056c32d) */
/* WARNING: Removing unreachable block (ram,0x0056c330) */
/* WARNING: Removing unreachable block (ram,0x0056c3fc) */
/* WARNING: Removing unreachable block (ram,0x0056c400) */

undefined4 * FUN_0056bfd0(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3fcdf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CTechStatistics::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar6 = param_1 + 0x38;
  puVar7 = param_1 + 0x3a;
  for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  local_8 = 6;
  uStack_7 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x5c,0x10,0x10,FUN_00413490,FUN_00aa8540);
  local_8 = 7;
  uVar2 = local_8;
  local_8 = 7;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  if (DAT_0125d36c == 0) {
    iVar4 = FUN_00aae9af();
    local_8 = 8;
    if (iVar4 != 0) {
      FUN_008b0060();
    }
    local_8 = 7;
    FUN_004ec430();
    uVar2 = local_8;
  }
  local_8 = uVar2;
  FUN_004d5f50();
  param_1[0xa5] = *(undefined4 *)(*(int *)(DAT_012586dc + 0x40) + 0x58);
  uVar3 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  uVar5 = (int)(param_1[0x27] - param_1[0x26]) >> 2;
  if (uVar5 < uVar3) {
    FUN_0043cb20(param_1 + 0x26,param_1[0x27]);
  }
  else if (uVar3 < uVar5) {
    FUN_0054ab90(param_1 + 0x26,param_1[0x26] + uVar3 * 4);
  }
  if (DAT_0125ce80 == 0) {
    iVar4 = FUN_00aae9af();
    local_8 = 9;
    if (iVar4 != 0) {
      FUN_004dada0();
    }
    local_8 = 7;
    FUN_004dc340();
  }
  uVar3 = *(int *)(DAT_0125ce80 + 0x10) - *(int *)(DAT_0125ce80 + 0xc) >> 2;
  uVar5 = (int)(param_1[3] - param_1[2]) >> 2;
  if (uVar5 < uVar3) {
    FUN_0043cb20(param_1 + 2,param_1[3]);
  }
  else if (uVar3 < uVar5) {
    FUN_0054ab90(param_1 + 2,param_1[2] + uVar3 * 4);
  }
  FUN_0057aa50();
  piVar8 = param_1 + 0x5c;
  local_18 = 4;
  do {
    local_14 = 4;
    do {
      iVar4 = piVar8[1];
      uVar3 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
      uVar5 = iVar4 - *piVar8 >> 2;
      if (uVar5 < uVar3) {
        FUN_0057acf0(iVar4);
      }
      else if ((uVar3 < uVar5) && (iVar1 = *piVar8 + uVar3 * 4, iVar1 != iVar4)) {
        piVar8[1] = iVar1;
      }
      piVar8 = piVar8 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (DAT_0125d36c == 0) {
    iVar4 = FUN_00aae9af();
    local_8 = 10;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_008b0060();
    }
    _local_8 = CONCAT31(uStack_7,0xb);
    if ((iVar4 != DAT_0125d36c) && (DAT_0125d36c != 0)) {
      FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 7;
    DAT_0125d36c = iVar4;
  }
  iVar4 = param_1[0x23];
  uVar3 = *(int *)(DAT_0125d36c + 0x10) - *(int *)(DAT_0125d36c + 0xc) >> 2;
  uVar5 = iVar4 - param_1[0x22] >> 2;
  if (uVar5 < uVar3) {
    FUN_0057acf0(iVar4);
  }
  else if ((uVar3 < uVar5) && (iVar1 = param_1[0x22] + uVar3 * 4, iVar1 != iVar4)) {
    param_1[0x23] = iVar1;
  }
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  ExceptionList = local_10;
  return param_1;
}

